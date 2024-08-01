/*https://leetcode.com/problems/sort-colors/*/
void sortColors(int* nums, int numsSize) {
    int clrs[3]={0,0,0};
    for (int i=0; i<numsSize; i++){
        clrs[*(nums+i)]++;
    }
    int k=0;
    for (int i=0; i<numsSize; i++){
        while (clrs[k]==0){
            k++;
        }
        *(nums+i)=k;
        clrs[k]--;
    }
}