class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalsum=0;
        int n=cardPoints.size();
        for(int i=0;i<n;i++){
            totalsum+=cardPoints[i];
        }

        int windowsize=n-k;
        int windowsum=0;
        

        for(int i=0;i<windowsize;i++){
            windowsum+=cardPoints[i];
        }

        int mini=windowsum;
        for(int i=windowsize;i<n;i++){
            windowsum+=cardPoints[i];
            windowsum-=cardPoints[i-windowsize];
            mini=min(mini, windowsum);
        }
        return totalsum-mini;
    }
};