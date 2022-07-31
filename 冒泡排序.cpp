#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a{1,3,5,7,9,2,4,6,8,10};
    int n = a.size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j+1], a[j]);
            }
        }
    }
    for(auto it:a)
    {
        cout<<it;
    }
}