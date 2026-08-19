#include <stdlib.h>
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int map1[1001] = {0};
    int map2[1001] = {0};
    for (int i = 0; i < nums1Size; i++) {
        map1[nums1[i]] = 1;
    }
    for (int i = 0; i < nums2Size; i++) {
        map2[nums2[i]] = 1;
    }
    int maxSize = (nums1Size < nums2Size) ? nums1Size : nums2Size;
    int* result = (int*)malloc(maxSize * sizeof(int));
    int count = 0;
    for (int i = 0; i <= 1000; i++) {
        if (map1[i] && map2[i]) {
            result[count++] = i;
        }
    }
    *returnSize = count;
    return result;
}
