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
        string str = strs[0]; //ȡ��һ���ַ���
        for(int i=1; i<strs.size(); i++)
        {
            if(strs[i].size() == 0)
               return "";
            int x = str.size();   //ȡ��һ���ַ����ĳ���
            int y = strs[i].size();  //ȡ����ÿ���ַ����ĳ���
            for(int j=0; j<=min(x,y); j++) //�ַ�����ÿ���ַ����бȽ�
            {
                if(str[j] != strs[i][j]) //����ַ��������ַ�����ȣ����˳���ȡǰj���ַ�
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