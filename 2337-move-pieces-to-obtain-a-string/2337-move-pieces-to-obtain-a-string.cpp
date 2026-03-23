class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.size();
        string s1="", t1="";
        for(char ch:start){
           if(ch!='_') s1+=ch;
        }
        for(char ch:target){
            if(ch!='_') t1+=ch;
        }
        
        if(s1!=t1) return false;
        int sp=0, tp=0;
        while(sp<n &&tp<n){
            while(sp<n && start[sp]=='_') sp++;
            while(tp<n && target[tp]=='_') tp++;
            if(sp==n && tp==n) return true;
            if(sp==n || tp==n) return false;

            if(start[sp]!=target[tp]) return false;
            if(start[sp]=='L' && sp<tp) return false;
            if(start[sp]=='R' && sp>tp) return false;
            sp++; tp++;
        } 
        return true;
    }
};