/*
RIGHT TRIM
This program eliminates extra spaces from right side of the string.

INPUT FORMAT : one string
OUTPUT FORMAT : one string 
SAMPLE INPUT : right trim program              
SAMPLE OUTPUT :(right trim program) round brackets are added in the output so that you can see extra spaces got eliminated from right side of the string. 
*/

#include<stdio.h>
#include<string.h>
void rightTrim(char *p)
{
char *q;
q=p;
while(*q!='\0')
{
q++;
}
q--; //because q was pointing '\0'
while(q>=p && *q==' ') q--; 
*(q+1)='\0';
}

int main()
{
char a[1000];
printf("Enter a string:");
fgets(a,1000,stdin);
a[strlen(a)-1]='\0';
rightTrim(a);
printf("(%s)",a);
return 0;
}