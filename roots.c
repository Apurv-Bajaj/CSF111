#include<stdio.h>
#include<math.h>
float root(float a,float b,float c,float *x1,float *x2)
{
float d=(b*b)-(4*a*c);
*x1=(-b-sqrt(d))/(2*a);
*x2=(-b+sqrt(d))/(2*a);
return d;
}

int main(void)
{
float a,b,c,x1,x2;
printf("Enter a,b and c ");
scanf("%f %f %f",&a,&b,&c);
float d=root(a,b,c,&x1,&x2);
if(d>=0)
{
printf("x1=%f\n",x1);
printf("x2=%f\n",x2);
}
else
 printf("Roots do not exist!\n");
}

