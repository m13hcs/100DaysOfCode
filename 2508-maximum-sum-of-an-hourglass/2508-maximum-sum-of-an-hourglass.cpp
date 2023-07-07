class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {

        //time complexity: (rows-2)*(coloumns-2)
        int ans = 0;
        int rows = grid.size();
        int coloumns = grid[0].size();

        for(int i=0 ; i<rows-2; i++)
        {
            for(int j = 0; j<coloumns-2; j++)
            {
                ans = max(ans,grid[i][j]+grid[i][j+1]+
                              grid[i][j+2]+grid[i+1][j+1]+
                              grid[i+2][j]+grid[i+2][j+1]+
                              grid[i+2][j+2]);
            }
        }
        return ans;
    }
};