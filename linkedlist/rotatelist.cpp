//Leetcode - 61
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
ListNode* rotatelist(ListNode* head,int k)
{
    if (head == NULL || head->next == NULL)
            return head;
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp -> next;
            count ++;
        }
        k = k % count;
        ListNode* first = head;
        ListNode* last;
        ListNode* before;
        for(int i=0;i<k;i++)    
        {
            last = head;
            while(last->next!=NULL)
            {
                last = last -> next;
            }
            before = head;
            while(before->next!=last)
            {
                before = before -> next;
            }
            last -> next = head;
            head = last;
            before -> next = NULL;
        }
        return head;   
}
int main()
{
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);
    a-> next = b;
    b-> next = c;
    c-> next = d;
    d-> next = e;
    ListNode* head = a;
    rotatelist(head,2);
}