class Solution {
public:
    void bfs(vector<vector<char>>& board,int i,int j)
    {
        int rows=board.size();
        int col=board[0].size();
        queue<pair<int,int> > q;
        q.push(make_pair(i,j));
        while(!q.empty())
        {
            pair<int,int> p;
            p=q.front();
            q.pop();
            i=p.first;
            j=p.second;
            if(i>=0 && i<rows && j>=0 && j<col && board[i][j]=='O')
            {
                board[i][j]='*';
                q.push(make_pair(i-1,j));
                q.push(make_pair(i+1,j));
                q.push(make_pair(i,j-1));
                q.push(make_pair(i,j+1));
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        
        int rows=board.size();
        if(rows==0) return;
        int col=board[0].size();       
        if(col==0) return;
        
        for(int i=0;i<rows;i++)
        {
            if(board[i][0]=='O')
                bfs(board,i,0);
            if(board[i][col-1]=='O')
                bfs(board,i,col-1);
        }
        for(int i=0;i<col;i++)
        {
            if(board[0][i]=='O')
                bfs(board,0,i);
            if(board[rows-1][i]=='O')
                bfs(board,rows-1,i);
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='*')
                    board[i][j]='O';
            }
        }
    }
};