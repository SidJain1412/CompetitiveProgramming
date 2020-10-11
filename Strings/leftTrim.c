/*
LEFT TRIM
This program eliminates extra spaces from left side of the string.

INPUT FORMAT : one string
OUTPUT FORMAT : one string 
SAMPLE INPUT :           left trim program. 
SAMPLE OUTPUT :(left trim program.)
*/

#include<stdio.h>
#include<string.h>
void leftTrim(char *p)
{
char *q;
q=p;
while(*q==' ')
{
q++;
}
if(q>p) //if there were extra spaces on left, q would have been increased
{
while(*q!='\0')
{
*p=*q;
q++;
p++;
}
*p='\0';
}
}

int main()
{
char a[1000];
printf("Enter a string:");
fgets(a,1000,stdin);
a[strlen(a)-1]='\0';
leftTrim(a);
printf("(%s)",a);
return 0;
}