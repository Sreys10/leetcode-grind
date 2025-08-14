class Solution {
public:
    bool rotateString(string s, string goal) {
        //first we will check whetr the lenght of s is quat to gaol or not
        if(s.size()!=goal.size()) return false;
        
        return (s+s).contains(goal);  // ab-cdeab-cde
    }
};
