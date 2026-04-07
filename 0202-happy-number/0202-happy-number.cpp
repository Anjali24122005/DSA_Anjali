class Solution {
public:
    bool isHappy(int n) {//n=19
        unordered_set<int>seen;//seen={}

        while(n!=1 && seen.find(n)==seen.end()){//19!=1 && ok,82!=1 && ok,68!=0 && ok,100!=0 && ok,n==1
            seen.insert(n);//seen={19,82,68,100}

            int sum=0;
            while(n>0){//19>0, 1>0,0==0--82>0, 8>0--68>0-- 100>0,10>0,1>0
                int digit=n%10;//digit=19%10=9, 1--2,8--8,6--0,0,1
                sum+=digit*digit;//sum=81, 82--4+64=68--64+36=100--sum=0+0=0+1=1
                n/=10;//n=1,n=0--n=8,n=0,n=6,n=0,n=10,n=1,n=0
            }
            n=sum;//n=82,n=68,n=100,n=1
        }
        return n==1;
    }
};

