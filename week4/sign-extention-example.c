
#include <stdio.h>

int main() {

	short int x =  15213;
  int      ix = (int) x;
  short int y = -15213;
  int      iy = (int) y;

	printf("x: %x, ix: %x, y: %x, iy: %x", x, ix, y, iy);

	return 0;
}
