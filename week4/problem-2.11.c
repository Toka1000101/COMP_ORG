#include <stdio.h>
void inplace_swap(int *x, int *y) {

    printf("%d", *x);
    printf("%d\n", *y);
    *y = *x ^ *y; /* Step 1 */
    printf("-----\n");
    printf("%d", *x);
    printf("%d\n", *y);
    *x = *x ^ *y; /* Step 2 */
    *y = *x ^ *y; /* Step 3 */
}
void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt-1;
        first <= last;
        first++,last--)
        inplace_swap(&a[first], &a[last]);
}

int main() {

    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    reverse_array(arr, length);

    for(int i = 0; i < length; i++){
        // printf("%d ", arr[i]);
    }

    return 0;
}