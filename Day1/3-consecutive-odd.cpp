// 3-Consecutive-Odds.cpp
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for (int num : arr) {
            if (num % 2 != 0) {
                count++;
                if (count == 3) return true;
            } else {
                count = 0;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 34, 3, 4, 5, 7, 23, 12};
    cout << (solution.threeConsecutiveOdds(arr) ? "true" : "false") << endl;
    return 0;
}
