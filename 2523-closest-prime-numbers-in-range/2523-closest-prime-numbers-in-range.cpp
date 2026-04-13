class Solution {
public:
    bool isPrime(int n) {
        if(n < 2) return false;
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) return false;
        }
        return true;
    }
    
    vector<int> closestPrimes(int left, int right) {
        int prev = -1, minDiff = INT_MAX;
        vector<int> ans = {-1, -1};
        for(int i = left; i <= right; i++) {
            if(isPrime(i)) {
                if(prev != -1 && i - prev < minDiff) {
                    minDiff = i - prev;
                    ans = {prev, i};
                }
                prev = i;
            }
        }
        return ans;
    }
};