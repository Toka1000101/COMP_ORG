#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

 void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
 }

 void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
 }

 void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
 }

void test_show_bytes(int val) {
 int ival = val;
 float fval = (float) ival;
 int *pval = &ival;
 show_int(ival);
 show_float(fval);
 show_pointer(pval);
}
 int main() {

    // 2.5
   //  int a = 0x12345678;
   //  byte_pointer ap = (byte_pointer) &a;
   //  show_bytes(ap, 1); /* A. */
   //  show_bytes(ap, 2); /* B. */
   //  show_bytes(ap, 3); /* C. */

    // 2.7
   //  const char *m = "mnopqr";
   //  show_bytes((byte_pointer) m, strlen(m));

   // x->...00100001 &
   // 00...1111 1111 -> 0xFF
   // 0x00000021
    int x = 0x87654321;
    int first = x & 0xFF;
    // 21 -> 00100001
    // ~00100001 -> 11011110
    // 00000000
    // 11011110 
    // 11011110
   //  int second = x ^ ~0xFF;
    int third = x | 0xFF;
    // or operation
    // 11011110 -> 21 
    // 11111111 -> FF
    // 11111111
    // x | 1 = 1
   //  printf("%x\n", first);
   //  printf("%x\n", second);
    printf("%x\n", third);
    return 0;

 }