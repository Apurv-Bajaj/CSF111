#include<stdio.h>
int main(void)
{
char c;
printf("Enter your character: ");
scanf("%c", &c);

switch(c)
{
case 'A':
case 'a':
case 'e':
case 'E':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
printf("Vowel\n ");
break;
default:
printf("Consonant\n ");
}
}
