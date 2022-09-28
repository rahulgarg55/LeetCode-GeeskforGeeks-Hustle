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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
            
        }
        int node_to_remove=count-n;
    ListNode* temp=head;
      int c=1;
     while(c<node_to_remove){
         c++;
         temp=temp->next;
     }
        if(node_to_remove==0) return temp->next;
        temp->next=temp->next->next;
        return head;
    }
};