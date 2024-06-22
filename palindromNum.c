#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool isPalindrome(int x);
bool isPalindrome1(int x);
void reverseString(char* str);
void reverseString1(char* str);


int main(void) {
    int x = 12345;

    bool result = isPalindrome1(x);
    printf("flag1: %s\n", result ? "true" : "false");
}

bool isPalindrome1(int x) {
    // 1) Convert int to string
    char str[20];
    sprintf(str, "%d", x);

    int length = strlen(str);
    printf("Total length %d\n", length);
    printf("Half length %d\n", length / 2);


    // 2) Reverse the string
    reverseString1(str);

    // Print reversed string as check
    for (int i = 0; i < length; i++) {
        printf("%c", str[i]);
    }

    // 3) Convert string into int
    int reversedInt = atoi(str);

    // Print for debugging
    printf("\nOriginal int: %d\n", x);
    printf("Reversed int: %d\n", reversedInt);


    // 3) Check if forward === reverse
    if (x == reversedInt) {
        return true;
    }
    return false;
}

void reverseString1(char* str) {
    int sizeOfStr = strlen(str);

    if (sizeOfStr < 2) {
        return;
    }

    if (sizeOfStr < 3) {
        char temp = *(str);
        *(str) = *(str + 1);
        *(str + 1) = temp;
        return;
    }

    for(int i = 0; i < sizeOfStr/2; i++) {
        // Declare index
        char *index1 = str + i;
        char *index2 =  str + ( (sizeOfStr - 1) - i );

        printf("Index 1: %c\n", *(index1));
        printf("Index 2: %c\n", *(index2));

        // Swap
        char temp = *(index1);
        *(index1) = *(index2);
        *(index2) = temp;
    }
}

bool isPalindrome(int x) {
    // 1) Convert int to string
    char str[20];
    sprintf(str, "%d", x);

    // 2) Reverse the string
    reverseString(str);

    // 3) Convert string into int
    int reversedInt = atoi(str);

    // 4) Check if forward === reverse
    if (x == reversedInt) {
        return true;
    }
    return false;
}

void reverseString(char* str) {
    int sizeOfStr = strlen(str);

    if (sizeOfStr < 2) {
        return;
    }

    if (sizeOfStr < 3) {
        char temp = *(str);
        *(str) = *(str + 1);
        *(str + 1) = temp;
        return;
    }

    for(int i = 0; i < sizeOfStr/2; i++) {
        // Declare index
        char *index1 = str + i;
        char *index2 =  str + ( (sizeOfStr - 1) - i );
        // Swap
        char temp = *(index1);
        *(index1) = *(index2);
        *(index2) = temp;
    }
}