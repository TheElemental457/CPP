//https://leetcode.com/problems/a-number-after-a-double-reversal/
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int a;
        int temp;
        a=num;
        int reversed1=0;
        int reversed2=0;
        while(a>=1){
            temp=a%10;
            reversed1=(reversed1*10)+temp;
            temp=0;
            a=a/10;
        }
        int b;
        b=reversed1;
        while(b>=1){
            temp=b%10;
            reversed2=(reversed2*10)+temp;
            temp=0;
            b=b/10;
        }
        if(reversed2==num){
            return true;
        }
        else{
            return false;
        }
    }
};
