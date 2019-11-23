#include <stdio.h>

/* Prints a table of Fahrenheit and Celsius
   ranging from values 0 to 300 in increments of 20 */
main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;     /* lower limit of temperature table */
  upper = 300;   /* upper limit */
  step = 20;     /* step size */

  fahr = lower;
  while (fahr <= upper)
  {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\t\n", fahr, celsius);
    fahr = fahr + step;
  }
}
