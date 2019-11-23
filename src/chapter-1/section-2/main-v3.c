#include <stdio.h>

/* Prints a table of Fahrenheit and Celsius
   ranging from values 0 to 300 in increments of 20 */
main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;     /* lower limit of temperature table */
  upper = 300;   /* upper limit */
  step = 20;     /* step size */

  printf("%3s %6s\n", "(F)", "(Cels)");
  printf("----------\n");

  fahr = lower;
  while (fahr <= upper)
  {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f \n", fahr, celsius);
    fahr = fahr + step;
  }
}
