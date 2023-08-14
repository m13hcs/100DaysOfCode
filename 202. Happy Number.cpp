class Solution {
public:
    int sumofsquares(int n )
        {   
            int sum = 0; 
            while(n!=0)
            {
                int digit = n%10;
                sum = sum+digit*digit;
                n=n/10;
            }

            return sum;
        }
    bool isHappy(int n) {
        unordered_set<int> happynumber; 
        
        while(n>1 && !happynumber.count(n))
        {
            happynumber.insert(n);
            n=sumofsquares(n);
        }
        if(n==1)
        {
            return true;
        }
        return false; 
        
    }
};
