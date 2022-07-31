#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result;
        unordered_map<char, int> map;
        int start=0, end=0;
        for(int i=0; i<s.size(); i++)
        {
            map[s[i]] = i; 
        }
        for(auto it:map)
        {
            cout<<it.first<<":"<<it.second<<"*";
        }
        for(int i=0; i<s.size(); i++)
        {
            end = max(end, map[s[i]]);
            if(i == end)
            {
                result.push_back(end-start+1);
                start = i+1;
            }
        }
        return result;
    }
};

int main()
{
    string s = "ababcbacadefegdehijhklij";
    Solution A;
    vector<int> res;
    res = A.partitionLabels(s);
}