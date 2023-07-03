class Solution {
public:
    int trailingZeroes(int n) {
        int no_of_zeroes = 0;

        for(int i = 5; n/i>=1; i*=5 )
        {
            
            no_of_zeroes+=n/i;
            
        }
        return no_of_zeroes;
    }
};