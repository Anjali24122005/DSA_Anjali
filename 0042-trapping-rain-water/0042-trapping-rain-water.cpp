class Solution {
public:
    int trap(vector<int>& height) {
        // int res=0;
        // int n=height.size();
        // // for(int i=1;i<height.size();i++){
        // //     int left=height[i];
        // //     for(int j=0;j<i;j++){
        // //         left=max(left, height[j]);
        // //     }
        // //     int right=height[i];
        // //     for(int j=i+1;j<n;j++){
        // //         right=max(right, height[j]);
        // //     }

        // //     res+=min(left, right)-height[i];
        // // }
        // if(n<3) return 0;
        // vector<int>left(n);
        // vector<int>right(n);

        // left[0]=height[0];
        // for(int i=1;i<n;i++){
        //     left[i]=max(left[i - 1], height[i]);
        // }

        // right[n-1]=height[n-1];
        // for(int i=n-2;i>=0;i){
        //     right[i]=max(right[i+1],height[i]);
        // }

        // for(int i=1;i<n-1;i++){
        //     int mini=min(left[i],right[i]);
        //     res+=mini-height[i];
        // }
        // return res;
        int n=height.size();
        int left=1, right=n-2;
        int leftmax=height[left-1], rightmax=height[right+1];
        int res=0;

        while(left<=right){
            if(rightmax<=leftmax){
                res+=max(0, rightmax-height[right]);
                rightmax=max(rightmax, height[right]);
                right--;
            }else{
                res+=max(0, leftmax-height[left]);
                leftmax=max(leftmax, height[left]);
                left++;
            }
        }
        return res;

    }
};