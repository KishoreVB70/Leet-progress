#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize);
char* longestCommonPrefix1(char** strs, int strsSize);
int main(void) {
    char* stringsy[] = {"hi","hello", "howareu"};

    int size = sizeof(stringsy) / sizeof(stringsy[0]);
    char* result = longestCommonPrefix1(stringsy, size);
    printf("%c", result[0]);
    free(result);
}

char* longestCommonPrefix1(char** strs, int strsSize) {
    char* result = (char*) malloc(sizeof(char) * 150);
    int i;

    if(strsSize <1 ) {
        result[0] = '\0';
        return result;
    }

    for (i = 0 ; strs[0][i] != '\0'; i++) {
        // Array size
        for (int j = 0; j < (strsSize -1); j++) {
            printf("value:%c ", strs[j][i]);
            printf("value:%c\n", strs[j+1][i]);

            if(strs[j][i] == '\0' || strs[j+1][i] == '\0') {
                printf("null character triggered");
                result[i] = '\0';
                return result;
            }

            if( strs[j][i] != strs[j+1][i]) {
                printf("Return initiated\n");
                result[i] = '\0';
                return result;
            }
        }
        *(result+i) = strs[0][i];
        printf("Result:%c\n", strs[0][i]);
    }
    result[i] = '\0';
    return result;
}

char* longestCommonPrefix(char** strs, int strsSize){
    char* result = (char*) malloc(sizeof(char) * 10);
    int sizeofEachString = sizeof(strs[0]) / sizeof(strs[0][1]);
    for (int i = 0; i < sizeofEachString; i++) {
        for (int j = 0; j < (strsSize -1); j++) {
            if( strs[j][i] != strs[j+1][i]) {
                return result;
            }
        }
        *(result+i) = strs[0][i];
    }
    return result;
}

