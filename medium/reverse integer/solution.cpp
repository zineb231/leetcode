class Solution {
public:
    int reverse(long x) {
        bool negatif = x < 0;
        
        x = negatif ? -x : x;
        
        long r=0;
        
        if(x >= pow(2,31)){
            return 0;
        }

        
        while (x) {
             r = r*10 + x%10;
             x /= 10; 
        }
        
        if(r >= pow(2,31)){
            return 0;
        }
       
         
        return negatif ? -r : r;
        
    
    }
    };