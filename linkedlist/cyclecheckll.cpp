//Leetcode - 141
#include<iostream>
using namespace std;
class Node{
    public : 
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};
bool cyclecheck(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow ->next;
        fast = fast -> next -> next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node* a = new Node(3);
    Node* b = new Node(2);
    Node* c = new Node(0);
    Node* d = new Node(4);
    a->next = b;
    b->next = c;
    c->next = d;
    d -> next = b;
    Node* head = a;
    if(cyclecheck(head))
    {
        cout<<"Cycle found";
    }
    else
    {
        cout<<"No cycle found";
    }
}