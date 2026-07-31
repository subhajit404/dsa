class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX || x<INT_MIN) return 0;
        int riv =0 ;
        while (x!=0){
            
            int r =x%10;
            if(riv>INT_MAX/10 ||riv<INT_MIN/10) return 0;
            riv = riv *10 +r ;
            
            x/=10;
        }
        return riv;
    }
};