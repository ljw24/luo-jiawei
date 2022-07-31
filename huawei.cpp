#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,num;
    map<int, int> hash;
    cin>>n;
    while(cin>>num)
    {
        hash[num]++;
    }
    cin>>x;
    cout<<hash[x]<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}