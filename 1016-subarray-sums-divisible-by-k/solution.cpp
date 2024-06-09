class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    int count = 0;
    int prefix_sum = 0;
    unordered_map<int, int> remainder_freq;
    remainder_freq[0] = 1;  // To handle the case where prefix sum itself is divisible by k
    
    for (int num : nums) {
        prefix_sum += num;
        int remainder = prefix_sum % k;
        if (remainder < 0)  // Handle negative remainders
            remainder += k;
        
        if (remainder_freq.find(remainder) != remainder_freq.end()) {
            count += remainder_freq[remainder];
            remainder_freq[remainder]++;
        } else {
            remainder_freq[remainder] = 1;
        }
    }
    
    return count;
}
};
