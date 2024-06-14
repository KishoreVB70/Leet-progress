#include <stdio.h>
#include <string.h>


int romanToInt(char* s);
int main(void) {
    char s[10] = "XC";
    int total = romanToInt(s);
    printf("%d", total);
    return 0;

}

int romanToInt(char* s) {
    int total = 0;

    int prevNum = 10000;
    int currentNum = 0;
    for(int i = 0; i < strlen(s); i++ ) {
        if (s[i] == 'I') {
            currentNum = 1;
            total += 1;
        } else if (s[i] == 'V') {
            currentNum = 5;
            total += 5;
        } else if (s[i] == 'X') {
            total += 10;
            currentNum = 10;
        } else if (s[i] == 'L') {
            total += 50;
            currentNum = 50;
        }else if (s[i] == 'C') {
            total += 100;
            currentNum = 100;
        }else if (s[i] == 'D') {
            total += 500;
            currentNum = 500;
        }else if (s[i] == 'M') {
            total += 1000;
            currentNum = 1000;
        }
        if (prevNum < currentNum) {
            total -= 2* prevNum;        
        }
        prevNum = currentNum;
    }
    return total;
}