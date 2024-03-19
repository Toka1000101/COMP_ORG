
#include <stdio.h>

// pass by value
int sum(int a, int b) {
    a++;
    return a + b;
}

// pass by pointer/reference
void add_ten(int* a) {
    printf("%p\n", a);
    *a = *a + 10;
}

int main() {
    // int a = 55;
    // int b = 10;

    // printf("value of a before sum() call %d\n", a); 
    // int result = sum(a,b);
    
    // printf("value of a after sum() call %d\n", a);
    // printf("%d\n", result);
    
    int num = 20;
    printf("before call %d\n", num);

    add_ten(&num);

    printf("after call %d\n", num);

    printf("\n");
    return 0;    
}