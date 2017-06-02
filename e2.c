#include<stdio.h>
#include<string.h>
int hyphen(char ph[],int n)
{
int i,c=0;
for(i=3;i<n;i++)
 if(ph[i]=='-')
   c++;
return c;
}

int main(void)
{
printf("Enter the phone number: ");
char phone[50];
gets(phone);
int i,c;
c=hyphen(phone,strlen(phone));
if(c==1)
{
 for(i=4;i<14;i++)
   printf("%c",phone[i]);
}
else
{
 for(i=4;i<strlen(phone);i++)
  if(phone[i]=='-')
     break;
 int j;
for(j=4;j<i;j++)
 printf("%c",phone[j]);
}
}

