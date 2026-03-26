class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        
        int penalty=0;
        for(char ch:customers){
            if(ch=='Y') penalty++;
        }
        int minpen=penalty;
        int besthour=0;
        for(int i=0;i<n;i++){
            if(customers[i]=='Y'){
                penalty--;
            }else{
                penalty++;
            }
            if(penalty<minpen){
                minpen=penalty;
                besthour=i+1;
            }
        }
        return besthour;
    }
};