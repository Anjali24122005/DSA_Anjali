class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
    //     int maxi=*max_element(nums.begin(), nums.end());
    //     for(int d=1;d<=maxi;d++){
    //         int sum=0;
    //         for(int i=0;i<nums.size();i++){
    //             sum+=ceil((double)nums[i]/d);
    //         }
    //         if(sum<=threshold) return d;
    //     }
    //     return -1;

    int low=1,high=*max_element(nums.begin(), nums.end());
    while(low<=high){
        int sum=0;
        int mid=low+(high-low)/2;
        for(int i=0;i<nums.size();i++){
            //sum+=ceil(double(nums[i])/mid);
            sum+=(nums[i]+mid-1)/mid;
        }
        if(sum<=threshold){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
    }
};