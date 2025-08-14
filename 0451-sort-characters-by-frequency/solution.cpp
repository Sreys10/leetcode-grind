class Solution {
public:
    string frequencySort(string s) {
        //map char to their freqeuncies
        unordered_map<char, int>freq;  //here we will be using the unordered map because map stores char accord to their alphabeticall order

        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
        }

        //sort the string
        sort(s.begin(), s.end(), [&](char a, char b) {
            if (freq[a] == freq[b])
                return a < b; // optional: sort alphabetically if same freq
            return freq[a] > freq[b]; // higher freq first
        });

        return s;
    }
};
