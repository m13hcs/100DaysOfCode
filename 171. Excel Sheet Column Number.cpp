class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int count = 0;

        for(char ch: columnTitle)
        {
            int digit = ch - 'A' + 1;
            count*=26;
            count+=digit;
        }
        return count;    
    }
};
