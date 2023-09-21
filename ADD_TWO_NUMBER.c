
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = NULL, *tail = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        sum %= 10;

        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = sum;
        node->next = NULL;

        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }

        if (l1) {
    l1 = l1->next;
}
if (l2) {
    l2 = l2->next;
}

    }

    return head;
}
