class Solution {
public:
    bool isValid(string s) {
        //for closed bracket there must be an open bracket in last set of open brackets
        stack <char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{ //hit closed brackets
                if(!st.empty()&& ((s[i]=='}'&& st.top()=='{')||(s[i]==']'&& st.top()=='[')||(s[i]==')'&& st.top()=='('))){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }

        if(st.empty()){
            return true;
        }
        else{
            return false;
        }


    }
};
