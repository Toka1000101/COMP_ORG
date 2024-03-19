#include <stdio.h>

// 1) create varialbes num1, num2 and sum
// 2) create 2 pointers for num1 and num2
// 3) read values from user and store in num1 and num2 using pointers
// 4) sum up num1 and num2 with pointers
// 5) print the sum variable and show the result
int main()
{

    int num1, num2, sum; //1
    int *ptr1, *ptr2; // 2

    // 2
    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2

    // 3
    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);

    //sum = *ptr1 + *ptr2;
    sum = num1 + num2;

    printf("Sum = %d\n", sum);

    return 0;
}