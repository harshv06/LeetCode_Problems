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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        // if(head->val==head->next->val) head->next=NULL;
        if(head->next==NULL) return head;
        ListNode* curr=head;
        while(curr ){
            if(curr->next && curr->val==curr->next->val){
                ListNode* temp=curr->next;
                ListNode* next=curr->next->next;
                delete(temp);
                curr->next=next;
            }else{
                curr=curr->next;
            }
        }
        return head;
    }
};