#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int target, int numsSize);

int main(void) {
    int nums[] = {2,7,11,5};
    int target = 9;
    int numSize = 4;
    int *result = twoSum(nums, target, numSize);
    for (int i = 0; i < 2; i ++) {
        printf("%d\n", result[i]);
    }

    free(result);
}

int* twoSum(int* nums, int target, int numsSize) {
    int *result = (int*) malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++ ) {
        if (nums[i] + nums[i+1] == target) {
            *result = i;
            *(result + 1) = i+1;
            break;
        }
    }
    return result;
}