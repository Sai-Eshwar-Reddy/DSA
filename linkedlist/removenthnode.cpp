//Leetcode - 19
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
Node* removenthnode(Node* head,int n)
{
    Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(n==count)
    {
        head = head->next;
        return head;
    }
    temp = head;
    for(int i=1;i<count-n;i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int n = 5;
    head = removenthnode(head,n);
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
