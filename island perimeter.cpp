class Solution {
public:
    int islandPerimeter(vector<vector<int> >& grid) {
        int p=0, r=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    p++;
                    if(i!=0 && grid[i-1][j]==1)
                        r++;
                      if(j!=0 && grid[i][j-1]==1)
                        r++;
                }
            }
        }
       return p*4 - r*2; 
    }
};