#include<stdio.h>
#include<math.h>
void scan_data(char *op,float *n)
{
printf("Operator? ");
scanf(" %c",op);
printf("Operand? ");
scanf(" %f",n);
}

float do_next_op(char op,float n,float s)
{

switch(op)
{
case '+':
 return s+n;
 break;
case '-':
 return s-n;
 break;
case '*':
 return s*n;
 break;
case '/':
 return s/n;
 break;
case '^':
 return pow(s,n);
 break;
case 'q':
 return s;
 break;
default:
 printf("INVALID!\n");
}
}
int main(void)
{
float n,acc=0.0;
char op;
do{
scan_data(&op,&n);
acc=do_next_op(op,n,acc);
if(op!='q')
printf("\nresult so far: %f",acc);
}
while(op!='q'); 
printf("\nfinal result: %f",acc);
}





