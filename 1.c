#include<stdio.h>
int fun(int a[],int n);
void fun1(int a[],int n);

void main(void)
{
printf("n ? ");
int n;
scanf("%d",&n);
int a[n];
int i;

printf("Elements?");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

//int s=fun(a,n);
//printf("\n%d",s);
fun1(a,n);
for(i=0;i<n;i++)
printf("%d",a[i]);

}

int fun(int a[],int n)
{
int i;
int s=a[0];
for(i=1;i<n;i++)
 if(s>a[i])
  s=a[i];
return s;
}

void fun1(int a[],int n)
{
int i;
for(i=0;i<n;i++)
a[i]=a[i]*a[i];
}

 

