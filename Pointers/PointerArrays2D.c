// 2D Array Using Pointers

// So far we saw how to use pointers to declare an array, but can we use pointers to declare a 2D array? The answer is yes.

// Recall that by allocating more memory to a pointer we created a linear array.

// What would happen if we created an array of pointers and allocated linear memory to each pointer in the array?

// int *arr[10];
// for (i = 0; i < 10; i++) arr[i] = (int*) malloc(sizeof(int) * 10);
// The above code would result in the creation of a 2D array of dimensions 10x10 since each pointer points to a row of size 10 and there are 10 such pointers.

// Similarly, to create an NxM matrix, we use :

// int *arr[N];
// for (i = 0; i < N; i++) arr[i] = (int*) malloc(sizeof(int) * M);
// To complete this task, write a program to take as input a square matrix of size NxN and print yes if the matrix is a diagonal matrix and no otherwise.

// A diagonal matrix is one all of whose elements except that lie on the diagonals are zero.

// Sample Input 0

// 3
// 1 0 1
// 0 2 0
// 1 0 1
// Sample Output 0

// yes
// Sample Input 1

// 3
// -1 0 1
// 0 2 0
// 1 0 1
// Sample Output 1

// yes


#include<stdio.h>
#include<string.h>
#include<stdlib.h> //this library contains the function malloc.
int main()
{
    int i, j, N, flag=1;
    scanf("%d", &N);
    int *matrix[N];
    for (i = 0; i < N; i++) matrix[i] = (int*) malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            scanf("%d", &matrix[i][j]);
    }
    //your code here
    for(i=0;i<N;i++)
    {
        // flag=1;
        for(j=0;j<N;j++)
        {
            if((i!=j) && (i+j!=N-1))
            {
                // printf("checking if %d == 0 \n",matrix[i][j]);
                if(matrix[i][j]!=0)
                {
                    // printf("nonzero element is %d \n",matrix[i][j]);
                    printf("no");
                    return 0;
                }
            }
        }
    }
    printf("yes");
    return 0;
}