#include<iostream>
using namespace std;
class ListNode{
    public : 
    int data;
    ListNode* next;
    ListNode(int x)
    {
        data = x;
        next = nullptr;
    }
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode* curr1 = headA;
    ListNode* curr2 = headB;
    int c1 = 0,c2 =0;
    while(curr1!=nullptr)
    {
        c1++;
        curr1 = curr1 -> next;
    }
    while(curr2!=nullptr)
    {
        c2++;
        curr2 = curr2 -> next;
    }
    curr1 = headA;
    curr2 = headB;
    while(c1>c2)
    {
        curr1 = curr1 -> next;
        c1--; 
    }
    while(c2>c1)
    {
        curr2 = curr2 -> next;
        c2--;
    }
    while(curr1!=curr2)
    {
        curr1 = curr1 -> next;
        curr2 = curr2 -> next;
    }
    return curr1;
}
int main()
{
    ListNode* common1 = new ListNode(7);
    ListNode* common2 = new ListNode(8);
    ListNode* common3 = new ListNode(9);
    common1->next = common2;
    common2->next = common3;
    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = common1;
    ListNode* headB = new ListNode(3);
    headB->next = new ListNode(4);
    headB->next->next = common1;
    ListNode* ans = getIntersectionNode(headA,headB);
    if(ans!=nullptr)
        cout<<ans->data;
    else
        cout<<"No intersection";
    return 0;
}
