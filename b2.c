#include<stdio.h>
int main(void)
{
int a[8],arr[10][8];
int i=7;
long int n;
scanf("%li",&n);
while(i>=0)
{
a[i]=n%10;
n=n/10;
i--;
}
int j;
for(i=0;i<10;i++)
{
long int s;
scanf("%li",&s);
for(j=7;j>=0;j--)
{
 arr[i][j]=s%10;
 s=s/10;
}
}
int f=0;
for(i=0;i<10;i++)
 if(arr[i][6]==a[6])
   f++;
printf("\n%d\n",f);
int c[10];
for(i=0;i<10;i++)
{
 int s=0;
 for(j=0;j<8;j++)
 {
  if(a[j]==arr[i][j])
   s++;
 }
c[i]=s;
}

int m[10];
for(i=0;i<10;i++)
 m[i]=(4*c[i])-(8-c[i]);
for(i=0;i<10;i++)
 printf("%d\n",m[i]);
}
