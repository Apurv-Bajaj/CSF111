#include<stdio.h>

void swap(int v[],int i,int j)
{
int t;
t=v[i];
v[i]=v[j];
v[j]=t;
}

void perm(int v[],int i,int n,FILE *fp)
{
int j;
if(i==n)
{
 for(j=0;j<n;j++){
 putc(v[j]+48,fp);//base case
 putc(' ',fp);
}
putc('\n',fp);
}
else
{
for(j=i;j<n;j++){
swap(v,i,j);
perm(v,i+1,n,fp);
swap(v,i,j);}
}
}
int main(void)
{
int n;
FILE *fp;
scanf("%d",&n);
int v[n],i;
fp=fopen("p.txt","w");
for(i=0;i<n;i++)
 v[i]=i+1;
perm(v,0,n,fp);
fclose(fp);
fp=fopen("p.txt","r");

FILE* f;
f=fopen("sa.txt","w");
char c;
while((c=fgetc(fp))!=EOF)
{
if(c!='\n'){
fputc(c,f);}
}
fclose(f);
fclose(fp);
}










