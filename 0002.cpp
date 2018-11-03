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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	ListNode* head;
    	ListNode* last;
    	bool isFirst = true;
    	int overflow = 0;
    	int n1, n2;
    	while(l1 != NULL || l2 != NULL) {
    		n1 = 0;
    		n2 = 0;
    		if (l1 != NULL) {
    			n1 = l1->val;
    		}
    		if (l2 != NULL) {
    			n2 = l2->val;
    		}
    		int sum = n1 + n2 + overflow;
    		ListNode* temp = new ListNode(sum % 10);
    		if (isFirst) {
    			head = temp;
    			last = temp;
    			isFirst = false;
    		} else {
    			last->next = temp;
    			last = temp;
    		}
    		overflow = sum / 10;
    		if (l1) {
                l1 = l1->next;
            }
            if (l2) {
    		    l2 = l2->next;
            }
    	}  
    	if (overflow != 0) {
    		ListNode* temp = new ListNode(overflow);
    		last->next = temp;
    		last = temp;
    	}
    	return head;
    }
};