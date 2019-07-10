#include<iostream>
  #include<vector>
  using namespace std;
  
  // -----------------------------------------------------
  // This is a functional problem. Do not make changes to main
  // This function takes as input an array and integer k.
  // It should print required output.

//   bool isMagic(vector<vector<int> > grid,int r,int c)
//   {
//     vector<int> vis(10,0);
//     for(int i=0;i<3;i++)
//     {
//       int rsum=0;
//       int colsum=0;
//       for(int j=0;j<3;j++)
//       {
//         rsum+=grid[i][j];
//         colsum+=grid[j][i];
//         int t=grid[r+i][c+j];

//         if(t>9||t<1)
//         {
//           return false;
//         }
//         else{
//           vis[t-1]++;
//           if (vis[t-1]>1)
//           {
//             return false;
//           }
//         }
        
//       }
//     cout<<rsum<<endl<<colsum<<"---"<<endl;
//      if (rsum!=15||colsum!=15)
//     {
//       return false;
//     }
//   }
//   return true;
// }
//------------------

//         if(t<9&&t>1)
//         {
//           vis[t-1]++;
//         }
//         if(vis[t-1]>1||t>9||t<1)
//         {
//           return false;
//         }
//       }   
//       if (rsum!=15||colsum!=15)
//     {
//       return false;
//     }
// }
// return true;

 bool check(int x, int y, const vector<vector<int> >& grid) {
        vector<int> vis(10, false);
      
        for (int i = x; i < x + 3; i++) {
            int tmp = 0;
            for (int j = y; j < y + 3; j++) {
                if (grid[i][j] >= 10 ||grid[i][j]<1 || vis[grid[i][j]])
                    return false;
                tmp += grid[i][j];
                vis[grid[i][j]] = true;
            }
            if (tmp != 15)
                return false;
        }

        for (int j = y; j < y + 3; j++) {
            int tmp = 0;
            for (int i = x; i < x + 3; i++)
                tmp += grid[i][j];
            if (tmp != 15)
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