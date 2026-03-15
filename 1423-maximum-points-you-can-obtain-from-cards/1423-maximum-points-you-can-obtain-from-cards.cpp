class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int totalsum=0;
        for(int i=0;i<cardPoints.size();i++){
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