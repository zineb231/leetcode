class Solution {
public:
    bool isPalindrome(int x) {
        stringstream a;
        a << x;
        string str=a.str();
        int len=str.length();
        for( int i=0 ;i< len/2;i++){
            if(str[i]==str[len-i-1])
                return true; 
        };
                return false;
            
        };
            
        
};