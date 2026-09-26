//Leetcode - 25
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
ListNode* reverseKGroup(ListNode* head,int k)
{
    if (head == NULL || k == 1)
            return head;
    ListNode* dummy = new ListNode(0);
    dummy -> next = head;
    ListNode* before = dummy;
    while (before!=NULL) 
    {
        ListNode* kth = before;
        for (int i = 0;i < k;i++) 
        {
            kth = kth -> next;
            if (kth == NULL)
                return dummy -> next;
        }
        ListNode* after = kth->next;
        ListNode* oldfirst = before -> next;
        ListNode* prev = after;
        ListNode* curr = oldfirst;
        while (curr != after) 
        {
            ListNode* nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        before -> next = kth;
        before = oldfirst;
    }
    return dummy-> next;
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
    ListNode* temp = reverseKGroup(head,2);
    while(temp != NULL)
    {
        cout<< temp -> val <<" ";
        temp = temp -> next;
    }
    reverseKGroup(head,2);
}