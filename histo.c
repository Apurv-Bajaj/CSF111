#include<stdio.h>
int n;
void populate(int a[])
{
int i;
for(i=0;i<n;i++)


int main(void)
{
printf("Enter the number of values! ");
scanf("%d",&n);
int a[n],f[n];
printf("Enter the values! ");
populate(a);
printf("Enter the frequency of values! ");
populate(a);

