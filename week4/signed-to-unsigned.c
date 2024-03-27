#include <stdio.h>

int main() {


	//1100 1111 1100 0111 = -12345 2s complement
	short int v = -12345;
 	unsigned short uv = (unsigned short) v;
	//  v = 53191
 	printf("v = %d, uv = %u\n", v, uv);
 	printf("v = %x, uv = %x\n", v, uv);
	return 0;
}
