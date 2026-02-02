// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int max_val = INT_MIN;

//         for(int i=0; i<nums.size(); i++){
//             int sum = 0;

//             for(int j = i; j<nums.size(); j++){
//                 sum=sum+nums[j];
//                 max_val= max(max_val, sum);
//             }
//         }

//         return max_val;
//     }
// };

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
