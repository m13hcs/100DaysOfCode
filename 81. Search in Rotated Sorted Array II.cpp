class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size(); i+=2)
        {
            if(nums[i] == target)
            {
                return true;     
            }
        }

        for(int i = 1; i<nums.size(); i+=2)
        {
            if(nums[i] == target)
            {
                return true; 
            }
        }

        return false; 
  
    }
};
