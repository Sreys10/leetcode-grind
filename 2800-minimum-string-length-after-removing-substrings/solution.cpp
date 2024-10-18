class Solution {
public:
    int minLength(string s) {
    string ab="AB";
    string cd="CD";

    while(s.find(ab)!=string::npos || s.find(cd)!=string::npos){
        size_t pos=s.find(ab);
        while(pos!=string::npos){
            s.erase(pos,ab.length());
            pos=s.find(ab);

        }
        pos=s.find(cd);
        while(pos!=string::npos){
            s.erase(pos, cd.length());
            pos=s.find(cd);
        }
    }
    return s.length();
    }
};
