#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int money,n;
    while (cin>>money>>n)
    {
        vector<int> price;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            price.push_back(temp);
        }
        vector<int> dp(money+1,0);  
        dp[0] = 1;
        for(int i=0; i<price.size(); i++)
        {
            for(int j=price[i]; j<=money; j++)
            {
                dp[j] = dp[j] + dp[j-price[i]];
            }
        }
        cout<<dp[money]<<endl;   
        
    }
    
}