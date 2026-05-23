class Solution {
public:
    const long long MOD=1e9+7;
    long long power(long long x, long long n){
        long long ans=1;
        x = x % MOD;
        if(n==0) return 1;

        while(n>0){
            if(n%2==1){
                ans=(ans*x)%MOD;
            }
            x=(x*x)%MOD;
            n/=2;
        }
        return ans;
    }
    int minNonZeroProduct(int p) {
        long long maxnum=(1LL<<p)-1;
        long long secmax=maxnum-1;
        long long exponent=secmax / 2;

        return (power(secmax, exponent) * (maxnum % MOD)) % MOD;
    }
};