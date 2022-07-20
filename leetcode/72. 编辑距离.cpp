class Solution {
public:
    int minDistance(string word1, string word2) {
        int dp[505][505];       //dp[i][j]表示word1第i个位置变到word2第j个位置。
        int len1=word1.length();
        int len2=word2.length();
        memset(dp,0,sizeof(dp));
        //第一列
        for(int i=1;i<=len1;i++){
            dp[i][0]=dp[i-1][0]+1;
        }
        for(int i=1;i<=len2;i++){
            dp[0][i]=dp[0][i-1]+1;
        }

        for(int i=1;i<=len1;i++){
            for(int j=1;j<=len2;j++){
                if(word1[i-1]==word2[j-1]){//不用替换
                    dp[i][j]=dp[i-1][j-1];
                }
                else {
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                }
            }
        }
        return dp[len1][len2];
    }
};