#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int highest = 0;

        for (int i = 0; i < gain.size(); i++) {
            altitude += gain[i];

            highest = max(highest, altitude);
        }

        return highest;
    }
};
