#include <bits/stdc++.h>
using namespace std;

void quickSort(int left, int right, vector<int>& arr)
{
	if(left >= right)
		return;
	int i, j, base;
	i = left, j = right;
	base = arr[left];  //取最左边的数为基准数
	while (i < j)
	{
		while (arr[j] >= base && i < j)
			j--;
		while (arr[i] <= base && i < j)
			i++;
		if(i < j)
		{
            swap(arr[i], arr[j]);
		}
	}
	arr[left] = arr[i]; //基准数归位
	arr[i] = base;
	quickSort(left, i - 1, arr);//递归左边
	quickSort(i + 1, right, arr);//递归右边
}

int main()
{
    vector<int> res{9,8,7,6,5,4,2,1,3,10};
    quickSort(0, 9, res);
    for(auto it:res)
    {
        cout<<it;
    }
}