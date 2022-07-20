class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * longest common substring
     * @param str1 string字符串 the string
     * @param str2 string字符串 the string
     * @return string字符串
     */
    string LCS(string str1, string str2) {
        int n=str1.length();
        int m=str2.length();
        int f[5005][5005];
        memset(f, 0, sizeof(f));
        int maxlen=0;
        int endindex=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(str1[i-1]==str2[j-1]){
                    f[i][j]=f[i-1][j-1]+1;
                    if(f[i][j]>maxlen){
                        maxlen=f[i][j];
                        endindex=i;
                    }
                }
                else{
                    f[i][j]=0;
                }
            }
        }
        return str1.substr(endindex-maxlen,maxlen);
    }
};