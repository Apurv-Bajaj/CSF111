#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define showcase_size 10

typedef enum
{ PINK=5,BROWN,WHITE}color;

typedef struct
{
int bear_id;
float bear_cost;
color bear_color;
}teddy_bear;

typedef struct node 
{
teddy_bear tb;
struct node *next;
}Node;

typedef struct node* link;

typedef struct
{
link head;
int size;
}list;

list create(list sl)
{
sl.head=NULL;
sl.size=0;
return sl;
}

teddy_bear read_tb(void)
{
teddy_bear t;
printf("Enter bear details: ID Cost Color(5,6,7): ");
//int id,color;float cost;
scanf("%d",&t.bear_id);
scanf("%f",&t.bear_cost);
scanf("%d",&t.bear_color);
return t;
}

void print(list sl)
{
link temp=sl.head;int i=1;
if(sl.head==NULL) { printf("EMPTY LIST!"); return;}
while(temp!=NULL)
{ printf("Details of bear %d: ",i); i++;
 printf("%d ",temp->tb.bear_id);
 printf("%f ",temp->tb.bear_cost);
 switch((int)temp->tb.bear_color)
 {
  case 5:
  printf("PINK");
  break;
  case 6:
  printf("BROWN");
  break;
  case 7:
  printf("WHITE");
  }
  temp=temp->next;
}
}

list insert_f(list sl,teddy_bear t)
{
link n=(link)malloc(sizeof(Node));
n->tb=t;
n->next=sl.head;
sl.head=n;
sl.size++;
return sl;
}
list del_l(list sl)
{
link temp=sl.head;
link prev=sl.head;
while(temp->next!=NULL)
{
 prev=temp;
 temp=temp->next;
}
prev->next=NULL;
free(temp);
sl.size--;
return sl;
}

list new_tb(list sl,teddy_bear t)
{
if(sl.size<showcase_size)
 sl=insert_f(sl,t);
else
{ sl=del_l(sl);
  sl=insert_f(sl,t);
}
return sl;
}

void count(list sl,int e)
{
link temp=sl.head;int c=0;
while(temp!=NULL)
{
 if((int)temp->tb.bear_color==e)
   c++;
 temp=temp->next;
}     
//printf("The Count of Color is %d ",c);  
switch(e)
 {
  case 5:
  printf("The Count of Color Pink is %d ",c);
  break;
  case 6:
  printf("The Count of Color Brown is %d ",c);
  break;
  case 7:
  printf("The Count of Color White is %d ",c);
  }
  //temp=temp->next;
} 

list delete(list sl,teddy_bear t)
{link prev=sl.head;
link temp=sl.head;
if(temp->tb.bear_id==t.bear_id && temp->tb.bear_cost==t.bear_cost && temp->tb.bear_color==t.bear_color)
  {sl.head=temp->next; free(temp); return sl;}
temp=temp->next;
while(temp->next!=NULL)
{ 
if(temp->tb.bear_id==t.bear_id && temp->tb.bear_cost==t.bear_cost && temp->tb.bear_color==t.bear_color)
  {prev->next=temp->next; free(temp);}
 prev=temp;
 temp=temp->next;
}
return sl;
} 

list sort(list sl,teddy_bear t)
{
link n=(link)malloc(sizeof(Node));
n->tb=t; n->next=NULL; 
if(sl.head==NULL){ sl.head=n; return sl;}

link temp=sl.head;
if(t.bear_color==5) { n->next=sl.head; sl.head=n; return sl;}
temp=temp->next;//link prev=sl.head;

if(t.bear_color==6)
{ while(temp->next!=NULL)
 { if((temp->next)->tb.bear_color==7) break;
   temp=temp->next;
 }
 n->next=temp->next;
 temp->next=n;
 return sl;
}

if(t.bear_color==7)
{
 while(temp->next!=NULL) temp=temp->next;
 temp->next=n; n->next=NULL;
return sl;
}
}





int main(void)
{
list sl;
sl=create(sl);
teddy_bear tb;
tb=read_tb();
}



