#include<stdio.h>
#include<string.h>
long int ideal(char str[])
{
int i,c=0;
int x=strlen(str);
//printf("%d ",x); 
	for(i=0;i<x;i++)
	{	//printf("INFI ");
	  c++;
  	  while((str[i]==' ' && str[i+1]==' ') && i!=x-1)
          i++; 
	 }
return c;
}
char* construct(char str[],long int len)
{
char* ptr=(char*)malloc((len+1)*sizeof(char));
int x=strlen(str);
//printf("%d ",x);
int i,j;
for(i=0,j=0;i<x,j<len;i++,j++)
{
 ptr[j]=str[i];
  while((str[i]==' ' && str[i+1]==' ') && i!=x-1)
          i++; 
 }
ptr[len]='\0';   
return ptr;
}


int main(void)
{
char str[100];
printf("Enter your sentence: ");
gets(str);
//printf("\n");
char *re=construct(str,ideal(str));
puts(re);
}

