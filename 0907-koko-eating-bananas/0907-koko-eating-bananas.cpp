#include <vector>
#include <cmath> // for ceil
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalHours = 0;

            for (int pile : piles) {
                // Use ceil by converting to double
                totalHours += ceil((double)pile / mid);
            }

            if (totalHours <= h) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return answer;
    }
};
