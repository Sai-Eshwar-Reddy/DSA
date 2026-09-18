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
Node* reversebtw(Node* head,int left,int right)
{
    int l = 1;
        if(left == 1 && right ==1 )
            return head;
        Node* lft = head;
        while(l<left)
        {
            lft = lft -> next;
            l++;
        }
        Node* rht = lft;
        int d = right - left;
        for(int i=0 ;i<d;i++)
        {
            rht = rht -> next;
        }
        Node* after = rht -> next;
        Node* prev = NULL;
        Node* nxt = NULL;
        Node* curr = lft;
        while(curr!=NULL && curr != after)
        {
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        Node* temp = head;
        if(left==1)
        {
            head = rht;
        }
        else
        {
            while(temp->next != lft)
            {
                temp = temp -> next;
            }
            temp -> next = rht;
        }
        lft -> next = after;
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
    Node* t = reversebtw(head,2,4);
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}