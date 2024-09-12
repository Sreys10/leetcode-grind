class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        // Create a set of allowed characters for quick lookup
        unordered_set<char> allowedSet(allowed.begin(), allowed.end());

        // Iterate through each word in the words vector
        for (const string& word : words) {
            bool isConsistent = true;
            
            // Check if each character of the word is in the allowed set
            for (char c : word) {
                if (allowedSet.find(c) == allowedSet.end()) {
                    isConsistent = false;
                    break;
                }
            }

            // If the word is consistent, increase the count
            if (isConsistent) {
                count++;
            }
        }
        return count;
    }
};

