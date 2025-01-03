typedef struct {
    int *arr;
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* ptr = (NumArray*)malloc(sizeof(NumArray));
    ptr->arr = (int*)malloc(sizeof(int)*numsSize);
    for(int i=0; i<numsSize; i++){
        ptr->arr[i] = nums[i];
    }
    return ptr;
}

int numArraySumRange(NumArray* obj, int left, int right) {
  int sum = 0;
    for(int i=left; i<=right; i++){
        sum+= obj->arr[i];
    }
    return sum;
}

void numArrayFree(NumArray* obj) {
    free(obj->arr);
    free(obj);
}
