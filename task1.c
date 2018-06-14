#include<stdio.h>
#include<string.h>

int main() {
	char str[1000], a[1000];
	scanf("%s", str);

	int len = strlen(str);
	int i, end = len-1;

	for(i = 0; i < len; i++) {
	a[i] = str[end];
	end--;
	}
	a[i] = '\0';
	printf("%s\n", a);
	return 0;
}