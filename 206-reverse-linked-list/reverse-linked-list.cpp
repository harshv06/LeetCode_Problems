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

    void Recursive(ListNode* &head,ListNode* curr,ListNode* prev){
        if(curr==nullptr){
            head=prev;
            return;
        }

        ListNode* forward=curr->next;
        Recursive(head,forward,curr);
        curr->next=prev;

    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        Recursive(head,curr,prev);
        return head;
    }
};