#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;
};
typedef struct node NODE;
typedef NODE * PTR;
typedef struct
{
 PTR link;
 int size;
}head;
head insert_node(head,int);
void print_list(head);
int main()
{
  head h;
  h.link=NULL;
  h.size=0;
  h=insert_node(h,1);
  h=insert_node(h,2);
  h=insert_node(h,3);
  h=insert_node(h,4); 
  h=insert_node(h,5);
  h=insert_node(h,6);
  h=insert_node(h,7);
  h=insert_node(h,8);
  h=insert_node(h,9);
  print_list(h);
}
head insert_node(head h,int pos)
{
  PTR newnode;
  newnode=(PTR)malloc(sizeof(NODE));
  printf("Enter data\n");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  PTR trav=h.link;
  PTR x=NULL;
  int i=0;
  if(h.link==NULL)
  {
   h.link=newnode;
   newnode->next=h.link;
   h.size++;
   return h;
  }
  else
  {
    if(pos==1)
    {
       newnode->next=h.link;
       h.link=newnode;
       h.size++; 
        return h;  
    }
    else
     {
      for(i=0;i<pos-2;i++)
       trav=trav->next;
       x=trav->next;
       trav->next=newnode;
       newnode->next=x;
       h.size++;
       return h;        
     }  
  }
}
void print_list(head h)
{
	PTR trav=h.link;
	if(h.link==NULL)
	{
		printf("Empty linked list\n");
		return;
	}
	else
	{
     do
     {
     	printf("%d" ,trav->data);
     	trav=trav->next;
	}while(trav!=h.link);
	}
}
