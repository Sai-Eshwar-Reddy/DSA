//Leetcode - 143
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
    };
};
Node* reorder(Node* head)
{
    if(head == NULL || head -> next == NULL)
        return head;
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    };
    Node* curr = slow -> next;
    slow -> next = NULL;
    Node* prev = NULL;
    Node* nxt = NULL;
    while(curr!=NULL)
    {
        nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
    }
    Node* first = head;
    Node* second = prev;
    while(second!=NULL)
    {
        Node* firstnext = first-> next;
        Node* secondnext = second-> next;
        first -> next = second;
        second -> next = firstnext;
        first = firstnext;
        second = secondnext;
    }
    return head;
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
    reorder(head);
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}