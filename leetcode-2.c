#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int c=0;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    if(l1==NULL && l2==NULL && c==0)return NULL;
    l1 = l1!=NULL ? (c += l1->val, l1->next) : l1;
    l2 = l2!=NULL ? (c += l2->val, l2->next) : l2;
    struct ListNode *cur = (struct ListNode *)malloc(sizeof(struct ListNode));
    cur->val = c%10;
    c /= 10;
    cur->next = addTwoNumbers(l1,l2);
    return cur;
}