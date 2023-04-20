//approach 1 - using count
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
// approach 2 - using 2 pointers

/*
    we have 2 pointer called middle and end both pointing to the first element. 
    The logic behind this is for every 2 elements in the list the middle value moves by 1.
    
    let's take an example 1 2 3 4 5 6 7 8
    at first m and e are at 1
    then 1 2 3 4 5 6 7 8    
           m e
         1 2 3 4 5 6 7 8
             m e
         1 2 3 4 5 6 7 8
             m   e
         1 2 3 4 5 6 7 8
               m   e
         1 2 3 4 5 6 7 8
               m     e
         1 2 3 4 5 6 7 8
                 m     e
*/                   

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *middle=head;
    struct ListNode *end=head;
    while(end!=NULL && end->next!=NULL){
        end=end->next->next;
        middle=middle->next;
    } 
    return middle;
}
