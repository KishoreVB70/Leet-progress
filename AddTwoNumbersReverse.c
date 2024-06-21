#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
void reverser(char* str);


int main(void){
    struct ListNode l111;
    l111.val = 3;

    struct ListNode l11;
    l11.val = 4;
    l11.next = &l111;

    struct ListNode l1;
    l1.val = 2;
    l1.next = &l11;

// -----------------------------------------------------
    struct ListNode l222;
    l222.val = 4;
    
    struct ListNode l22;
    l22.val = 6;
    l22.next = &l222;

    struct ListNode l2;
    l2.val = 5;
    l2.next = &l22;

    printf("%d", l2.val );

}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // Result struct declaration
    struct ListNode result;
    struct ListNode result1;
    struct ListNode result2;

    char num1[3];
    char num2[3];

    char value[3];

    // Obtaining the structs
    struct ListNode l11 = l1.next;
    struct ListNode l22 = l2.next;

    struct ListNode l111 = l11.next;
    struct ListNode l222 = l22.next;

    // First round
    num1[0] = l1.value + '0';
    num2[0] = l2.value + '0';

    // Second round
    num1[1] = l11.value + '0';
    num2[1] = l22.value + '0';

    // Third round
    num1[2] = l111.value + '0';
    num2[2] = l222.value + '0';

    // Reverse the 2 strings
    reverser(num1);
    reverser(num2);

    // Convert into int
    int inum1 = atoi(num1)
    int inum2 = atoi(num2)

    // Add the int
    int ivalue = inum1 + inum2;

    // Convert again into string
    sprintf(value, "%d", ivalue)

    // Result Struct chain assigning
    result2.value = (int) value[2];

    result1.value = (int) value[1];
    result.next = &result2;

    result.value = (int) value[0];
    result.next = &result1;

    return &result;
}

void reverser(char* str) {
    char temp;
    temp = *(str);
    *(str) = *(str + 2);
    *(str + 1) = *(str + 1);
    *(str + 2) = temp;
}