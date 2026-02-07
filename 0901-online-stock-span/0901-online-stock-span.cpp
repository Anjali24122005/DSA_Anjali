class StockSpanner {
public:
// vector<int> v;
stack<pair<int, int>> st;
int ind;
    StockSpanner() {
        ind=-1;
    }
    
    int next(int price) {
        // v.push_back(price);
        // int cnt=1;
        // for(int i=v.size()-2;i>=0;i--){
        //     if(v[i]<=price) cnt++;
        //     else break;
        // }
        // return cnt;
        ind++;
        while(!st.empty() && st.top().first<=price){
            st.pop();
        }

        int span;
        if(st.empty()){
            span=ind+1;
        }else{
            span=ind-st.top().second;
        }
        st.push({price, ind});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */