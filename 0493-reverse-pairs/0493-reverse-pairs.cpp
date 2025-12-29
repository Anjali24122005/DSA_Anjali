class Solution {
public:
    int merge(vector<int>& nums, int left, int mid, int right){
        int cnt=0;
        int j=mid+1;
        for(int i=left; i<=mid;i++){
            while(j<=right && (long long) nums[i]>2LL* nums[j]){
                j++;
            }
            cnt+=(j-(mid+1));
        }
        vector<int> temp;
        int i=left, k=mid+1;
        while(i<=mid && k<=right){
            if(nums[i]<=nums[k]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[k++]);
            }
        }
        while(i<=mid) temp.push_back(nums[i++]);
        while(k<=right) temp.push_back(nums[k++]);
        for(int l=left;l<=right;l++){
            nums[l]=temp[l-left];
        }
        return cnt;
    }

    int mergesort(vector<int>& nums, int left, int right){
        if(left>=right) return 0;
        int mid=left+(right-left)/2;
        int cnt=mergesort(nums,left,mid);
        cnt+=mergesort(nums,mid+1,right);
        cnt+=merge(nums, left,mid, right);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
        // int cnt=0;
        // for(long long int i=0;i<nums.size()-1;i++){
        //     for(long long int j=i+1;j<nums.size();j++){
        //         if(nums[i]>2LL*nums[j]){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;

        
    }
};