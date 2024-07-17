#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numIndexMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement exists in the map
            if (numIndexMap.find(complement) != numIndexMap.end()) {
                // Found the pair
                return { numIndexMap[complement], i };
            }
            
            // Store the current number and its index in the map
            numIndexMap[nums[i]] = i;
        }
        
        // Return an empty vector if no such pair exists (though problem statement guarantees a solution)
        return {};
    }
};

