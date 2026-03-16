class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        // int refill=0;
        // int n=plants.size();
        // int a=0, b=n-1;
        // int cana=capacityA, canb=capacityB;
        // while(a<b){
        //     if(plants[a]<=cana){
        //         cana-=plants[a];
        //         a++;
        //     }else{
        //         cana=capacityA;
        //         cana-=plants[a];
        //         refill++;
        //         a++;
        //     }
        //     if(plants[b]<=canb){
        //         canb-=plants[b];
        //         b--;
        //     }else{
        //         canb=capacityB;
        //         canb-=plants[b];
        //         refill++;
        //         b--;
        //     }
        //     if(a==b){
        //         if(canb>cana){
        //             if(plants[b]<=canb){
        //                 canb-=plants[b];
        //                 b--;
        //             }else{
        //                 canb=capacityB;
        //                 canb-=plants[b];
        //                 refill++;
        //                 b--;
        //             }
        //         }
        //         else{
        //             if(plants[a]<=cana){
        //                 cana-=plants[a];
        //                 a++;
        //             }else{
        //                 cana=capacityA;
        //                 cana-=plants[a];
        //                 refill++;
        //                 a++;
        //             }
        //         }
        //     }

        // }
        // return refill;
        int n=plants.size();
        int left=0;
        int right=n-1;
        int cana=capacityA, canb=capacityB;
        int refill=0;

        while(left<right){
            if(cana<plants[left]){
                cana=capacityA;
                refill++;
            }
            cana-=plants[left];
            left++;

            if(canb<plants[right]){
                canb=capacityB;
                refill++;
            }
            canb-=plants[right];
            right--;
        }

        if(left==right){
            if(max(cana,canb)<plants[left]){
                refill++;
            }
        }
        return refill;
    }
};