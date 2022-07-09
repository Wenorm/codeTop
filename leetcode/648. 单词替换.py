class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        dictionary=set(dictionary)
        sentence=sentence.split()
        res=[]
        for word in sentence:
            i=0
            while i <= len(word):
                if word[0:i] in dictionary:
                    res.append(word[0:i])
                    break
                i+=1
            if i>len(word):
                res.append(word)
            
        return ' '.join(res)

