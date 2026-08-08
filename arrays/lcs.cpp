#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string text1="abcde";
    string text2="ace";
    int n=text1.length();
    int m=text2.length();
vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
        for(int j=0;j<m;j++)
        {
          dp[0][j]=0;
        }
            for(int i=1;i<=n;i++)
                {
                for(int j=1;j<=m;j++)
                    {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];

                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                     }

            }
                cout << "LCS length = " << dp[n][m] << endl;

            return 0;

    
}