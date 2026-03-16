class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         area=min(height[i], height[j])*j-i;
        //         maxi=max(maxi,area);
        //     }
        // }
        // return maxi;

        int left=0, right=n-1;
        while(left<right){
            int area=min(height[left], height[right])*(right-left);
            maxi=max(maxi, area);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        
        return maxi;
    }
};

