class Solution {
public:
    string reverseWords(string s) {
        //we will solve this question using stack
        stack<string> st;
        string word;
        stringstream ss(s);
        string result="";


        while(ss>>word){
            st.push(word);
        }        

        while(!st.empty()){
            result+=st.top();
            st.pop();
            if(!st.empty()) result+=" ";
        }

        return result;
    }
};
