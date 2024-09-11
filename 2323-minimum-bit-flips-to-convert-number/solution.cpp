class Solution {
public:
    int minBitFlips(int start, int goal) {
    int xor_result=start ^ goal;
    int count=0;
    while (xor_result > 0) {
        // Increment count for each set bit
        count += xor_result & 1;
        // Right shift xor_result by 1 to check the next bit
        xor_result >>= 1;
    }
    return count;
    }
};
