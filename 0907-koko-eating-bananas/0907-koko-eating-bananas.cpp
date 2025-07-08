class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1, high=*max_element(piles.begin(), piles.end());
;
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalhours=0;

            for(int pile:piles){
                // int hours=ceil(pile/mid);
                // totalhours+=hours;
                totalhours += ceil((double)pile / mid); 
            }
            if(totalhours<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};