//Leetcode - 876
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
Node* middle(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
int main()
{
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    head = middle(head);
    Node* t = head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}