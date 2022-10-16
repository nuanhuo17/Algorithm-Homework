class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 解题思路：
        // 1、循环（用while而不是for，对链表来说判断null很方便），比大小，小值的链表继续迭代
        // 2、创建一个头节点并复制它，一个随着链表长度增加而增加，一个不动留到最后返回链表头值
        // 3、链表的名称即为其首节点的指针，并可用list = list->next不断后移
        // 4、链表节点的值即为list->val
        ListNode* preHead = new ListNode(-1);
        ListNode* prev = preHead;
        while ( list1 != nullptr && list2 != nullptr ) {
            if (list1->val <= list2->val) {
                prev->next = list1;
                list1 = list1->next;
            } else {
                prev->next = list2;
                list2 = list2->next;
            }
            prev = prev->next;
        }
        prev->next = list1 == nullptr ? list2 : list1;
        return preHead->next;
    }
};