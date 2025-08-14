class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int >dt;

        dt['I']=1;
        dt['V']=5;
        dt['X']=10;
        dt['L']=50;
        dt['C']=100;
        dt['D']=500;
        dt['M']=1000;
        

        int ans=0;

        for (int i=0; i<s.size(); i++){
            if(dt[s[i]]<dt[s[i+1]]){
                ans-=dt[s[i]];
            }else{
                ans+=dt[s[i]];
            }
        }
        return ans;


    }
};
