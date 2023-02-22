#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;

	printf("Enter latter: ");
	scanf("%c", &c);

	printf("letter entired: %c in islower() return %d\n", c, islower(c));
	return (0);
}
