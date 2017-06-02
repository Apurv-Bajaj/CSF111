#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum{SCI,SOCIO,OTHER}pub_info;

typedef struct
{
char auth[2][30];
pub_info p;
}pub_list;

typedef struct 
{
char f_name[30];
pub_list pb[2];
}faculty;

struct node
{
char f_name[30];
struct node* next;
};


struct node* insert(struct node* list,faculty fac[],int n1)
{
struct node* n=(struct node*)malloc(sizeof(struct node));
n->next=NULL;
int i,j;
for(i=0;i<n1;i++)
{
strcpy(n->f_name,fac[i].f_name);
for(j=0;j<2;j++)
{
 if(fac[i].pb[j].p==0 || fac[i].pb[j].p==1)
   break;
}
if(j<2)
{ 
 if(list==NULL) { list=n; return list;}
 struct node* temp=list;
 while(temp->next!=NULL)
  temp=temp->next;
temp->next=n;
return list;
}
}
}

int count(faculty fac[],int n)
{
int c=0;
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<2;j++){
 if(strcmp(fac[i].f_name,fac[i].pb[j].auth[0])==0)
   c++;
 }
}
return c;
}

int main(void)
{
faculty f[3];
strcpy(f[0].f_name,"A");
strcpy(f[0].pb[0].auth[0],"A");strcpy(f[0].pb[0].auth[1],"C");
f[0].pb[0].p=0;
strcpy(f[0].pb[1].auth[0],"B");strcpy(f[0].pb[1].auth[1],"A");
f[0].pb[1].p=2;

strcpy(f[1].f_name,"B");
strcpy(f[1].pb[0].auth[0],"C");strcpy(f[1].pb[0].auth[1],"B");
f[1].pb[0].p=2;
strcpy(f[1].pb[1].auth[0],"B");strcpy(f[1].pb[1].auth[1],"A");
f[1].pb[1].p=2;

strcpy(f[2].f_name,"C");
strcpy(f[2].pb[1].auth[0],"C");strcpy(f[2].pb[1].auth[1],"B");
f[2].pb[1].p=2;
strcpy(f[2].pb[0].auth[0],"A");strcpy(f[2].pb[0].auth[1],"C");
f[2].pb[0].p=0;
int c=count(f,3);
printf("%d",c);
}





   








 












 
