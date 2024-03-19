#include <stdio.h>

void logicalAND(int a, int b){
    if (a && b){
        printf("Logical AND - Condition is true\n");
    }
    else{
        printf("Logical AND - Condition is false\n");
    }
}

void logicalOR(int a, int b){
    if (a || b){
        printf("Logical OR - Condition is true\n");
    }
    else{
        printf("Logical OR - Condition is false\n");
    }
}

void logicalNOT(int a){
    if (!a){
        printf("Logical NOT - Condition is true\n");
    }
    else{
        printf("Logical NOT - Condition is false\n");
    }
}

int main() {
    int a = 5, b = 0;

    logicalAND(a, b);
    logicalOR(a, b);
    logicalNOT(b);

    return 0;
}