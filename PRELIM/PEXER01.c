#include <stdio h>

#define PI 3.1416
int main ()
{

const double cPi = PI;
/*
printf("this is the value of PI usuing DEFINE constant %f",PI);
printf("/nthis is the value of PI usuing MEMORY constant %f",cPi);
printf("/nthis is the value of PI usuing LITERAL constant %f",3.1416);
*/

float r;
double area;


printf("Input radius of the circle: %2f",r, area);
scanf("%f", &r);
area = cPi * r * r;


return 0:
}

