#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
 int* res = (int *)malloc(sizeof(int) * 2);
    * returnSize=0;
    for(int i = 0; i < numsSize-1; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums [j] == target) {
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    return res;
}