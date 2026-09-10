//Search in linked list(GFG)
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
bool Keysearch(Node* head,int key)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        else
        {
            temp = temp -> next;
        }
    }
    return false;
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
    int key;
    printf("Enter key : ");
    scanf("%d",&key);
    Node* head = a;
    if(Keysearch(head,key))
    {
        cout<<"Key found";
    }
    else
    {
        cout<<"Key not found";
    }
}