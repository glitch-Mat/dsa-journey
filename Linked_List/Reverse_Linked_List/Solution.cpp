#include <iostream>
#include <vector>

using namespace std;

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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next_node = nullptr;

        while (curr != nullptr)
        {

            next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }

        return prev;
    }
};

void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

ListNode *createList(const vector<int> &vals)
{
    if (vals.empty())
        return nullptr;
    ListNode *head = new ListNode(vals[0]);
    ListNode *curr = head;
    for (size_t i = 1; i < vals.size(); i++)
    {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

int main()
{
    Solution solver;

    vector<int> values = {1, 2, 3, 4, 5};
    ListNode *head = createList(values);

    cout << "Original: ";
    printList(head);

    ListNode *newHead = solver.reverseList(head);

    cout << "Reversed: ";
    printList(newHead);

    return 0;
}