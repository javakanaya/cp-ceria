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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int sum = 0;
        ListNode *result = new ListNode(0);
        ListNode *currNode = result;

        while (l1 || l2)
        {
            if (l1)
            {
                sum += l1->val;
                // cout << "l1 " << sum << endl;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                // cout << "l2 " << sum << endl;
                l2 = l2->next;
            }
            // cout << sum << endl;
            currNode->next = new ListNode(sum % 10);
            currNode = currNode->next;

            if (sum >= 10)
                sum = 1;
            else
                sum = 0;
        }
        if (sum)
            currNode->next = new ListNode(1);

        return result->next;
    }
};