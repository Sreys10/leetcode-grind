class Solution {
public:
    string largestOddNumber(string num) {
        vector<string>ans;

        for(int i=num.size(); i>=0; i--){
            //check for odd
            if((num[i] -'0')%2!=0){   //we substracted '0' so that we convert string to number(Ascii)
                return num.substr(0,i+1);
                
            }
        }
        return "";
    }
};
