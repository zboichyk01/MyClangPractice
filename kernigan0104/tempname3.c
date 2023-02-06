main () 
{printf("Farenheit Celsius Conversion Table\n");
	float fahr, celsius;
	float lower, upper, step;
	lower = 5;
	upper = 350; 
	step = 10; 
	fahr = lower;
	while (fahr <= upper) { celsius = (5.0/9.0)*(fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;} } 

