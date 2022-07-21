class Solution:
    def StrToInt(self , s: str) -> int:
        s=s.strip()
        if s=='':
            return 0
        
        sign=1
        if s[0]=='-':
            sign=-1
            s=s[1:]
        elif s[0]=='+':
            sign=1
            s=s[1:]
        
        res=0
        for c in s:
            if c.isdigit():
                res=res*10+int(c)
            else:
                break
        
        res=res*sign

        if res<-2**31:
            return -2**31
        
        if res>2**31-1:
            return 2**31-1
        
        return res
