#include<stdio.h>
int main(void)
{
FILE* f= fopen("01.c", "r");
int ch= fgetc( f);
while(ch!=EOF)
(void)fgetc( f);
ch=fgetc(f);
printf("%d",ch);
fclose( f);
}
