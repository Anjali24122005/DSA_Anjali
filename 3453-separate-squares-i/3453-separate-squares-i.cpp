class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low = 1e9, high = -1e9;
        double totalArea = 0.0;

        // Find bounds and total area
        for (auto &sq : squares) {
            double y = sq[1];
            double l = sq[2];
            low = min(low, y);
            high = max(high, y + l);
            totalArea += l * l;
        }

        double target = totalArea / 2.0;

        // Binary search on y
        for (int iter = 0; iter < 100; iter++) {
            double mid = (low + high) / 2.0;
            double below = 0.0;

            for (auto &sq : squares) {
                double y = sq[1];
                double l = sq[2];

                if (mid <= y) {
                    continue; // completely above
                } 
                else if (mid >= y + l) {
                    below += l * l; // completely below
                } 
                else {
                    // partially cut square
                    below += (mid - y) * l;
                }
            }

            if (below < target)
                low = mid;
            else
                high = mid;
        }

        return low;
    }
};
