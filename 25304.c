//¿µ¼öÁõ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int total, kind, i, a, b;
	int result = 0;
	scanf("%d", &total);
	scanf("%d", &kind);
	for (i = 0; i < kind; i++) {
		scanf("%d %d", &a, &b);
		result += a * b;
	}
	if (result == total) printf("Yes\n");
	else printf("No\n");
}