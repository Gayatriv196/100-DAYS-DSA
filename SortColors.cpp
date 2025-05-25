
#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sol.sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
