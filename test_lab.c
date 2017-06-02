#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node;
typedef struct node Node;
typedef Node* link;
struct node
{
int a;
link next;
};

void push(Node** head_ref,int new_data)
{link n=(link)malloc(sizeof(Node));
n->a=new_data;
n->next=NULL;

/*if(*head_ref==NULL)
{ *head_ref=n; return;}*/
n->next=*head_ref;
*head_ref=n;
return;
}

void insert(Node* prev,int data)
{
link n=(link)malloc(sizeof(Node));
if(prev==NULL)
{
 printf("PREV CANNOT BE NULL!"); return;}
n->a=data;
n->next=prev->next;
prev->next=n;
return;
}

void append(Node** head_ref,int data)
{
link n=(link)malloc(sizeof(Node));
n->a=data;
n->next=NULL;
link temp=*head_ref;
if(temp==NULL) { *head_ref=n; return;}

while(temp->next!=NULL)
 temp=temp->next;
temp->next=n;
return;
}

void print(Node* head)
{
link temp=head;
if(temp==NULL) {printf("Empty List!"); return;}
while(temp!=NULL)
{
 printf("%d ",temp->a); 
 temp=temp->next;
}
} 
int main(void)
{
/* Start with the empty list */
struct node* head = NULL;
// Insert 6. So linked list becomes 6->NULL
append(&head, 6);
// Insert 7 at the beginning. So linked list becomes 7->6->NULL
push(&head, 7);
// Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
push(&head, 1);
// Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
append(&head, 4);
// Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL
insert(head->next, 8);
printf("\n Created Linked list is: ");
print(head);
}



