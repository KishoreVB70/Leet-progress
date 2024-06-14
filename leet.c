#include <stdio.h>

int scoreOfString(char* s);

int main() {
    int final =  scoreOfString("zaz");
    printf("%d", final);
    return 0;
}


int scoreOfString(char* s) {
    int final;
    for (int i = 1; s[i] != '\0'; i++) { 
        int intialcurrent;
        if (s[i] > s[i-1] ) {
            intialcurrent = s[i] - s[i-1];
        } else {
            intialcurrent = s[i - 1] - s[i];
        }
        final += intialcurrent;
    }
    return final;
}