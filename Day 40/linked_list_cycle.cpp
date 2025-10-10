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
            if(head==NULL){
                return false;
            }
            ListNode* pt1=head;
            ListNode* pt2=head->next;
            while(pt2!=NULL && pt2->next!=NULL){
                pt1=pt1->next;
                pt2=pt2->next;
                if(pt2->next!=NULL){
                    pt2=pt2->next;
                }
                if(pt1==pt2){
                    return true;
                }
            }
            return false;
        }
    };