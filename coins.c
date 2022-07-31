#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int coinChange(int* coins, int coinsSize, int amount)
{
    int *dp = (int*)malloc(sizeof(int)*(amount+1));
    dp[0] = 0;
    for(int i=1; i<=amount; i++)
        for(int j =0; j<coinsSize; j++)
        {
           //dp[i] = min(dp[i-1],dp[i-2],dp[i-5]) + 1
            if(coins[j] <= i)
            {
                dp[i] = dp[i]<dp[i-coins[j]]+1?dp[i]:dp[i-coins[j]]+1;
            }
        }
    return dp[amount]>amount? -1: dp[amount];
}

int main()
{
    int coin[3] = {1,2,5};
    int res;
    res = coinChange(coin,3,11);
    printf("%d\n", res);
}