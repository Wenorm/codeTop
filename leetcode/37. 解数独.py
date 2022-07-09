class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        row=[[False]*9 for _ in range(9)]
        col=[[False]*9 for _ in range(9)]
        block=[[[False]*9 for a in range(3)] for b in range(3)]
        valid=False

        spaces=[]
        for i in range(9):
            for j in range(9):
                if board[i][j]=='.':
                    spaces.append((i,j))
                else:
                    row[i][int(board[i][j])-1]=True
                    col[int(board[i][j])-1][j]=True
                    block[i//3][j//3][int(board[i][j])-1]=True
        
        def dfs(pos):
            nonlocal valid
            if pos==len(spaces):
                valid=True
                return

            x, y = spaces[pos]
            
            for num in range(9):
                if row[x][num] or col[num][y] or block[x//3][y//3][num]:
                    continue
                row[x][num]=True
                col[num][y]=True
                block[x//3][y//3][num]=True
                board[x][y]=str(num+1)
                dfs(pos+1)
                row[x][num]=False
                col[num][y]=False
                block[x//3][y//3][num]=False
                if valid:
                    return
            return
        dfs(0)


                    
                    
