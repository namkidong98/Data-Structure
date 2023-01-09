//´ÙÀÌ¾ó
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;
	int result = 0;
	char string[16];
	scanf("%s", string);
	for (i = 0; i < 16; i++) {
		if (string[i] == '\0') break;

		if (string[i] >= 65 && string[i] <= 67) result += 3;
		else if (string[i] >= 68 && string[i] <= 70) result += 4;
		else if (string[i] >= 71 && string[i] <= 73) result += 5;
		else if (string[i] >= 74 && string[i] <= 76) result += 6;
		else if (string[i] >= 77 && string[i] <= 79) result += 7;
		else if (string[i] >= 80 && string[i] <= 83) result += 8;
		else if (string[i] >= 84 && string[i] <= 86) result += 9;
		else if (string[i] >= 87 && string[i] <= 90) result += 10;
	}
	printf("%d\n", result);
}