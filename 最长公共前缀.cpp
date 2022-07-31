#include <iostream>
#include <cmath>
#include<map>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
           return "";
        string str = strs[0]; //取第一个字符串
        for(int i=1; i<strs.size(); i++)
        {
            if(strs[i].size() == 0)
               return "";
            int x = str.size();   //取第一个字符串的长度
            int y = strs[i].size();  //取后续每个字符串的长度
            for(int j=0; j<=min(x,y); j++) //字符串的每个字符进行比较
            {
                if(str[j] != strs[i][j]) //如果字符串中有字符不相等，即退出，取前j个字符
                {
                    str = str.substr(0,j);
                    break;
                }
            }
        }
        return str;
    }
};

int main()
{
    vector<string> a = {"flower","flow","floight"};
    Solution A;
    string ret = A.longestCommonPrefix(a);
    cout<<ret<<endl;

}