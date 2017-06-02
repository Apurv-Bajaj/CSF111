#include<stdio.h>
int main(void)
{
int n;
scanf("%d",&n);
int a[n][3];
int i,j;
for(i=0;i<n;i++)
{
 int s;
 scanf("%d",&s);
 for(j=2;j>=0;j--)
  {
   a[i][j]=s%10;
   s=s/10;
  }
}
float avg=0.0;
for(i=0;i<n;i++)
 avg+=a[i][1];
avg/=n;

for(i=0;i<n;i++)
 if((float)a[i][1]>=avg)
   printf("Course Number:%d\n",a[i][0]);

int max=0;
for(i=0;i<n;i++)
{
 if(a[i][2]==3 || a[i][2]==5 || a[i][2]==6 || a[i][2]==7)
  {
    if(a[i][1]>=max)
     max=a[i][1];
  }
}
for(i=0;i<n;i++)
 if((a[i][2]==3 || a[i][2]==5 || a[i][2]==6 || a[i][2]==7) && a[i][1]==max)
   printf("Course Number:%d\n",a[i][0]);
}

