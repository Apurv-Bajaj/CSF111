#include<stdio.h>
#include<math.h>
void store(int num,int a[],int n)
{
int i=n-1;
while(num!=0)
{
 a[i]=num%10;
 num=num/10;
 i--;
}
}

void print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]!=0)
{
 if(i==0)
  printf("%d ",a[0]);
 else
  printf("%dx^%d ",a[i],i);
if(i!=n-1)
  printf(" + ");
}
} 
}

void value(int a[],int n,int c)
{
int s=0,i;
for(i=0;i<n;i++)
s+=a[i]*pow(c,i);
printf("p(%d)= %d",c,s);
}
int main(void)
{
printf("Enter the number: ");
int n;
scanf("%d",&n);
int k=n,f=0;
while(k!=0)
{
 f++;
 k=k/10;
}
int a[f];
store(n,a,f);
print(a,f);
printf("\n");
printf("Enter the value of c: ");
int c;
scanf("%d",&c);
value(a,f,c);
printf("\n");
int b[f+1];
b[0]=0;
int i;
for(i=0;i<f;i++)
b[i+1]=c*a[i];
print(b,f+1);
}

