class Solution {
public:
    bool isHappy(int n) {
        
        //we will not include 1 and 4 in the code
        while(n!=1 && n!=4){
            int sum=0;
            while(n>0){
                int digit=n%10;
                sum+=digit*digit;
                n=n/10;
                }
           n=sum;     
        }
        return n==1;
        
    }
};
