/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *ptr=head;
    int count=0;
    //ptr=head;
    
    while(ptr!=NULL){
        //printf("%d",ptr->val);
        count++;
        ptr=ptr->next;
    }
    //printf("%d",count);
    count/=2;
    while(count>0){
        head=head->next;
        count--;
    }
    printf("%d",head->val);
    return head;
}
