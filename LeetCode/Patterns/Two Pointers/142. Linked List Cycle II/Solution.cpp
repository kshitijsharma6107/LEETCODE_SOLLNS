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
    ListNode *detectCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) return nullptr;

      ListNode* sptr = head; 
      ListNode* fptr = head ; 
      ListNode* ptr = head ; 
      while( fptr!=nullptr && fptr->next!=nullptr){
        fptr= fptr->next->next ; 
        sptr= sptr->next ;
        if(fptr==sptr){
            while(sptr != ptr ){
                sptr=sptr->next ; 
                ptr= ptr->next ;
            }
         return ptr ;
        }
      }
      return nullptr ;
    }
};