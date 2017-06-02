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

list insert_1(int e,list sl)
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
}printf("\n");
}
list insert(int i,int e,list sl)
{
link n=(link)malloc(sizeof(NODE));
n->a=e;
link temp=sl.head;
int k=1;
for(k=1;k<i;k++)
 temp=temp->next;
n->next=temp->next;
temp->next=n;
sl.size++;
return sl;
}
list delete(int i,list sl)
{
link prev;
link temp=sl.head;
if(temp==NULL)
 printf("Empty list");
else{
if(i==1)
{
sl.head=temp->next;
sl.size--;
}
else 
      {
       int c=1;
       while(c<i)
        { prev=temp;
          temp=temp->next;
          c++; 
        }
       if(i!=sl.size) 
         prev->next=temp->next;
        else prev->next=NULL;
        sl.size--;
  }
}
return sl;
}
void rev1(link n)
{
if(n==NULL)
 return;
rev1(n->next);
printf("%d ",n->a);
}


void rev(list sl)
{
if(sl.head==NULL)
 return;
 rev1((sl.head)->next);
printf("%d ",(sl.head)->a);
}

list sort(list sl,int e)
{
link n=(link)malloc(sizeof(NODE));
n->a=e;
if(sl.head==NULL)
{
 sl.head=n;
 n->next=NULL;
 sl.size++;
}
else
{
link temp=sl.head;
link prev=sl.head;
int i=0;
while(temp->a<=e && temp->next!=NULL)
{ prev=temp;
 i++;
 temp=temp->next;
}
if(temp->a<=e)
{ temp->next=n;
  n->next=NULL;
 sl.size++;
}
else
{
n->next=temp;
if(i!=0)
prev->next=n;
else
 sl.head=n;
sl.size++;
}
}
return sl;
}









int main(void)
{
list sl;
sl=create(sl);//printf("%d ",sl.size);

sl=insert_1(3,sl);//printf("%d ",sl.size);

sl=insert_b(6,sl);//printf("%d ",sl.size);

sl=insert_b(2,sl);//printf("%d ",sl.size);

sl=insert_b(1,sl);//printf("%d ",sl.size);

sl=insert_b(5,sl);//printf("%d ",sl.size);

print(sl);
sl=insert(2,7,sl);//printf("%d ",sl.size);

sl=insert(3,8,sl);//printf("%d ",sl.size);

print(sl);
//sl=delete(7,sl);
//print(sl);
//sl=delete(4,sl);
//print(sl);
//sl=delete(1,sl);
//print(sl);
rev(sl);
list nsl;
nsl=create(nsl);
nsl=sort(nsl,2);
print(nsl);
nsl=sort(nsl,1);
print(nsl);
nsl=sort(nsl,5);
print(nsl);
nsl=sort(nsl,3);
print(nsl);

}

















 














