class Solution {
public:
    string convertToTitle(int columnNumber) {
    string result="";
    while (columnNumber>0){
        //we need to make the column titles 0 indexed
        columnNumber--;
        result=char('A'+ columnNumber% 26) + result;
        columnNumber=columnNumber/26;
        
    }
    return result;
    }
};
