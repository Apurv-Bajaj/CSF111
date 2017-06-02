#include<stdio.h>

void print(float a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%f ",a[i]);
printf("\n");
}
void insert(float a[],int n)
{
int i,j;float x;
printf("Enter the price of book %d :",n);
scanf(" %f", &a[n-1]);
for(i=1;i<n;i++)
{
x=a[i];
j=i-1;
while(j>=0 && a[j]>x)
{
a[j+1]=a[j];
j--;
}
a[j+1]=x;
}

}


void del(float a[],int n,float x)
{
int i,k;
for(i=0;i<n;i++)
 if(a[i]==x)
  break;
for(k=0;k<n;k++)
 if(k<i)
     continue;
  else if(k>i)
       a[k-1]=a[k];   
       else 
         continue;

n--;

}

void count(float a[],int c,float x,int s)
{
int i,z=0;
if(s==0)
{

for(i=0;i<c;i++)
 if(a[i]<x)
  z++;
}  
else
{

for(i=0;i<c;i++)
 if(a[i]>x)
  z++;
}
printf("%d",z);
}

int main(void)
{
float a[1];
int c=1,i=1;char ch;
do
{
printf("I/D ?");
scanf(" %c",&ch);
switch(ch)
{
case 'I':case 'i':
insert(a,c);
print(a,c);
c++;
break;
case 'D':case 'd':
printf("Enter the element to be deleted! ");
float x;
scanf("%f",&x);

del(a,c,x);
print(a,c);
break;
default:
printf("\nWrong Choice!\n");
}   
printf("Run again?(0/1) ");
scanf("%d",&i);
}
while(i!=0);
count(a,c-1,150.0,0);
printf("\nNEXT\n");
count(a,c-1,1500.0,1);
}

          
          
