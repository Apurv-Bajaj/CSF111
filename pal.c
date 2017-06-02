#include<stdio.h>
#include<stdlib.h>
struct node;
typedef struct node NODE;
typedef NODE *link;

struct node
{
int a;
link next; //self referential datatype
};
typedef struct 
{
int size;
link head;
}list;
list create(list sl)
{
sl.size=0;
sl.head=NULL;
return sl;
}

list insert_f(int e,list sl)
{
link n=(link)malloc(sizeof(NODE));
n->a=e;
n->next=NULL;
sl.head=n;
sl.size++;
return sl;
}

list insert_b(int e,list sl)
{
link n=(link)malloc(sizeof(NODE));
link temp=sl.head;
n->a=e;
n->next=NULL;
while(temp->next!=NULL)
temp=temp->next;
temp->next=n;
sl.size++;
return sl;
}
void print(list sl)
{
link temp=sl.head;
while(temp!=NULL)
{
printf("%d ",temp->a);
temp=temp->next;
}
}

int check(list sl)
{
link temp=sl.head;
while(temp->next!=NULL)
 temp=temp->next;

link last=temp;

link first=sl.head;
int i;
for(i=1;i<=(sl.size)/2;i++)
{ 
 if(first->a!=last->a)
    return 0;
 first=first->next;
 temp=first;
 while(temp->next!=last && temp!=last)
  temp=temp->next;
 last=temp;
}
return 1;
}
int main(void)
{
list sl;
sl=create(sl);printf("%d ",sl.size);
sl=insert_f(2,sl);printf("%d ",sl.size);
sl=insert_b(3,sl);printf("%d ",sl.size);
sl=insert_b(3,sl);printf("%d ",sl.size);
sl=insert_b(2,sl);printf("%d ",sl.size);
print(sl);
printf("\n");
printf("%d ",sl.size);
if(check(sl))
 printf("Palindrome");
else
 printf("Not");
}







