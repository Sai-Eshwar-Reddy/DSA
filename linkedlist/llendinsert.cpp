//Linked list End Insertion 
#include<iostream>
using namespace std;
class Node
{
    public: 
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};
Node *insertAtEnd(Node *head, int x) 
{
    Node* last = new Node(x);
    if(head == NULL)
        return last;
            Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp -> next;
    }
    temp->next = last;
    return head;
}
int main()
{
    Node* a = new Node(10);
    Node* b = new Node(20);
    a->next = b;
    Node* head = a;
    int val;
    printf("Enter the val of node : ");
    scanf("%d",&val);
    Node* temp = insertAtEnd(head, val);
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}