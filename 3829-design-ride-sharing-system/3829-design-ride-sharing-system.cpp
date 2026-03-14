class RideSharingSystem {
public:
    std:: list<int>qr;
    queue<int>qd;

    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        qr.push_back(riderId);
    }
    
    void addDriver(int driverId) {
        qd.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        if(!qr.empty() && !qd.empty()){
            int r=qr.front();
            int d=qd.front();
            qr.pop_front();
            qd.pop();
            return {d,r};
           
        }
        return {-1,-1};
    }
    
    void cancelRider(int riderId) {
        for(auto it=qr.begin();it!=qr.end();++it){
            if(*it==riderId){
                qr.erase(it);
                break;
            }
        }
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */