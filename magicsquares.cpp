#include<iostream>
  #include<vector>
  using namespace std;
  
 bool check(int x, int y, const vector<vector<int> >& grid) {
        vector<int> vis(10, false);
      
        for (int i = x; i < x + 3; i++) {
            int temp = 0;
            for (int j = y; j < y + 3; j++) {
                if (grid[i][j] >= 10 ||grid[i][j]<1 || vis[grid[i][j]])
                    return false;
                temp += grid[i][j];
                vis[grid[i][j]] = true;
            }
            if (temp != 15)
                return false;
        }

        for (int j = y; j < y + 3; j++) {
            int temp = 0;
            for (int i = x; i < x + 3; i++)
                temp += grid[i][j];
            if (temp != 15)
                return false;
        }
        return true;
    }


  int numMagicSquaresInside(vector<vector<int> > &grid) {
      // Write your code here
    int count=0;
    int n=grid.size();
    int m=grid[0].size();
    for(int r=0;r<=n-3;r++)
    {
      for(int c=0;c<=m-3;c++)
      {
        if(grid[r+1][c+1]==5)
       {
        if(check (r,c,grid))
        {
          count++;
        }
        }
      }
    }
    return count;
  }
  
  int main(int argc, char** argv){
      int r, c;
      cin>>r>>c;
      vector<vector<int> > Input(r, vector<int> (c));
      for (int i = 0; i < r; i++) {
          for (int j = 0; j < c; j++) {
              cin>>Input[i][j];
          }
      }
      cout<<numMagicSquaresInside(Input);
  }
