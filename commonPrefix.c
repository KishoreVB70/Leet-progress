#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize);
int main(void) {
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] =  "flight";
    char* stringsy[] = {str1, str2, str3};

    int size = sizeof(stringsy) / sizeof(stringsy[0]);
    char* result = longestCommonPrefix(stringsy, size);
    printf("Result is: %c", *(result));
    free(result);


}
char* longestCommonPrefix(char** strs, int strsSize){
    char* result = (char*) malloc(sizeof(char) * 10);
    for (int i = 0; i < strsSize; i++) {
        printf("value:%c ", strs[0][i]);
        printf("value:%c ", strs[1][i]);
        printf("value:%c\n", strs[2][i]);

        if ((strs[0][i] == strs[1][i]) && (strs[1][i] == strs[2][i])) {
            *(result+i) = strs[0][i];
            printf("result:%c\n", *(result+i));
        } else {
            return result;
        }
    }
    return result;
}

