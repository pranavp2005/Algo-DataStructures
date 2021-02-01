/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //first pass making a new list
    
        Node *currold = head;
        Node* currnew =NULL;
        unordered_map<Node*,Node*> m;
        
        Node dummy(-1);
        currnew =&dummy;
        
        while(currold != NULL)
        {
            currnew->next=new Node(currold->val);
            m[currold]=currnew->next;
            currnew=currnew->next;
            currold=currold->next;     
        }
        
        currold=head;
        currnew=dummy.next;
        
        while(currold != NULL){
            currnew->random = m[currold->random];
            currnew=currnew->next;
            currold=currold->next;
        }
        
        return dummy.next;
    }
};