#include<iostream>
#include<vector>
using namespace std;
class ListNode{
    public : 
    int val;
    ListNode* next = NULL;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};
ListNode* mergeKlist(vector<ListNode*>& lists)
{
    if(lists.empty())
        return NULL;
    vector<int> arr;
    ListNode* temp;
    for(int i=0;i<lists.size();i++)
    {
        temp = lists[i];
        while(temp!=NULL)
        {
            arr.push_back(temp -> val);
            temp = temp -> next;
        }
    }
    sort(arr.begin(),arr.end());
    ListNode* newhead = NULL;
    ListNode* tail = NULL;
    for(int i=0;i<arr.size();i++)
    {
        ListNode* node = new ListNode(arr[i]);
        if(newhead == NULL)
        {
            newhead = node;
            tail = node;
        }
        else
        {
            tail -> next = node;
            tail = node;
        }
    }
    return newhead;
}
int main()
{   
    ListNode* a = new ListNode(1);
    a->next = new ListNode(4);
    a->next->next = new ListNode(5);
    ListNode* b = new ListNode(1);
    b->next = new ListNode(3);
    b->next->next = new ListNode(4);
    ListNode* c = new ListNode(2);
    c->next = new ListNode(6);
    vector<ListNode*> lists = {a, b, c};
    ListNode* ans = mergeKlist(lists);
    while (ans != NULL)
    {
        cout << ans->val << " ";
        ans = ans->next;
    }
    return 0;
}