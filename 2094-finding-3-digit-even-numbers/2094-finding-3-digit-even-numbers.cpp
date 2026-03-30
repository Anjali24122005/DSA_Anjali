class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>ans;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j && j!=k && i!=k){
                        if(digits[i]!=0){
                            if(digits[k]%2==0){
                            int num=digits[i]*100+digits[j]*10+digits[k];
                            ans.insert(num);
                            }
                        }
                        
                    }
                }
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};