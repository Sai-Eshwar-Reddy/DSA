//Leetcode - 83
#include<iostream>
using namespace std;
class ListNode {
    public : 
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};
ListNode* delduplicate(ListNode* head)
{
    ListNode* temp = head;
    ListNode* curr = head;
    while(curr!=NULL && temp!=NULL)
    {
        if(curr -> val == temp -> val)
            curr = curr -> next;
        else
        {
            temp -> next = curr;
            temp = curr;
        }
    }
    if(temp!=NULL)
        temp -> next = NULL;
    return head;
}
int main()
{
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(1);
    ListNode* c = new ListNode(2);
    ListNode* d = new ListNode(3);
    ListNode* e = new ListNode(3);
    a-> next = b;
    b-> next = c;
    c-> next = d;
    d-> next = e;
    ListNode* head = a;
    ListNode* temp = delduplicate(head);
    while(temp != NULL)
    {
        cout<< temp -> val <<" ";
        temp = temp -> next;
    }
}