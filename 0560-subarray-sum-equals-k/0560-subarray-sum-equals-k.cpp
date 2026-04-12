class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;//cnt=0
        int sum=0;//sum=0
        int n=nums.size();//n=3
        for(int i=0;i<n;i++){//i=0,i=1
            for(int j=i;j<n;j++){//j=0<3,j=1<3,j=2<3--j=1<3
                sum+=nums[j];//sum=1,sum=2,sum=3
                if(sum==k) cnt++;//1!=2//2==2 cnt=1
            }
            sum=0;
        }
        return cnt;
    }
};

// 1 1 1    k=2
// sum=0;
// i=0,j=0=sum=1
// i=0;j=1 sum=1+1=2
// i=0;j=2 sum=2+1=3
