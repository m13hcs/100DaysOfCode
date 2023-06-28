class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      //Creating a vector and adding alternating elements of nums vector with the difference of 'n'
      
        vector<int> shuffled_nums;

        for(int i = 0; i<n; i++)
        {
            shuffled_nums.push_back(nums[i]);
            shuffled_nums.push_back(nums[n+i]);
        }
        
        return shuffled_nums;
    }
};