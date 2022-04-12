class Solution {
public:
    bool isPalindrome(int x) {
        long reverse_number=0;
        int xx=x;
        while(xx >0){
            int last_digit =xx % 10;
            reverse_number=reverse_number*10 + last_digit;
            xx =xx /10;   
        }
        if( x==reverse_number){
            return true;
        }
        else{
        return false;
        }
        
    };
};
