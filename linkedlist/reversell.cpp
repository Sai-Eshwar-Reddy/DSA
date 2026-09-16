//Leetcode - 206
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
Node* reversell(Node* head)
{
    Node* prev = NULL;
    Node* nxt = NULL;
    Node* curr = head;
    while(curr!=NULL)
    {
        nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
int main()
{
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    a-> next = b;
    b-> next = c;
    c-> next = d;
    d-> next = e;
    Node* head = a;
    Node* temp = reversell(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}