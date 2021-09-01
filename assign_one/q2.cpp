// Program to find the maximum number in an array
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int dp[100];
    for(int i=0;i<=n;i++)
     dp[i]=i;

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            dp[i] = max(dp[i-j]*dp[j],dp[i]);
        }
    }

    cout<<dp[n]<<endl;



    return 0;
}