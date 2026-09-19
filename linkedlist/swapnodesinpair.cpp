//Leetcode - 24
#include<iostream>
using namespace std;
class ListNode {
    public : 
    int data;
    ListNode* next;
    ListNode(int x)
    {
        data = x;
        next = nullptr;
    }
};
ListNode* swappair(ListNode* head)
{
        if( head==NULL || head->next == NULL)
            return head;
        ListNode* first = head;
        ListNode* second = head -> next;
        ListNode* after;
        ListNode* before = NULL;
        ListNode* newhead = second;
        while(first!=NULL && second!=NULL)
        {
            after = second -> next;
            second -> next = first;
            first -> next = after;
            if( before != NULL)
                before -> next = second;
            before = first;
            first = after;
            if(first!=NULL)
                second = first -> next;
        }
        return newhead;
}
int main()
{
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    a -> next = b;
    b-> next = c;
    c-> next = d;
    ListNode* head = a;
    ListNode* temp = swappair(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}