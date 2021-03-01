#include <stdio.h>
#include <math.h>
int main()
{
float a;
float b;
float c;
float S;
float p;
float P;
int isValid;
printf("A = ");
scanf("%f" , &a);
printf("B = ");
scanf("%f" , &b);
printf("C = ");
scanf("%f" , &c);

isValid = a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a;
if(isValid)
{
P = a + b +c;
p = P / 2.0;
S = sqrt(p*(p - a)*(p-b)*(p - c));
printf("P = %.2f\n" , P);
printf("S = %.2f\n" , S);
}
else
{
printf("Invalid triangle\n");
}
return 0;
}
