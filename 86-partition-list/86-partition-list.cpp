/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
         ListNode *fdum = new ListNode(0), *bdum = new ListNode(0),
                 *front = fdum, *back = bdum, *curr = head;
        while (curr) { //4 6 2 1 8 3 5 9
            if (curr->val < x) front->next = curr, front = curr; //0->4->2->1->3
            else back->next = curr, back = curr; //
            curr = curr->next; //0->6->8->5->9
        }
        front->next = bdum->next; //0->4->2->1->3->6->8->5->9->null
        back->next = nullptr;
        return fdum->next; //4->2->2->1->3....
    }
};