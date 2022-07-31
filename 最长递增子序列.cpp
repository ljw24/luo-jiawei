//
// Created by jt on 2020/9/14.
//
#include <vector>
#include <algorithm>
using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    /**
     * return the longest increasing subsequence
     * @param arr int整型vector the array
     * @return int整型vector
     */
    vector<int> LIS(vector<int>& arr) {
        // write code here
        // 第一步：利用贪心+二分求最长递增子序列长度
        vector<int> res;
        vector<int> maxLen;
        if (arr.size() < 1) return res;
        res.push_back(arr[0]);  // 注：emplace_back(val)作用同push_back，效率更高
        maxLen.push_back(1);
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] > res.back()) {
                res.push_back(arr[i]);
                maxLen.push_back(res.size());
            } else {
                // lower_bound(begin, end, val)包含在<algorithm>中
                // 它的作用是返回有序数组begin..end中第一个大于等于val的元素的迭代器
                int pos = lower_bound(res.begin(), res.end(), arr[i]) - res.begin();
                res[pos] = arr[i];
                maxLen.push_back(pos+1);
            }
        }
        for(auto it:res)
        {
            cout<<it<<" ";
        }
        for(auto it:maxLen)
        {
            cout<<it<<"-";
        }
        // 第二步：填充最长递增子序列
        for (int i = arr.size()-1, j = res.size(); j > 0; --i) {
            if (maxLen[i] == j) {
                res[--j] = arr[i];
            }
        }
        return res;
    }
};

int main()
{
    vector<int> a;
    int num;
    a.push_back(2);
    a.push_back(1);
    a.push_back(5);
    a.push_back(3);
    a.push_back(6);
    a.push_back(4);
    a.push_back(8);
    a.push_back(9);
    a.push_back(7);
    Solution A;
    vector<int> res = A.LIS(a);
    for(auto it:res)
       cout<<it<<"+"<<endl;
}