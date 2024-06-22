#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPalindrome(int x);


int main(void) {
    int x = 121;
    char str[20];
    sprintf(str, "%d", x);
    puts(str);
    // bool result = isPalindrome(121);
}

bool isPalindrome(int x) {
    return true;

    // 1) Convert int to string



    // 2) Reverse the string
    // 3) Check if forward === reverse
}