class Solution {
public:
    int maxArea(vector<int>& height) {
        int starting_pointer = 0; 
        int end_pointer = height.size()-1;
        vector<int> storage_capacity;
        while(starting_pointer < end_pointer)
        {
            if(height[starting_pointer]<height[end_pointer])
            {
                storage_capacity.push_back(height[starting_pointer]*(end_pointer-starting_pointer));
                starting_pointer++;
            }

            else if(height[starting_pointer]>height[end_pointer])
            {
                storage_capacity.push_back(height[end_pointer]*(end_pointer-starting_pointer));
                end_pointer--;
            }
            else
            {
                storage_capacity.push_back(height[end_pointer]*(end_pointer-starting_pointer));
                end_pointer--;
            }
        }

        sort(storage_capacity.begin(), storage_capacity.end(), greater<int>());

        return storage_capacity[0];
    }
};