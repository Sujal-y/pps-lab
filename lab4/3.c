// Evaluate the sin(x)= x- x3/3! + x5/5!–x7/7!+ ……… to n terms
#include<stdio.h>
#include<math.h>
#define pi 3.1415

float fact(float n)
{
float factorial =1;
for (float i =1;i<=n; i++)
    {
    factorial = factorial*i;
    }
return factorial;
}

int main()
{
float n; float x;
printf ("Enter values of x & n: \n");
scanf ("%f%f", &x, &n) ; //input
x=x*pi/180.0;//degree to radians
float tempn =1.00;
float sum =0;
float inverter=1;
for (int i=1; i<=n; i++) {
    sum =sum+inverter* (pow (x, tempn) /fact (tempn)) ;
    tempn =tempn+2;
    inverter = inverter*-1;
}
printf ("sum of series is = %f\n", sum);
printf ("sin(%f) = %f\n",(x*180/pi), sin(x));
return 0;
}