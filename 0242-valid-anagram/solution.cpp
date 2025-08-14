class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()) return false;

        //we need to store the frequency of the characters here
        map<char, int>ss;
        map<char, int>tt;

        //count frequency of each character in each string
        for(int i=0; i<s.size(); i++){
            ss[s[i]]++;
            tt[t[i]]++;
        }

        

        return ss==tt;  //compare the frequenccies


    }
};
