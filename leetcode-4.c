double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    double res;
    int len = nums1Size + nums2Size;
    int index = 0;
    int p1 = 0;
    int p2 = 0;
    int *arr = (int *)malloc(sizeof(int) * len);

    int flag = len % 2;
    int mid = len / 2;

    while ((p1 < nums1Size) && (p2 < nums2Size)) {
        if (nums1[p1] < nums2[p2]) {
            arr[index] = nums1[p1];
            p1++;
        } else {
            arr[index] = nums2[p2];
            p2++;
        }

        if (index == mid) {  //到了中点，后面就不需要管了
            p1 = nums1Size;
            p2 = nums2Size;
            break;
        }
        index++;
    }

    while (p1 < nums1Size) {
        arr[index] = nums1[p1];

        if (index == mid) {
            p1 = nums1Size;
            p2 = nums2Size;
            break;
        }

        p1++;
        index++;
    }

    while (p2 < nums2Size) {
        arr[index] = nums2[p2];

        if (index == mid) {
            p1 = nums1Size;
            p2 = nums2Size;
            break;
        }

        p2++;
        index++;
    }

    if (flag) {
        return arr[mid] * 1.0;
    } else {
        return (arr[mid-1] + arr[mid]) * 1.0 / 2;
    }
}