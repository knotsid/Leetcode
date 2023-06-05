/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        //if head is null retuen false
        if(head==NULL)
            return false;
        
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast!=NULL && fast->next != NULL){
            fast = fast->next->next;
            slow=slow->next;

            //now if fast nd slow reach same point means there is a loop
            if(fast==slow)
                return true;
        }
        return false;
    }
};