//Hamming distance
class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int sum =0;
        uint32_t x = 1;
        
        for(int i =0;i<32;i++){
            if(n & x){
                sum++;
            }
            x= x<<1;
        }
        
        return sum;
    }
};
