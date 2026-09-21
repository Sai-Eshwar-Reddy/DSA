#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
            return NULL;
        if(list1==NULL && list2!=NULL)
            return list2;
        if(list1!=NULL && list2==NULL)
            return list1;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* c1 = list1;
        ListNode* c2 = list2;
        while(c1!=NULL && c2!=NULL)
        {
            if(c1->val > c2->val)
            {
                temp -> next = c2;
                c2 = c2 -> next;
                temp = temp -> next;
            }
            else
            {
                temp -> next = c1;
                c1 = c1 -> next;
                temp = temp -> next;
            }
        }
        if(c1==NULL)
            temp -> next = c2;
        else
            temp -> next = c1;
        return dummy -> next;
    }
int main()
{
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);
    ListNode* ans = mergeTwoLists(list1,list2);
    while(ans!=NULL)
    {
        cout<<ans->val<<" ";
        ans = ans->next;
    }
    return 0;
}
