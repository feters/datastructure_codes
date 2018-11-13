#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack
{
char data[7][16];
int tos;
}s;

int preinf(char prefix[]);
main()
{
char prefix[20];

printf("PLEASE ENTER THE PREFIX EXPRESSION:");
scanf("%s",prefix);
int preinf(prefix);
getch();
}

preinf(char prefix[])
{
int length,i,len;
char str1[20];
length=strlen(prefix);
for(i=length;i>=0;i--)
{
switch(prefix[i])
{
case '+':
case '-':
case '*':
case '/':
case '^':
{
str1[0]='(';
str1[1]='\0';
strcat(str1,pop());
len=strlen(str1);
str1[len]=prefix[i];
str1[++len]='\0';
strcat(str1,pop());
len=strlen(str1);
str1[len]=')';
str1[++len]='\0';
push(str1);
break;
}
default:
{
str1[0]=prefix[i];
str1[1]='\0';
push(str1);
}
}
}
printf("\nTHE INFIX EXPRESSION IS:%s",pop());
}

push(char string[])
{
strcpy(s.data[s.tos],string);
s.tos++;
}

pop()
{
s.tos--;
return(s.data[s.tos]);
}
