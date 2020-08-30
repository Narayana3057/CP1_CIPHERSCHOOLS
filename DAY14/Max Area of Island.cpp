class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int ans = 0;
        int curr = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1) dfs(grid,ans,curr,m,n,i,j);
                curr = 0;
            }
        }
        return ans;
    }
private:
    void dfs(vector<vector<int>>& grid, int& ans, int& curr, int m, int n, int i, int j){
        if( i < 0 || i > m-1 || j < 0 || j > n-1 || grid[i][j] == 0) return;
        curr += 1;
        grid[i][j] = 0; // mark grid[i][j] as 0 == destroy the land.
        dfs(grid,ans,curr,m,n,i+1,j);
        dfs(grid,ans,curr,m,n,i,j+1);
        dfs(grid,ans,curr,m,n,i-1,j);
        dfs(grid,ans,curr,m,n,i,j-1);
        ans = max(ans,curr);
    }
};
