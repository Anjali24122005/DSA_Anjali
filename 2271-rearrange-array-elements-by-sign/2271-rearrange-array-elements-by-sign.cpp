class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int>pos;
        // vector<int>neg;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0){
        //         pos.push_back(nums[i]);
        //     }
        //     else{
        //         neg.push_back(nums[i]);
        //     }
        // }
        // vector<int> result;
        // int i=0,j=0;
        // while(i<pos.size() && j<neg.size()){
        //     result.push_back(pos[i++]);
        //     result.push_back(neg[j++]);
        // }
        //  while (i < pos.size()) {
        //     result.push_back(pos[i++]);
        // }
        // while (j < neg.size()) {
        //     result.push_back(neg[j++]);
        // }

        // return result;
        int n=nums.size();
        vector<int> result(n);
        int pos=0, neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                result[pos]=nums[i];
                pos+=2;
            }
            else{
                result[neg]=nums[i];
                neg+=2;
            }

        } 
        return result;
    }
};