#include <bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr){};
};

ListNode* deletenode(ListNode* head, int val)
{
    ListNode* pre = new ListNode(-1);
    pre->next = head;
    ListNode* cur = pre;
    while(cur != NULL && cur->next != NULL)
    {
        if(cur->next->val == val)
        {
            ListNode* laji = cur->next;
            cur->next = cur->next->next;
            delete laji;
            break;
        }
        cur = cur->next;
    }
    return pre->next;
}

ListNode* reservenode(ListNode* head)
{
    ListNode* pre = NULL;
    ListNode* cur = head;
    ListNode* temp = NULL;

    while(cur != NULL)
    {
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}

int main()
{
    vector<int> res{1,2,3,4,5,6};
    ListNode* head = new ListNode(-1);
    ListNode* cur = head;
    for(int i=0; i<res.size(); i++)
    {
        ListNode* newnode = new ListNode(0);
        newnode->val = res[i];
        newnode->next = NULL;
        cur->next = newnode;
        cur = cur->next;
    }

    ListNode*temp = reservenode(head->next);
    while(temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}