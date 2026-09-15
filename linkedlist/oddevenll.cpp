//Leetcode - 328 
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
Node* oddeven(Node* head)
{
    if(head==NULL||head-> next ==NULL)
    {
        return head;
    }
    Node* odd = head;
    Node* even = odd ->next;
    Node* evenhead = even;
    while(even!= NULL && even->next!=NULL)
    {
        odd -> next = even -> next;
        odd = odd ->next;
        even -> next = odd -> next;
        even = even ->next;
    }
    odd -> next = evenhead;
    return head;
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
    Node* temp = oddeven(head);
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}