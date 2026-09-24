#include<iostream>
#include<vector>
using namespace std;
class ListNode{
    public : 
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};
void sortList(ListNode* head) 
{
    vector<int> arr;
    ListNode* temp = head;
    while(temp!=NULL)
    {
        arr.push_back(temp->val);
        temp = temp -> next;
    }
    sort(arr.begin(),arr.end());
    temp = head;
    for(int i=0;i<arr.size();i++)
    {
        temp -> val = arr[i];
        temp = temp -> next;
    }
    temp = head;
    while(temp!=NULL){
        cout<<temp -> val <<" ";
        temp = temp -> next;
    }
}
int main()
{
    ListNode* a = new ListNode(-1);
    ListNode* b = new ListNode(5);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(0);
    a-> next = b;
    b-> next = c;
    c-> next = d;
    d-> next = e;
    ListNode* head = a;
    sortList(head);
}