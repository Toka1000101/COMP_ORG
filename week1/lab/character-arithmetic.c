#include <stdio.h>

int main() {
    
    char ch1 = 'A', ch2 = 'B';
    
    ch1 = ch1 + 5;

    char sum = ch1 + ch2;

    printf("%c\n", ch1);
    printf("%d",sum);

    printf("\n");
    return 0;
}