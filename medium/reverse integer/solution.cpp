using namespace std;
class Solution {
public:
    int reverse(int x) {
        bool negatif=x<0;
          x = negatif ? -x : x;
        
         if (x >= pow(2,7)){
            return 0;
         }
        
        long r=0;
        
        while( x){
             r=(r*10)+(x%10);
             x/=10; 
        }
        
         if (x >=pow(2,7)){
            return 0;
        }
       
         
        return negatif ? -r : r;
        
    
    }
    };