class Solution {
public:
    string intToRoman(int num) {
        // Define pairs of Roman numeral strings and their values
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, 
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, 
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        string result = "";  // To store the result Roman numeral string
        
        // Loop through the roman vector and build the result
        for (auto &val : roman) {
            while (num >= val.first) {
                result += val.second;
                num -= val.first;
            }
        }
        
        return result;
    }
};

