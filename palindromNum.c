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