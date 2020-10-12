problem name :count word in the string
//input formate string
//output formate int
##sample input
very good
##sample ouput
2
------------------------
#include<stdio.h>
#include<string.h>
int wordCount(char*p)
{
char *q;
int wc=0;
q=p;
while(*q==' ')q++;
while(*q)
{
if(*q==' ')
{
wc++;
while(*q==' '&&*q)q++;
}
else q++;
}
if(q>p&&*(q-1)==' ')wc--;
if(q==p)wc--;
wc++;
return wc;
}
int main()
{
char a[52];
int x;
printf("enter the string:");
fgets(a,52,stdin);
a[strlen(a)-1]='\0';
fflush(stdin);
x=wordCount(a);
printf("total number of word in string is %d\n",x);
return 0;
}