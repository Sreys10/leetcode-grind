class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    int n=s.size();
    for (int len=1; len<=n/2;len++){
        if(n%len==0){
            string substr=s.substr(0,len);
            string repeat="";
            for(int i=0;i<n/len;i++){
                repeat+=substr;
            }
            if (repeat==s){
                return true;
            }
        }
    }
    return false;
    }
};
