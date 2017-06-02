#include <stdio.h>

int main (void)
{
int b = 21;
int c = 7,p=2;
p*=b+5;
printf("The Value of b is %d %d\n", b,p);
int a = b+c*c%b++ ;

printf("The Value of a is %d\n", a);
printf("The Value of b is %d\n", b);
printf("The Value of c is %d\n", c);
a%=c+2;
printf("The Value of a is %d\n", a);
int size =sizeof(int);
double siz=sizeof(double);
float si=sizeof(float);
printf("The size of int is %d bytes",size);
printf("The size of double is %.2f bytes",siz);
printf("The size of float is %.2f bytes",si);
}
