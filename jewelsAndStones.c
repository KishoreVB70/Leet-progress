#include <stdio.h>
# include <string.h>
int numJewelsInStones(char* jewels, char* stones);
int main(void) {
    char jewels[] = "aA";
    char stones[] = "aAAbbbb";

    int result = numJewelsInStones(jewels, stones );
    printf("%d", result);
}


int numJewelsInStones(char* jewels, char* stones) {
    int result = 0;
    for (int i = 0; i < strlen(stones); i ++) {
        for (int j = 0; j < strlen(jewels); j++) {
            if (stones[i] == jewels[j]) {
                result++;
                break;
            }
        }
    }
    return result;
}