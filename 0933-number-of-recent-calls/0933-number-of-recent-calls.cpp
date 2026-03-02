class RecentCounter {
public:
    queue<int> q;

    RecentCounter() {
        // Bhai, yahan kuch nahi karna, bas queue ready rakh!
    }
    
    int ping(int t) {
        q.push(t); // Naya request aaya, queue mein daal do!
        // Ab jo bhi t-3000 se pehle hai, unko nikaal do
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }
        return q.size(); // Queue mein jitne hai, wahi answer!
    }
};