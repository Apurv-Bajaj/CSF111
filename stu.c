#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node;
typedef struct node Node;
typedef struct node* link;
typedef enum{SK=1,VY,SR}hostel;
typedef struct
{
char name[20];
hostel h;
int rno;
}student;

struct node
{
student s;
link next;
};

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
student read(student s)
{
printf("Name? ");
fgets(s.name,20,stdin);
printf("Hostel? ");
scanf("%d",&s.h);
printf("Rno? ");
scanf("%d",&s.rno);
char c;
scanf("%c",&c);
return s;
}

list insert(list sl,student st)
{
link n=(link)malloc(sizeof(Node));
n->s=st; n->next=NULL;
if(sl.head==NULL) 
{ sl.head=n; sl.size++; return sl;}
link temp=sl.head;
while(temp->next!=NULL)
 temp=temp->next;
temp->next=n;
sl.size++;
return sl;
}
void print(list sl)
{
link temp=sl.head;
if(sl.head==NULL) {printf("EMPTY!"); return;}
while(temp!=NULL)
{
printf("%d %d\n",temp->s.h,temp->s.rno);
temp=temp->next;
}
}
list in(list sl,student st)
{
link n=(link)malloc(sizeof(Node));
n->s=st; n->next=NULL;
if(sl.head==NULL)
{ sl.head=n; sl.size++; return sl; }
link temp=sl.head;
if(st.h==1) 
{ n->next=sl.head; sl.head=n;sl.size++; return sl;}
if(st.h==3)
{
while(temp->next!=NULL)
 temp=temp->next;
temp->next=n;
sl.size++;
return sl; }
temp=sl.head;
int c1=0,c2=0,c3=0;
while(temp!=NULL)
{
 if(temp->s.h==1) c1++;
  if(temp->s.h==2) c2++;
   if(temp->s.h==3) c3++;
temp=temp->next;
}
if(c1==sl.size){
temp=sl.head;
while(temp->next!=NULL)
 temp=temp->next;
temp->next=n;
sl.size++;
return sl; }
if(c2==sl.size){
temp=sl.head;
while(temp->next!=NULL)
 temp=temp->next;
temp->next=n;
sl.size++;
return sl; }
if(c3==sl.size){ 
n->next=sl.head;
sl.head=n; sl.size++;return sl;}
if(c1==0){
n->next=sl.head;
sl.head=n; sl.size++;return sl;}
temp=sl.head;
while(temp!=NULL)
{
 if(temp->s.h==1)
    break;
}
n->next=temp->next;
temp->next=n;
sl.size++;
return sl;
}

int main(void)
{
list sl;
sl=create(sl);
student s1,s2,s3,s4,s5,s6;
/*strcpy(s1.name,"ABC");
s1.h=2;
s1.rno=123;
strcpy(s2.name,"DEF");
s2.h=1;
s2.rno=225;
strcpy(s3.name,"GHI");
s3.h=3;
s3.rno=333;
strcpy(s4.name,"PQR");
s4.h=3;
s4.rno=03;
strcpy(s5.name,"MNP");
s5.h=2;
s5.rno=23;
strcpy(s6.name,"XYZ");
s6.h=1;
s6.rno=23;*/
s1=read(s1);
sl=in(sl,s1);
s2=read(s2);
sl=in(sl,s2);
s3=read(s3);
sl=in(sl,s3);
s4=read(s4);
sl=in(sl,s4);
s5=read(s5);
sl=in(sl,s5);
s6=read(s6);
sl=in(sl,s6);
print(sl);
}












