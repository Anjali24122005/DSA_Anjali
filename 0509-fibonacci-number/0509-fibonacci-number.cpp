class Solution {
public:
    int fibbo(int n, vector<int>&v){
        if(n<=1){
            return n;
        }
        if(v[n]!=-1){
            return v[n];
        }

        v[n]=fibbo(n-1, v)+fibbo(n-2,v);
        return v[n];
    }
    int fib(int n) {
        vector<int>memo(n+1,-1);
        return fibbo(n,memo);
    }
};