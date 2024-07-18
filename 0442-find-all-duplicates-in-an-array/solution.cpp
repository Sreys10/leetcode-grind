class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        
        // Sort the vector
        sort(nums.begin(), nums.end());
        
        // Iterate through sorted vector and check for duplicates
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                duplicates.push_back(nums[i]);
            }
        }
        
        return duplicates;
    }
};
