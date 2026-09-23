#include<iostream>
using namespace std;
class ListNode{
    public : 
    int val;
    ListNode* next = NULL;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};
ListNode* partitionlist(ListNode* head,int x)
{
    if(head == NULL)
        return NULL;
    ListNode* d1 = new ListNode(0);
    ListNode* d2 = new ListNode(0);
    ListNode* less = d1;
    ListNode* greater = d2;
    ListNode* curr = head;
    while(curr!=NULL)
    {
        ListNode* nextnode = curr->next;
        curr -> next = NULL;
        if(curr -> val < x)
        {
            less -> next = curr;
            less = less -> next;
        }
        else
        {
            greater -> next = curr;
            greater = greater -> next;
        }
        curr = nextnode;
    }
    d1 = d1 -> next;
    ListNode* newhead = d1;
    less -> next = d2 -> next;
    return newhead;

}
int main()
{
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(4);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(2);
    ListNode* e = new ListNode(5);
    a-> next = b;
    b-> next = c;
    c-> next = d;
    d-> next = e;
    ListNode* head = a;
    ListNode* temp = partitionlist(head,3);
    while(temp != NULL)
    {
        cout<< temp -> val <<" ";
        temp = temp -> next;
    }
}