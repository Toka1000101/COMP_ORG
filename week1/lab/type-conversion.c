#include <stdio.h>


// bool -> char -> short int -> int -> 
// unsigned int -> long -> unsigned -> 
// long long -> float -> double -> long double
int main() {

    // char ch = 'A'; //65
    // int x = 10;

    // char new_ch = ch + x;
    // x = ch + x;

    // printf("%c\n", new_ch);
    // printf("%d\n",x);

    // explicit type conversion

    int a = 10;
    float f = 10.6;

    int sum = a + (int)f;

    printf("%d\n",sum); 
    return 0;
}