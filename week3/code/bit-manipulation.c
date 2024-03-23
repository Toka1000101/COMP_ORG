
#include <stdio.h>

void bitwiseAND(int a, int b) {
    int result = a & b;
    printf("Bitwise AND of %d and %d is %d\n", a, b, result);
}

void bitwiseOR(int a, int b) {
    int result = a | b;
    printf("Bitwise OR of %d and %d is %d\n", a, b, result);
}

void bitwiseXOR(int a, int b) {
    int result = a ^ b;
    printf("Bitwise XOR of %d and %d is %d\n", a, b, result);
}

void bitwiseNOT(int a) {
    int result = ~a;
    printf("Bitwise NOT of %d is %d\n", a, result);
}

void leftShift(int a, int positions) {
    int result = a << positions;
    printf("Left Shift of %d by %d positions is %d\n", a, positions, result);
}

void rightShift(int a, int positions) {
    int result = a >> positions;
    printf("Right Shift of %d by %d positions is %d\n", a, positions, result);
}

int main(){
   int a = 60;  // 60 = 0011 1100
   int b = 13;  // 13 = 0000 1101
   int shiftPositions = 2;

//    bitwiseAND(a, b);
//    bitwiseOR(a, b);
//    bitwiseXOR(a, b);
//    bitwiseNOT(a);
//    leftShift(a, shiftPositions);
   rightShift(a, shiftPositions);

   return 0;
}