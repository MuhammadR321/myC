#include <stdio.h>
int main()
{
	printf("Celsius to Fahrenheit\n");
	float celsius, fahr;
	float lower, upper, step;

	lower = -17.8;
	upper = 148.9;
	step = 11.1;

	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.1f\t%6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
