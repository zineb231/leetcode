class Solution {
public:
    int romanToInt(string s) {
        int numero=0;
        int value=0;
        for(int i=s.size()-1;~i;i--){
        switch(s[i]){
            case 'I':
                numero=1;
                break;
            case 'V':
                numero= 5;
                break;
            case 'X':
                numero= 10;
                break;
            case 'L':
                numero= 50;
                break;
            case 'C':
                numero=100;
                break;
            case 'D':
                numero= 500;
                break;
            case 'M':
                numero= 1000;
                break; 
        }
            if(4* numero < value)
                value -=numero;
            else
                value+=numero;
        
    }
        return value;
    }
        
};