//Leetcode - 142
#include<iostream>
using namespace std;
class Node {
    public : 
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};
Node* cyclecheck(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast)
        {
            slow = head;
            while(slow != fast)
            {
                slow = slow -> next;
                fast = fast -> next;
            }
            return fast;
        }
    }
    return NULL;
}
int main()
{
    Node* a = new Node(3);
    Node* b = new Node(2);
    Node* c = new Node(0);
    Node* d = new Node(4);
    a->next = b;
    b -> next = c;
    c ->next =d;
    d -> next = b;
    Node* head = a;
    Node* temp = cyclecheck(head);
    if(temp == NULL)
    {
        cout<<"Cycle not found";
    }
    else
    {
        cout<<temp->data;
    }
}