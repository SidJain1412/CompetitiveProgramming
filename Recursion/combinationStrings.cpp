//Given an input string of numbers, find all combinations of numbers that can be formed using digits in the same order.
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
	output="";
	int len = 0;
	comb(input,0,output);
}