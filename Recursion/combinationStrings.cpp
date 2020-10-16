//Given an input string of numbers, find all combinations of numbers that can be formed using digits in the same order.


//Sample input:
// '1214'
// Output:
// 1214
//121 4
//12 14
//12 1 4
//1 214
//1 21 4
//1 2 14
//1 2 1 4


//Sample Input:
//'123'
//Output:
//123
//12 3
//1 23
//1 2 3





#include<iostream>
#include<string>
using namespace std;

void comb(string input,int i,string output)
{
	if(i==input.length())
	{
		cout<<output<<"\n";
		return;
	}
	output+=input[i];
	comb(input,i+1,output);
	if(i+1!=input.length())
	{
		output+=' ';
		comb(input,i+1,output);
	}
}

int main()
{
	string input,output;
	cout<<"Enter the string"<<" ";
	cin>>input;
	cout<<"\n";
	output="";
	int len = 0;
	comb(input,0,output);
}