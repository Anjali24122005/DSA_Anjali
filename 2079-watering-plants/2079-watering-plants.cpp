class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int can=capacity;
        int n=plants.size();
        for(int i=0;i<n;i++){
            if(can>=plants[i]){
                steps++;
                can-=plants[i];
            }else{
                steps+=2*i;
                can=capacity;
                steps++;
                can-=plants[i];
            }
        }
        return steps;
    }
};