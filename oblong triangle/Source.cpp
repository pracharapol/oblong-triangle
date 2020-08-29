#include<stdio.h>
int main() {
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	printf("Base = %d\n", x);
	printf("Height = %d\n", x);
	printf("Area = %d\n", (x * x) / 2);
	for (int i = 1; i <= x; i++) {
		for (int j = x; j >= i; j--) {
			printf(" ");
			if (j > i) {
				printf(" ");
			}
			else {
				for (int a = 1; a <= i; a++) {
					printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}