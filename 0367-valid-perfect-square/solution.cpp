class Solution {
public:
    bool isPerfectSquare(int num) {
        // Binary search approach to find the perfect square
        if (num < 1) return false;
        
        int low = 1, high = num;
        
        while (low <= high) {
            long mid = low + (high - low) / 2;
            long squared = mid * mid;
            
            if (squared == num) {
                return true;  // If we find a perfect square
            } else if (squared < num) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return false;  // If no perfect square found
    }
};

