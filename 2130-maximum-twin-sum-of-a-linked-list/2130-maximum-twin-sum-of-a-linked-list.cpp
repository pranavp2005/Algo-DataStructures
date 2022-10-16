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
    int pairSum(ListNode* head) {
        vector<int> nodeVals;
        int size=0;
        
        while(head!=NULL) {
            nodeVals.push_back(head->val);
            size++;
            head=head->next;
        }
        
        int maxPair=0;
        for (int i=0;i<size/2;i++){
            maxPair=max(maxPair,nodeVals[i]+nodeVals[size-1-i]);
        }
        return maxPair;
    }
};