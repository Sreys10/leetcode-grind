#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;  // Stores the maximum count of consecutive ones
        int currentCount = 0;  // Stores the current count of consecutive ones

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentCount++;  // Increment the current count for consecutive ones
            } else {
                maxCount = max(maxCount, currentCount);  // Update maxCount if currentCount is higher
                currentCount = 0;  // Reset currentCount for the next sequence
            }
        }

        // Final update in case the longest sequence ends at the last element
        maxCount = max(maxCount, currentCount);
        return maxCount;
    }
};

