class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count_of_val = 0;
        vector<int> indices;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]==val)
            {
                indices.push_back(i);
            }
        }
        int numOfRemoved = 0;
        for(auto i: indices){
            nums.erase(nums.begin()+i-numOfRemoved);
            numOfRemoved++;
        }
        return nums.size();
    }
};