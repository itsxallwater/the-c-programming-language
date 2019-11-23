#include <stdio.h>

/* Prints a table of Celsius and Fahrenheit
   ranging from values 0 to 300 in increments of 20 */
main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  printf("%3s %6s\n", "(C)", "(Fahr)");
  printf("----------\n");

  celsius = lower;
  while (celsius <= upper)
  {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f %6.1f \n", celsius, fahr);
    celsius = celsius + step;
  }
}
