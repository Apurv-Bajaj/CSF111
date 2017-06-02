#include<stdio.h>
int main(void)
{
int a[]={-99,-10,-545,999999,-9999,-515,-15};
int i,k,start=0,end=0,z,sum=0,max=a[0];
for(i=0;i<7;i++)
{
for(k=6;k>i;k--)
{
 for(z=i;z<=k;z++)
  sum=sum+a[z];
 if(sum>max)
  { max=sum; start=i;end=k;}
  sum=0;
}
}
printf("%d\n",max);
for(i=start;i<=end;i++)
  printf("%d\n ",a[i]);
// float c=742.425%10.0;
// printf("%f ",c);
}
