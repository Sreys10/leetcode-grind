#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count1, count2;

        // Helper function to count words in a sentence
        auto countWords = [&](const string& sentence, unordered_map<string, int>& countMap) {
            stringstream ss(sentence);
            string word;
            while (ss >> word) {
                countMap[word]++;
            }
        };

        // Count words in both sentences
        countWords(s1, count1);
        countWords(s2, count2);

        vector<string> result;

        // Collect uncommon words
        auto checkUncommon = [&](const unordered_map<string, int>& countMap1, const unordered_map<string, int>& countMap2) {
            for (const auto& entry : countMap1) {
                if (entry.second == 1 && countMap2.find(entry.first) == countMap2.end()) {
                    result.push_back(entry.first);
                }
            }
        };

        checkUncommon(count1, count2);
        checkUncommon(count2, count1);

        return result;
    }
};

