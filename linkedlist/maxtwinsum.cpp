//Leetcode - 2130
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
void maxtwinsum(Node* head)
{
    int sum = 0,max_sum = 0;
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast-> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    Node* curr = slow -> next;
    Node* prev = NULL;
    Node* nxt = NULL;
    while(curr != NULL)
    {
        nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
    }
    slow -> next = prev;
    Node* first = head;
    Node* second = slow->next;
    while(second != NULL)
    {
        sum = first -> data + second -> data;
        max_sum = max(max_sum,sum);
        first = first -> next;
        second = second -> next;
    }
    cout<<max_sum;
}
int main()
{
    Node* a = new Node(4);
    Node* b = new Node(2);
    Node* c = new Node(2);
    Node* d = new Node(3);
    a-> next = b;
    b-> next = c;
    c-> next = d;
    Node* head = a;
    maxtwinsum(head);
}