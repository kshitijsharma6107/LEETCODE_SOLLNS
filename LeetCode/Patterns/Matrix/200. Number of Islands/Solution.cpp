class Solution {
public:

  void dfs(vector<vector<char>>& grid, int r, int c)
   {
        int n = grid.size();
        int m = grid[0].size();

        // Boundary + water check
       // if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '0')
         //   return;
         //if(grid[r][c]=='0')
           // return;

        // Mark visited
        grid[r][c] = '0';

        // Explore 4 directions
        if ( r < n-1  && grid[r+1][c]=='1')//down
        dfs(grid, r+1, c);
        
         if ( c > 0   && grid[r][c-1]=='1')//left
        dfs(grid, r, c-1);
     
        
        if (  c < m-1 && grid[r][c+1]=='1')//right
        dfs(grid, r, c+1);

       
           if (r > 0  && grid[r-1][c]=='1')//up
        dfs(grid, r-1, c);


        return;
    }








    int numIslands(vector<vector<char>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                if (grid[r][c] == '1') {
                    count++;
                    dfs(grid, r, c);
                }
            }
        }

        return count;
    }
   
};