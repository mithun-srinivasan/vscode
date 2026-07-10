#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* curr1 = list1;
    struct ListNode* curr2 = list2;
    struct ListNode* curr = NULL;
    struct ListNode* head = NULL;

    while (curr1 != NULL && curr2 != NULL) {

        struct ListNode* newNode =
            (struct ListNode*)malloc(sizeof(struct ListNode));

        if (curr1->val < curr2->val) {
            newNode->val = curr1->val;
            curr1 = curr1->next;
        } else {
            newNode->val = curr2->val;
            curr2 = curr2->next;
        }

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            curr = newNode;
        } else {
            curr->next = newNode;
            curr = newNode;
        }
    }

    while (curr1 != NULL) {

        struct ListNode* newNode =
            (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = curr1->val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            curr = newNode;
        } else {
            curr->next = newNode;
            curr = newNode;
        }

        curr1 = curr1->next;
    }

    while (curr2 != NULL) {

        struct ListNode* newNode =
            (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = curr2->val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            curr = newNode;
        } else {
            curr->next = newNode;
            curr = newNode;
        }

        curr2 = curr2->next;
    }

    return head;
}

// Helper to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper to print a list
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d", temp->val);
        if (temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf("\n");
}

// Helper to construct a list from console input
struct ListNode* buildList() {
    int n, val;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return NULL;
    }
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &val) != 1) {
            break;
        }
        struct ListNode* newNode = createNode(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Helper to free a list
void freeList(struct ListNode* head) {
    struct ListNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    printf("--- Input for List 1 ---\n");
    struct ListNode* list1 = buildList();

    printf("--- Input for List 2 ---\n");
    struct ListNode* list2 = buildList();

    printf("\nOriginal List 1: ");
    if (list1 == NULL) printf("Empty\n");
    else printList(list1);

    printf("Original List 2: ");
    if (list2 == NULL) printf("Empty\n");
    else printList(list2);

    struct ListNode* merged = mergeTwoLists(list1, list2);

    printf("\nMerged List: ");
    if (merged == NULL) printf("Empty\n");
    else printList(merged);

    // Free lists to prevent memory leaks
    freeList(list1);
    freeList(list2);
    freeList(merged);

    return 0;
}
