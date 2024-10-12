class Solution {
public:
    double myPow(double x, int n) {
        // Convert n to long long to avoid overflow for n = INT_MIN
        long long power = n;
        
        // If n is negative, invert x and make power positive
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }
        
        double result = 1.0;
        
        // Exponentiation by squaring
        while (power > 0) {
            // If power is odd, multiply result by x
            if (power % 2 == 1) {
                result *= x;
            }
            // Square the base and divide the power by 2
            x *= x;
            power /= 2;
        }
        
        return result;
    }
};


