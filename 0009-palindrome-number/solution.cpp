class Solution {
public:
    bool isPalindrome(int x) {
        string Mystring=to_string(x); //converting our number to string
        reverse(Mystring.begin(),Mystring.end());  //reversing our given string
        return Mystring == to_string(x);  //checking the equality of the two string and returning the boolean value
    }
};
