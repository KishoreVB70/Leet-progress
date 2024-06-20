#include <stdio.h>
#include <stdlib.h>

int* twoSumsAdjacent(int* nums, int target, int numsSize, int* returnSize);
int* twoSums(int* nums, int numsSize, int target, int* returnSize);

int main(void) {
    int nums[] = {3, 2, 4};
    int target = 6;
    int numSize = 4;
    int returnSze = 2;
    int *returnSize = &returnSze;

    int *result = twoSums(nums, numSize, target, returnSize);
    for (int i = 0; i < 2; i ++) {
        printf("number %d is %d\n", i, result[i]);
    }

    free(result);
}

int* twoSumsAdjacent(int* nums, int target, int numsSize, int* returnSize) {
    int *result = (int*) malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++ ) {
        if (nums[i] + nums[i+1] == target) {
            *result = i;
            *(result + 1) = i+1;
            break;
        }
    }

    *returnSize = 2;

    return result;
}

int* twoSums(int* nums, int numsSize, int target, int* returnSize) {
    int *result = (int*) malloc(2 * sizeof(int));
    int resulter = 0;
    for (int i = 0; i < numsSize; i++ ) {
        if (resulter == 1) {
            break;
        }
        for (int j = 0; j < numsSize; j++) {
            if (i == j) {
                continue;;
            }
            if (nums[i] + nums[j] == target) {
                *result = i;
                *(result + 1) = j;
                resulter = 1;
                break;
            }
        }
    }
    *returnSize = 2;
    return result;
}
