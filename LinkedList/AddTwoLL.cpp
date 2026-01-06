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
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0 ;
        ListNode* dummy = new ListNode(-1);
        ListNode* mover = dummy ;
        

        while((l1!=nullptr)||(l2!=nullptr)||carry){
            //cheking if l1 for the sum
            int sum = 0 ;
            if(l1!=nullptr){
                cout<<l1->val;
                sum = sum + l1->val;
                l1=l1->next;
            }
            //cheking if l2 did rubbish
            if(l2!=nullptr){
                sum = sum +l2->val;
                l2=l2->next;

            }

            //now the addition of carry happen
            sum = sum + carry;
            carry = sum/10;
            ListNode* temp = new ListNode(sum%10);
            mover->next = temp ;
            mover=mover->next;

        }
        return dummy->next;

    }
};



//this is not a direct solution it is from leetcode done by me .