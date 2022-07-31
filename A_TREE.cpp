#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      //TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      //TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//������
struct TreeNode* create(int data)
{
    TreeNode* newnode = new TreeNode;
    newnode->val = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode; 
};

//���ӽڵ�
void insertNode(TreeNode* curnode, TreeNode* left, TreeNode* right)
{
    curnode->left = left;
    curnode->right = right;
}

class Solution {
private:
    int getNodesNum(TreeNode* cur) {
        if (cur == 0) return 0;
        int leftNum = getNodesNum(cur->left);      // ��
        int rightNum = getNodesNum(cur->right);    // ��
        int treeNum = leftNum + rightNum + 1;      // ��
        cout<<treeNum<<endl;
        return treeNum;
    }
public:
    int countNodes(TreeNode* root) {
        return getNodesNum(root);
    }
};



int main()
{
    TreeNode* A = create(1);
    TreeNode* B = create(2);
    TreeNode* C = create(3);
    TreeNode* D = create(4);
    TreeNode* E = create(5);
    TreeNode* F = create(6);

    insertNode(A, B, C);
    insertNode(B, D, E);
    insertNode(C, F, NULL);

    Solution res;
    int result = res.countNodes(A);
    cout<<"�ڵ����Ϊ:"<<result<<endl;
}