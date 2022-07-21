class Solution:
    def hasPath(self, matrix, word):
        n=len(matrix)
        m=len(matrix[0])
        visited = [[False]*m for _ in range(n)]
        fx=[[1,0],[0,1],[0,-1],[-1,0]]
        def dfs(x, y, matrix, visited, word):
            if not word:
                return True
            if not visited[x][y] and matrix[x][y]==word[0]:
                if len(word[1:])==0:
                    return True
                visited[x][y]=1
                for dx, dy in fx:
                    nx, ny = x+dx, y+dy
                    if 0<=nx<n and 0<=ny<m and not visited[nx][ny]:
                        if dfs(nx, ny, matrix, visited, word[1:]):
                            return True
                visited[x][y]=0
            return False
        for i in range(n):
            for j in range(m):
                if dfs(i, j, matrix, visited, word):
                    return True
        return False