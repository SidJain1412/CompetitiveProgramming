/*
ALL TRIM
This program eliminates all the extra spaces from the string.

INPUT FORMAT : one string
OUTPUT FORMAT : one string 
SAMPLE INPUT :    all      trim program    .    
SAMPLE OUTPUT :(all trim program.)
*/

#include<stdio.h>
#include<string.h>
void allTrim(char *p)
{
char *m,*j;
j=p;
m=p;
while(*m==' ')
{
m++;
}  //eliminates left spaces
while(*m!='\0')
{
   while(*m!='\0' && *m!=' ') //copy words
     {
     *j=*m;
      j++;
      m++;
     }
  if(*m=='\0') break;
  *j=' ';
  j++;
  while(*m==' ') m++;
}
if(j>p)
{
if(*(j-1)==' ') j--;
} 
*j='\0';
}

int main()
{
char a[2000];
printf("Enter a string:");
fgets(a,2000,stdin);
a[strlen(a)-1]='\0';
allTrim(a);
printf("(%s)",a);
return 0;
}