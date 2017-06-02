#include<stdio.h>
#include<string.h>
union uni
{
int n1;
char a[4];
int n2;
};
int main(void)
{
union uni u;
u.n1=0;
u.a[1]='A';
//u.a[3]='\0';
printf("%d",u.a[0]);
printf("%d",u.a[1]);
printf("%s",u.a[0]);
}

