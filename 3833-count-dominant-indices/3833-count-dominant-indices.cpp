class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int dominant=0;
        // for(int i=0;i<n;i++){
        //     int sum=0, cnt=0;
        //     for(int j=i+1;j<n;j++){
        //         sum+=nums[j];
        //         cnt++;
        //     }
        //     double avg=(double)sum/cnt;

        //     if(nums[i]>avg){
        //         dominant++;
        //     }
        // }
        // return dominant;

        int sum=0, cnt=0;
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            cnt++;
            double avg=(double)sum/cnt;

            if(nums[i]>avg) dominant++;
        }
        return dominant;
    }
};