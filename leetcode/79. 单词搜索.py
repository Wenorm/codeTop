class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        res=False
        fx=[[1,0],[0,1],[-1,0],[0,-1]]
        n=len(board)
        m=len(board[0])
        vis=[[False]*m for _ in range(n)]
        def dfs(path, x, y):
            nonlocal res
            if res:
                return
            if len(path)==0:
                res=True
                return
            
            for i in range(4):
                xx=x+fx[i][0]
                yy=y+fx[i][1]
                if xx<0 or xx>=n or yy<0 or yy>=m or vis[xx][yy] or board[xx][yy]!=path[0]:
                    continue
                vis[xx][yy]=True
                dfs(path[1:], xx, yy)
                vis[xx][yy]=False
        
        for i in range(n):
            for j in range(m):
                if board[i][j]==word[0]:
                    vis[i][j]=True
                    dfs(word[1:], i, j)
                    vis[i][j]=False
                    if res:
                        return res
        return res