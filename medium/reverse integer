using namespace std;
class Solution {
public:
    int reverse(long x) {
        bool negatif=false;
        if ( x <0){
            negatif=true;
            x=x*(-1);}
        long r=0;
         if (x >=pow(2,7)){
            return 0;
        }
        while( x!=0){
             r=(r*10)+(x%10);
             x=x/10; }
       
         
        if(negatif){
            return r*(-1);
        }
        else{
            return r;
        }
        
    }
    
    };