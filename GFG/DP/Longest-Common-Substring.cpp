class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<int> dp(m+1,0), curr(m+1,0);
        int ans = 0;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(S1[i-1] == S2[j-1]) {
                    curr[j] = 1 + dp[j-1];
                    ans = max(ans,curr[j]);
                } else {
                    curr[j] = 0;
                }
            }
            dp = curr;
        }
        return ans;
    }
};
