#include <stdio.h>

float culCelsius(float fahr);

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahr Celsius\n");
	fahr = lower;
	while (fahr <= upper) {
		celsius = culCelsius(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

float culCelsius(float fahr) {
   return (5.0/9.0) * (fahr - 32.0);
}
