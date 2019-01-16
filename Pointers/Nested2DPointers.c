// 2D Array Using Pointer to Pointers


// In the last task we saw how to make a 2D array using an array of pointers.

// If we can make an array using pointers, we can also make this array of pointers using pointers. A pointer to a pointer thus formed is known as a double pointer.

// For example : to create a 2d array of dimensions 5x10 :

// int **arr = (int**) malloc(sizeof(int*) * 5);
// for (i = 0; i < 5; i++) arr[i] = (int*) malloc(sizeof(int) * 10);
// We create an array of pointers by allocating memory equal to 5 pointers to a double pointer and then we allocate memory to each row.

// Note : A double pointer stores the location of a pointer which in turn stores a memory location of some data. To access this data the double pointer has to be dereferenced twice '**'

// For this task, write a program to create an array of strings using pointer of pointers.

// Take as input 5 strings in an array, concatenate all of them and print the resultant string.

// Hint : You can use a char** double pointer to create a 2d array of characters and use it as an array of strings.

// Sample Input 0

// Agumon
// Gabumon
// Gomamon
// Patamon
// Biyomon
// Sample Output 0

// AgumonGabumonGomamonPatamonBiyomon


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char** str_arr;
	char* result; //don't forget to allocate sufficient memory to result string
	int i;
	//your code here
    str_arr = (char**)malloc(sizeof(char*)*5);
    result = (char*)malloc(sizeof(char)*200);
    for(i=0;i<5;i++)
        str_arr[i] = (char*)malloc(sizeof(char)*10);
    for(i=0;i<5;i++)
    {
        gets(str_arr[i]); //,10,stdin);
    }
	for (i = 0; i < 5; i++)
		strcat(result, str_arr[i]);
	puts(result);
	return 0;
}