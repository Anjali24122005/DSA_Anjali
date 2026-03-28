class Solution {
public:
    unordered_set<int>st;
    set<pair<int,int>>visited;
    int target;

    bool check(int pos, int lastjump){
        if(pos==target) return true;

        if(visited.count({pos, lastjump})) return false;

        for(int jump=lastjump-1;jump<=lastjump+1;jump++){
            if(jump>0 && st.count(pos+jump)){
                if(check(pos+jump, jump)){
                    return true;
                }
            } 
        }
        visited.insert({pos,lastjump});
        return false;
    }
    bool canCross(vector<int>& stones) {
        for(int num:stones) st.insert(num);
        target=stones.back();

        return check(0,0);
    }
};