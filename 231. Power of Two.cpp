class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
        {
            return false; 
        }

        double num = log2(n);
        cout<<num;
        
        if(ceil(num)==floor(num))
        {
            return true;
        }
        else
        {
            return false; 
        }
    }
};
