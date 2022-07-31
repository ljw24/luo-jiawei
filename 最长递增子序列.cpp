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
     * @param arr int����vector the array
     * @return int����vector
     */
    vector<int> LIS(vector<int>& arr) {
        // write code here
        // ��һ��������̰��+����������������г���
        vector<int> res;
        vector<int> maxLen;
        if (arr.size() < 1) return res;
        res.push_back(arr[0]);  // ע��emplace_back(val)����ͬpush_back��Ч�ʸ���
        maxLen.push_back(1);
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] > res.back()) {
                res.push_back(arr[i]);
                maxLen.push_back(res.size());
            } else {
                // lower_bound(begin, end, val)������<algorithm>��
                // ���������Ƿ�����������begin..end�е�һ�����ڵ���val��Ԫ�صĵ�����
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
        // �ڶ�������������������
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