#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }

        vector<int> nums2;
        nums2.push_back(nums[0]);  // Add the first element to nums2

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                nums2.push_back(nums[i]);
            }
        }

        // Copy the unique elements back to the original vector nums
        for(int i = 0; i < nums2.size(); i++) {
            nums[i] = nums2[i];
        }

        // Uncomment the following lines if you want to print the modified nums vector
        // for(int i = 0; i < nums2.size(); i++) {
        //     cout << nums2[i] << ",";
        // }
        // cout << endl;

        return nums2.size();
    }
};



