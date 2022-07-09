class Solution:
    def partition(self, s: str) -> List[List[str]]:

        def isHuiWen(txt):
            left=0
            right=len(txt)-1
            while txt[left]==txt[right] and left<right:
                left+=1
                right-=1
            if left<right:
                return False
            return True
        
        res=[]
        def dfs(path, tmp):
            if len(tmp)==0:
                res.append(path[:])
                return 
            for i in range(len(tmp)):
                
                if isHuiWen(tmp[0:i+1]):
                    dfs(path+[tmp[0:i+1]], tmp[i+1:])
            
        dfs([], s)
        return res
        
                