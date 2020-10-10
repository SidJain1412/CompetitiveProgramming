//Finding the Greatest Common Divisor using C++

#include<iostream>
using namespace std;

int gcd(int a, int b) {
   if (b == 0){
   	return a;
   } 
   return gcd(b, a % b);
}

int main() {
   int a = 92, b = 36;
   cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b) << endl;
   return 0;
}
