#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct class
{
int no_books;
struct text_book *booklist;
};
typedef struct class std;
struct text_book
{
char name[10];
int bid;
float price;
int numaut;
char **autlist;
};
typedef struct text_book tb;
void read_classInfoByRef(std *s,int cl_no,int nb)
{
//std cl=s[cl_no-1];
s[cl_no-1].booklist=(struct text_book*)malloc(nb*sizeof(struct text_book));
int i,j;
s[cl_no-1].no_books=nb;
for(i=0;i<nb;i++)
{ 
	printf("Enter details of book %d name /bid /price/ num of auth: ",i+1);
	scanf("%s",s[cl_no-1].booklist[i].name);
	scanf("%d",&s[cl_no-1].booklist[i].bid);
	scanf("%f",&s[cl_no-1].booklist[i].price);
	scanf("%d",&s[cl_no-1].booklist[i].numaut);
	s[cl_no-1].booklist[i].autlist=(char**)malloc(s[cl_no-1].booklist[i].numaut*sizeof(char*));
	
	for(j=0;j<s[cl_no-1].booklist[i].numaut;j++)
	{ s[cl_no-1].booklist[i].autlist[j]=(char*)malloc(10*sizeof(char));
		printf("Enter author %d :",j+1);
		scanf("%s",s[cl_no-1].booklist[i].autlist[j]);
	}
}
}
void print_classInfo(std s,int cl_no)
{
printf("Details of %d class:\n ",cl_no);
int i;
for(i=0;i<s.no_books;i++)
{
printf("Details of book %d: ",i+1);
printf("Name: %s\n",s.booklist[i].name);
printf("ID: %d\n",s.booklist[i].bid);
printf("Price: %f\n",s.booklist[i].price);
printf("Num of Auths: %d\n",s.booklist[i].numaut);
int j;
for(j=0;j<s.booklist[i].numaut;j++)
{ printf("Author %d: %s",j+1,s.booklist[i].autlist[j]);}
}
}


void print_allInfo(std *s,int nc)
{
int k;
for(k=0;k<nc;k++)
{
printf("Details of %d class:\n ",k+1);
int i;
for(i=0;i<s[k].no_books;i++)
{
printf("Details of book %d: ",i+1);
printf("Name: %s\n",s[k].booklist[i].name);
printf("ID: %d\n",s[k].booklist[i].bid);
printf("Price: %f\n",s[k].booklist[i].price);
printf("Num of Auths: %d\n",s[k].booklist[i].numaut);
int j;
for(j=0;j<s[k].booklist[i].numaut;j++)
{ printf("Author %d: %s",j+1,s[k].booklist[i].autlist[j]);}
}
}
}

std read_classInfoByVal(std s,int cl_no,int nb)
{
s.booklist=(struct text_book*)malloc(nb*sizeof(struct text_book));
int i,j;
s.no_books=nb;
for(i=0;i<nb;i++)
{ 
	printf("Enter details of book %d name /bid /price/ num of auth: ",i+1);
	scanf("%s",s.booklist[i].name);
	scanf("%d",&s.booklist[i].bid);
	scanf("%f",&s.booklist[i].price);
	scanf("%d",&s.booklist[i].numaut);
	s.booklist[i].autlist=(char**)malloc(s.booklist[i].numaut*sizeof(char*));
	
	for(j=0;j<s.booklist[i].numaut;j++)
	{ s.booklist[i].autlist[j]=(char*)malloc(10*sizeof(char));
		printf("Enter author %d :",j+1);
		scanf("%s",s.booklist[i].autlist[j]);
	}
}
return s;
}
void sort(std *s,int cl_no)
{
int i,j;int n=s[cl_no-1].no_books;tb temp;
for(i=0;i<s[cl_no-1].no_books;i++)
{
 for(j=0;j<n-i-1;j++)
  {
   if(s[cl_no-1].booklist[j].bid<=s[cl_no-1].booklist[j+1].bid)
       {
         temp=s[cl_no-1].booklist[j];
         s[cl_no-1].booklist[j]=s[cl_no-1].booklist[j+1];
         s[cl_no-1].booklist[j+1]=temp;
       }
  }
}
}





int main(void)
{
int nc,ns,i,j;
std *s;
printf("enter number of classes\n");
scanf("%d",&nc);
s=(std*)malloc(nc*sizeof(std));// Allocate memory dynamically for the variable s using malloc()
for(i=1;i<=nc;i++)
{
printf("enter number of text_books for %d standard\n",i);
scanf("%d",&ns);
s[i-1]=read_classInfoByVal(s[i-1],i,ns);// Call the function read_classInfobyRef() or read_classInfobyVal()
}
for(i=1;i<=nc;i++)
{
print_classInfo(s[i-1],i);// Call the function print_classInfo() appropriately
}
print_allInfo(s,nc);// Call the function print_allInfo()
sort(s,1);
print_classInfo(s[0],1);

}


















