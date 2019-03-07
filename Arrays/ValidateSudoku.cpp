// Validate Sudoku

// You will be given a completely filled sudoku. You have to verify whether the given sudoku's are correctly filled or not.

// Rules of sudoku: 1.Each of the nine blocks has to contain all the numbers 1-9 within its squares. 2.Each number can only appear once in a row, column or box.

// Input Format

// First line contains "T" which denotes no.of test cases

// Followed by T number of sudoku's and sudoku is a 9x9 matrix which contains all the elements ranging in between 1 to 9

// Constraints

// 1<=T<=10

// Output Format

// If the sudoku is valid print as "Valid" else "inValid"

// print every ans in new line

// Sample Input 0

// 1
// 4 3 5 2 6 9 7 8 1
// 6 8 2 5 7 1 4 9 3
// 1 9 7 8 3 4 5 6 2
// 8 2 6 1 9 5 3 4 7
// 3 7 4 6 8 2 9 1 5
// 9 5 1 7 4 3 6 2 8
// 5 1 9 3 2 6 8 7 4
// 2 4 8 9 5 7 1 3 6
// 7 6 3 4 1 8 2 5 9
// Sample Output 0

// Valid


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[9][9],t,sum=0,flag=0;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        for(int j=0;j<9;++j)
            for(int k=0;k<9;++k)
                cin>>a[j][k];
            flag=0;
            for(int j=0;j<9;++j)
            {
                sum=0;
                for(int k=0;k<9;++k)
                    sum=sum+a[j][k];
                if(sum!=45)
                {
                    flag=1;
                    break;
                }
            }
            for(int j=0;j<9;++j)
            {
                sum=0;
                for(int k=0;k<9;++k)
                    sum=sum+a[k][j];
                if(sum!=45)
                {
                    flag=1;
                    break;
                }
            }
            for(int n=0;n<9;n=n+3)
            {
                for(int m=0;m<9;m=m+3)
                {
                    sum=0;
                    for(int x=n;x<n+3;++x)
                    {
                        for(int y=m;y<m+3;++y)
                            sum=sum+a[x][y];
                    }
                    if(sum!=45)
                    {
                        flag=1;
                        break;
                    }
                }
            }

            if(flag==0)
                cout<<"Valid";
            else
                cout<<"inValid";
            cout<<endl;

        }
        return 0;
    }