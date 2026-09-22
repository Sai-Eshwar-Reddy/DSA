//Leetcode - 82
#include<iostream>
#include<unordered_map>
using namespace std;
class ListNode {
    public : 
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};
ListNode* delduplicate(ListNode* head)
{
    if(head == NULL)
            return NULL;
        if(head -> next == NULL)
            return head;
        ListNode* curr = head;
        unordered_map<int,int> um;
        while(curr!=NULL)
        {
            um[curr->val]++;
           curr = curr -> next;
        }  
        curr = head;
        vector<int> arr;
        while(curr!=NULL)
        {
            if(um[curr->val]==1)
                arr.push_back(curr->val);
            curr = curr -> next;
        }
        if(arr.empty())
        {
            return NULL;
        }
        curr = head;
        for(int i=0;i<arr.size();i++)
        {
            curr -> val = arr[i];
            if(i==arr.size()-1)
            {
                curr-> next =NULL;
                break;
            }
            curr = curr -> next;
        }
        return head;
}
int main()
{
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(1);
    ListNode* c = new ListNode(1);
    ListNode* d = new ListNode(2);
    ListNode* e = new ListNode(3);
    a-> next = b;
    b-> next = c;
    c-> next = d;
    d-> next = e;
    ListNode* head = a;
    ListNode* temp = delduplicate(head);
    while(temp != NULL)
    {
        cout<< temp -> val <<" ";
        temp = temp -> next;
    }
}