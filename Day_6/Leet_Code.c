//Problem: 213: House Robber II
int max(int a, int b) {
    return (a > b) ? a : b;
}

int robRange(int* nums, int start, int end) {
    int prev1 = 0;
    int prev2 = 0;

    for(int i = start; i <= end; i++) {
        int curr = max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int rob(int* nums, int numsSize) {

    if(numsSize == 1)
        return nums[0];

    int case1 = robRange(nums, 0, numsSize - 2);
    int case2 = robRange(nums, 1, numsSize - 1);

    return max(case1, case2);
}