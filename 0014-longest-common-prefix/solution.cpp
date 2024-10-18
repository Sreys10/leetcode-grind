class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string result="";
    int n=strs.size();

    string first=strs[0];

    for (int i=0; i<first.size();i++){
        char c=first[i];

        for (int j=1;j<n;j++){
            if(i>=strs[j].size() || strs[j][i]!=c )
            return result;
        }
        result+=c;

    }
    return result;
    }
};
