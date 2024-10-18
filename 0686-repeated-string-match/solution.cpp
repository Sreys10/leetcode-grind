class Solution {
public:
    int repeatedStringMatch(string a, string b) {
    if(a==b){
        return 1;
    }
    int n=a.size();
    int m=b.size();
    //minimum number of repeatition
    int repeatcount=(m+n-1)/n;
    string repeatedA="";

    for(int i=0;i<repeatcount;i++){
        repeatedA+=a;
    }

    if(repeatedA.find(b)!=string::npos){
        return repeatcount;
    }

    repeatedA+=a;
    if(repeatedA.find(b)!=string::npos){
        return repeatcount+1;
    }
    return -1;

    }
};
