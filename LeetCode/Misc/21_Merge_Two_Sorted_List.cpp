#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *result = new ListNode(0);
        ListNode *walker = result;
        while (list1 && list2)
        {
            // cout << result->val << endl;
            int insert;
            if (list1->val < list2->val)
            {
                insert = list1->val;
                // cout << insert << endl;
                list1 = list1->next;
            }
            else
            {
                insert = list2->val;
                // cout << insert << endl;
                list2 = list2->next;
            }
            walker->next = new ListNode(insert);
            walker = walker->next;
        }
        if (list1)
            walker->next = list1;
        else
            walker->next = list2;

        return result->next;
    }
};