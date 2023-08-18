class Solution {
public:
    int addDigits(int num) {
        if (num == 0) 
        {
            return 0;
        }
        
        while (num >= 10) 
        {
            int sum = 0;
            while (num > 0) 
            {
                sum += num % 10;   // Add the last digit to the sum
                num /= 10;         // Remove the last digit from the number
            }
            num = sum;            // Update the number with the sum of its digits
        }
        
        return num;
    }
};
