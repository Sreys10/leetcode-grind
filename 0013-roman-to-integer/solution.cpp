class Solution {
public:
    int romanToInt(string s) {
        map<char,int>romanmap;
        romanmap['I']=1;
        romanmap['V']=5;
        romanmap['X']=10;
        romanmap['L']=50;
        romanmap['C']=100;
        romanmap['D']=500;
        romanmap['M']=1000;
        int result=0;
        for (auto it = s.begin(); it != s.end(); ++it) { 
            if (it != s.end() - 1 && romanmap[*it]<romanmap[*(it+1)]){
                 result -= romanmap[*it]; //subtract only the value of the current character
                 }
            else{
                result+=romanmap[*it];
            }
      
    }
    return result;
     }
   
};
