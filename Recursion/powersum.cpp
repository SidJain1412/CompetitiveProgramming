#include<bits/stdc++.h>
using namespace std;

int ps(int x,int n,int index)
{
	//int value = (x - pow(index, n));
	if(x<0)
    	return 0;
	else if(x==0)
    	return 1;
    
    else 
    	cout<<x - pow(index, n)<<endl;
    	return ps(x,n,index+1) + ps(int(x - pow(index, n)),n,index+1);
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