// You are working for a company. Define a struct as follows :

// struct Employee{
// 	char name[55];
// 	int salary;
// }
// Given data of n employees, you are to use any sorting algorithm to sort them according to their salary in ascending order, and print them in the format "name salary".

// NOTE : Participants using Java shall use classes instead of structs.

// It is guaranteed that all names are distinct. If two people have the same salary, the one with lexicographically smaller name must come before the other.

// NOTE : you are not allowed to make any global variables. You must create another function to do the sorting and pass your employee array as a pointer to that function to sort it.

// Input Format

// First line contains a number N, number of employees.
// Next N lines contain one string and one integer each.

// Constraints

// 1 <= name of employee <= 50
// 1 <= N <= 1000
// 1 <= salary <= 1000

// Output Format

// Print the data of all employees in the format "name salary" with details of one employee on one line.

// Sample Input 0

// 5
// Abhinav 100
// Nischay 50
// Sarthak 25
// Abhiram 150
// Praneeth 200
// Sample Output 0

// Sarthak 25
// Nischay 50
// Abhinav 100
// Abhiram 150
// Praneeth 200


#include <bits/stdc++.h>
using namespace std;

struct salary 
{
  char  a[50];
    int marks;
};
bool compare(salary d, salary b)
{
    if(d.marks == b.marks)
    {
        bool cmp = strcmp(d.a, b.a) >= 0 ? false : true;
        return cmp;
        
    }
    return (d.marks < b.marks);
}
int main() {   
    int n;
    cin>>n;
    salary names[n];
    for(int i=0; i<n; i++)
    {
        cin>>names[i].a;
        cin>>names[i].marks;
    }
    
    sort(names, names + n, compare);
    for(int i=0; i<n; i++)
    {
        cout<<names[i].a<<" "<<names[i].marks<<"\n";
    }    
    return 0;
}
