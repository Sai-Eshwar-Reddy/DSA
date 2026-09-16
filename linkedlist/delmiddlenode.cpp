//Leetcode - 2095
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
Node* Deletmiddle(Node* head)
{
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    Node* res = NULL;
    while(fast!=NULL && fast-> next!=NULL)
    {
        res = slow;
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    res-> next = slow -> next;
    delete slow;
    return head;
}
int main()
{
    Node* a = new Node(10);
    Node* b = new Node(20);
    a-> next = b;
    Node* head = a;
    head = Deletmiddle(head);
    Node* t = head;
    while(t!=NULL)
    {
        cout<<t-> data <<"\n";
        t=t->next;
    }
}