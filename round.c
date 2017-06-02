
#include<stdio.h>
int count(int x)
{
int c=0;
if(x!=0)
{
while(x!=0)
{
 c++;
 x=x/10;
}
return c;
}
else
 return 1;
}
void num_to_arr(int a[],int b,int n)
{
int i=n-1;
while(i>=0)
{
 a[i]=b%10;
 b=b/10;
 i--;
}
}
int check(int a[],int n)
{
int i=0;
for(i=n-1;i>0;i--)
{ if(a[i]==10)
  {
    a[i]=0;
    a[i-1]++;
  }
}
if(a[0]==10) 
{
 a[0]=0; 
 return 1;
}
 else  
 return 0;
}





int main(void)
{
printf("Enter the number! ");
float num;
scanf("%f",&num);
int s;
printf("Round off to? ");
scanf("%d",&s);
float z;
float a=num-(int)num;
float d,b=a;
while(d!=-a)
{
b=b*10;
z=b-(int)b;
d=z-a;
}
b=(int)b;

int k=count(b)-1;
int arr[count(b)];
num_to_arr(arr,b,k+1);
while(k>=s)
{
if(arr[k]>=5)
 arr[k-1]++;
 k--;
}
int i;
int q=check(arr,s);
printf("Rounded off= %d",(int)num+q);
if(s!=0)
 printf(".");
for(i=0;i<s;i++)
 printf("%d",arr[i]);
printf("\n");
}






