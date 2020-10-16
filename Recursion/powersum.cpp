//Find the number of ways that a given integer,x, can be expressed as the sum of the nth powers of unique, natural numbers.
//For example, if x=13 and n=2, we have to find all combinations of unique squares adding up to 13. The only solution is 2^2+3^2.
//Problem link:- https://www.hackerrank.com/challenges/the-power-sum/problem


// Sample Input:
// x=10, n=2
// Output:
// 1 (1^2+3^2)

// Sample Input:
// x=100, n=3
// Output
// 1 (1^3+2^3+3^3+4^3)






#include<bits/stdc++.h>
using namespace std;

int ps(int x,int n,int index)
{
	//Return value of "pow" function is float and subtracting a float from an integer will not guarantee correct value. 
	//That is why the value after subtracting is stored inside an int variable. 
	//If you write '(x - pow(index, n))' in place of 'value' while calling the function, it will give you an error
	//because subtract will start getting float values.
	int value = (x - pow(index, n));
	if(value<0)
    	return 0;
	else if(value==0)
    	return 1;
    //At each value, you have two options. 1. Choose that value 2. Skip that value.
    //If you choose it then call the function after subtracting pow(index,n) from x
    //if you don't choose it, then call the funtion with same x value but incrementing x.
    else 
    	return ps(x,n,index+1) + ps(value,n,index+1);
}

int main()
{
	int x,n;
	cin>>x;
	cin>>n;
	int c=ps(x,n,1);
	cout<<c<<"\n";
	return 0;
}
