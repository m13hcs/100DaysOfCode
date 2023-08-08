class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp = 0;
        vector<int> non_zero ;
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                temp++;
                non_zero.push_back(nums[i]);
            }
        }

        for(int i = 0; i<nums.size()-temp; i++)
        {
            non_zero.push_back(0);
        }
      
            nums = non_zero; 
        
    }
};
