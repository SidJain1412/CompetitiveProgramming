#include <iostream>
using namespace std;
int GameOfDivisors(int n);
int main()
{
  	int t,n;
  	//cout << "Enter no. of test cases:\n";
    cin >> t;
  	while(t--)
  	{
  		//cout << "Enter the value of n:\n";
  		cin >> n;
  		int res=GameOfDivisors(n);
  		if(res==1)
      		cout << "Mike\n";
  		else
      		cout << "Tom\n";
	}
	return 0;
}
int GameOfDivisors(int n)
{
  if (n==2)
    return 1;
  if(n==17)                //17 is winning position as 16 is a losing position
    return 1;
  if(n==16)                //16 is losing as {1,2,4,8,15} are winning positions
    return 0;
  if (n==34)               //34 is losing as {2,17,33} are winning positions
    return 0;
  if (n==289)              //289 is in losing positon as factors of 17*17,i.e.,{1,17 as well as 288} are in a winning position
    return 0;
  int isprime=1;     //All other prime numbers(P) are in losing position since factors are {1,P-1} and P-1 is a composite no.,i.e., winning position
                     //All composite no.s are in a winning position as they can move to a prime divisor which is in losing position
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      isprime=0;
    }
  }
  if(isprime)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}


/*

Numbers:  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
Win/Lose: L W L W L W L W W  W  L  W  L  W  W  L  W  W  L  W  W  W
