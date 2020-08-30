class Solution {
    int dx[8]={1,-1,0,0,1,1,-1,-1};
    int dy[8]={0,0,-1,1,-1,1,1,-1};
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        if(grid[0][0]==1 || grid[n-1][m-1]==1){
            return -1;
        }
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty()){
            pair<int,int> tp = q.front();q.pop();
            int x = tp.first;
            int y = tp.second;
            if(vis[x][y]){
                continue;
            }
            vis[x][y]=1;
            for(int i=0;i<8;i++){
                int xx = x+dx[i];
                int yy = y+dy[i];
                if(xx>=0 && yy>=0 && xx<n && yy<m && !vis[xx][yy] && grid[xx][yy]==0){
                    grid[xx][yy] = grid[x][y]+1;
                    q.push({xx,yy});
                }
            }
        }
        return grid[n-1][m-1]==0?-1:grid[n-1][m-1];
    }
};
