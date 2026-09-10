#include <vector>
#include <string>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i].find('+') != string::npos) {
                x++;
            } else {
                x--;
            }
        }

        return x;
    }
};