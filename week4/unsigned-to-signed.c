
#include <stdio.h>

int main() {

	unsigned int u = 4294967295u; /* UMax */
 	int tu = u;
 	printf("u = %u, tu = %d\n", u, tu);
 	printf("u = %x, tu = %x\n", u, tu);

	return 0;
}
