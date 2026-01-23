#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* curr = list1;
        ListNode* prev = nullptr;

        if (list1 == nullptr) {
            head = list2;
            return head;
        } else if (list2 == nullptr) {
            head = list1;
            return head;
        }

        while (curr != nullptr) {

            if (list1 == nullptr) {
                prev = curr;
                curr = list2;
                prev->next = curr;

                return head;
            } else if (list2 == nullptr) {
                prev = curr;
                curr = list1;
                prev->next = curr;

                return head;
            }

            if (list1->val <= list2->val) {

                if (head == nullptr) {
                    head = list1;
                }
                curr = list1;

                if (prev == nullptr) {
                    prev = curr;

                } else {

                    prev->next = curr;
                    prev = prev->next;
                }

                list1 = list1->next;

            } else {

                if (head == nullptr) {
                    head = list2;
                }
                curr = list2;

                if (prev == nullptr) {
                    prev = curr;

                } else {

                    prev->next = curr;
                    prev = prev->next;
                }

                list2 = list2->next;
            }
        }

        return head;
    }
};



ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}


void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Solution solver;
    
    
    ListNode* list1 = createList({1, 2, 4});
    ListNode* list2 = createList({1, 3, 4});
    
    cout << "Merging lists..." << endl;
    ListNode* mergedHead = solver.mergeTwoLists(list1, list2);
    
    printList(mergedHead); 
    
    return 0;
}