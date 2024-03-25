
#include <stdio.h>

// int uadd_ok(unsigned x, unsigned y){
// 	unsigned sum = x + y;
//
// 	if(sum >= x && sum >= y) {
// 		return 1;
// 	}
// 	else {
// 		return 0;
// 	}
// }

int tadd_ok(int x, int y) {
	int sum = x+y;
	int neg_over = x < 0 && y < 0 && sum >= 0;
	int pos_over = x >= 0 && y >= 0 && sum < 0;
	return !neg_over && !pos_over;
}

int main() {

	int result = uadd_ok(123,145);


	printf("%d", result);


	return 0;
}
