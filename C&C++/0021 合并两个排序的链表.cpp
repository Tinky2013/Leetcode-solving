/*
输入两个递增排序的链表，合并这两个链表并使新链表中的节点仍然是递增排序的。

示例1：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4
*/

//这题如果用一般的迭代并且不占用新的空间会很麻烦，最好使用递归的方法

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#recursively
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    if(l1->val <= l2->val){
        l1->next=mergeTwoLists(l1->next,l2);
        return l1;
    }else{
        l2->next=mergeTwoLists(l1,l2->next);
        return l2;
    }
}

