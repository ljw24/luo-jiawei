#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr){};
};

ListNode* deletenode(ListNode* head, int data)
{
    if(head == nullptr) return nullptr;
    ListNode* newhead = new ListNode(-1);
    newhead->next = head;
    ListNode* cur = newhead;
    while(cur != NULL && cur->next != NULL)
    {
        if(cur->next->val == data)
        {
            ListNode* laji = cur->next;
            cur->next = cur->next->next;
            delete laji;
            break;
        }
        cur = cur->next;
    }
    return newhead->next;
}

ListNode* reservenode(ListNode* head)
{
    ListNode* pre = NULL;
    ListNode* temp = NULL;
    ListNode* cur = head;
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
    ListNode* head = new ListNode(-1);
    ListNode* cur = head;
    for(int i=1; i<10; i++)
    {
        ListNode* newnode = new ListNode(0);
        newnode->val = i;
        newnode->next = NULL;
        cur->next = newnode;
        cur = cur->next;
    }
    
    /*
    ListNode* temp = deletenode(head->next, 2);
    while(temp != NULL)
    {
        cout<<temp->val;
        temp = temp->next;
    }
    */
    ListNode* temp = reservenode(head->next);
    while(temp != NULL)
    {
        cout<<temp->val;
        temp = temp->next;
    }
}