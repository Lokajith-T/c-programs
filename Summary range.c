/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    char** ans=(char**)malloc(numsSize*sizeof(char*));
    for(int i=0;i<numsSize;i++) ans[i]=(char*)malloc(25*sizeof(char));

    int count=0;
    int start;
    start=nums[0];
    for(int i=1;i<=numsSize;i++){
        if(i==numsSize||nums[i]!=nums[i-1]+1){
            if(nums[i-1]==start){
                sprintf(ans[count],"%d",start);
            }else{
                sprintf(ans[count],"%d->%d",start,nums[i-1]);
            }
            if(i!=numsSize) start=nums[i];
            count++;
        }
    }
    *returnSize=count;
    return ans;
}
