#include <stdio.h>

int main(void) {
	int x = 11;
	int y = 90;
	int z = 600;
	// ktere cislo je nejvetsi?
	if (x > y && x > z) {
		printf("cislo %d ", x);
		printf("je vetsi nez cislo %d", y);
		printf(" i nez cislo %d\n", z);
	}
	if (y > x && y > z) {	
		printf("cislo %d ", y);
		printf("je vetsi nez cislo %d", x);
		printf(" i nez cislo %d\n", z);
	}
	else if (z > x && z > y) {	 
		 printf("cislo %d ", z);
		 printf("je vetsi nez cislo %d", x);
		 printf(" i nez cislo %d\n", y);
	}
} 