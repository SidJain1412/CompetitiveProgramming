// Given a number of dates, sort them in such a way that the date that corresponds to the earliest day comes first and the date that corresponds to the latest day comes last.

// Input Format

// First line contains N, the number of dates. 
// Next N lines contain one date each in the following format : 
// DD MM YYYY.
// The date will be three integers separated by a space where the first integer is the day, the second integer is the month and the third is the year.

// Constraints

// 1 <= N <= 100 
// It is guaranteed that the date will be a valid date. 

// Output Format

// Output N lines. Each line must contain one date. The dates must appear in a sorted format.

// Sample Input 0

// 4
// 9 8 1996
// 31 4 1995
// 30 4 1996
// 25 12 1997
// Sample Output 0

// 31 4 1995
// 30 4 1996
// 9 8 1996
// 25 12 1997


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct date date;
struct date
{
    int day;
    int month;
    int year;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j;
    scanf("%d",&n);
    date arr[n],temp;
    for(i=0;i<n;i++)
        scanf("%d %d %d",&arr[i].day,&arr[i].month,&arr[i].year);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j].year > arr[j+1].year)
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else if((arr[j].year == arr[j+1].year) && (arr[j].month > arr[j+1].month))
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else if((arr[j].month == arr[j+1].month) && (arr[j].day > arr[j+1].day))
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d %d",arr[i].day,arr[i].month,arr[i].year);
        printf("\n");
    }
    return 0;
}
