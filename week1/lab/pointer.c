
#include <stdio.h>

int main() {
    int var = 10;
    int * ptr = &var;

    // int sum = var + var;
    // int sum_with_pointers = *ptr + *ptr;

    // printf(" %p \n", ptr);
    // printf(" %p \n", &ptr);

    // printf("sum = %d \n", sum);
    // printf("sum of pointers = %d\n", sum_with_pointers);
    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
    return 0;
}