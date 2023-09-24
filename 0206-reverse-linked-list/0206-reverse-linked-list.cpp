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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *revll=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return revll;
    }

    // ____________________ITERATIVE____________________
    // ListNode* reverseList(ListNode* head) {
    //     ListNode *prev=NULL;
    //     while(head!=NULL){
    //         // assigning next to next node wrt head
    //         ListNode *next=head->next;
    //         // breaking existing pointer to next and putting it on previous node
    //         // since no previous of head exist so making it null
    //         head->next=prev;
    //         // cant leave prev behind, we need to move it to keep track of just before head
    //         prev=head;
    //         // updating head to next node and repeating the same process
    //         head = next;
    //     }
    //     // here head and next are at null so we can return prev or update head and return head
    //     head=prev;
    //     return head;
    // }
};