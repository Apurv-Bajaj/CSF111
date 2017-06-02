#include<stdio.h>
#include<stdlib.h>
struct node;
typedef struct node Node;
typedef Node* link;
struct node
{
int a;
link next;
};
typedef struct 
{
int size;
link head;
}list;

list create(list cll)
{
cll.size=0;
cll.head=NULL;
return cll;
}

list insert_b(list cll,int e)
{
link n=(Node*)malloc(sizeof(Node));
n->a=e;

if(cll.size==0)
 {
   cll.head=n;
   n->next=cll.head;
   cll.size++;
  }
else
{
 link temp=cll.head;
 int i;
 for(i=1;i<cll.size;i++)
   temp=temp->next;
 temp->next=n;
 n->next=cll.head;
 cll.size++;
}
return cll;
}

list delete(int e,list cl)
{
link temp=cl.head;
int i;
for(i=1;i<cl.size;i++)
 temp=temp->next;
if((cl.head)->a==e)
{
cl.head=(cl.head)->next;
temp->next=cl.head;
cl.size--;
}
else if(temp->a==e)
     {
       int i;
       link prev=cl.head;
       prev=prev->next;
       while(prev->next!=temp)
         prev=prev->next;
    prev->next=temp->next;
    cl.size--;
    }
else
{
link t=cl.head;link p;
while(t->a!=e)
{
 p=t;
 t=t->next;
}
p->next=t->next;
cl.size--;
}
return cl;
} 
void print(list cl)
{
link temp=cl.head;
int i;
for(i=1;i<=cl.size;i++)
{
 printf("%d ",temp->a);
 temp=temp->next;
}
}
void print_s(int i,list cll)
{
int x=1;
link start,temp=cll.head;
if(cll.head==NULL)
 printf("Empty!");
else
{
 while(x!=i)
 {
  temp=temp->next;
  x++;
 }
start=temp;
printf("%d ",start->a);
temp=temp->next;
while(temp!=start)
{
 printf("%d ",temp->a);
 temp=temp->next;
}
}
}

int main(void)
{
list cll;
cll=create(cll);printf("%d ",cll.size);
cll=insert_b(cll,3);printf("%d ",cll.size);
cll=insert_b(cll,2);printf("%d ",cll.size);
cll=insert_b(cll,4);printf("%d ",cll.size);
cll=insert_b(cll,8);printf("%d ",cll.size);
cll=insert_b(cll,9);printf("%d ",cll.size);
cll=insert_b(cll,5);printf("%d ",cll.size);
print(cll);
printf("\n");
print_s(2,cll);
delete(2,cll);printf("\n");
print(cll);
delete(3,cll);
delete(5,cll);printf("\n");
print(cll);
}













