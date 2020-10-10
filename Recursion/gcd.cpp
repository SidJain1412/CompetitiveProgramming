//Finding the Greatest Common Divisor using C++

#include<iostream>
using namespace std;

int gcd(int a, int b) {
   if (a == 0 || b == 0){
   	return 0;
   }
   else if (a == b){
   	return a;
   }
   else if (a > b){
   	return gcd(a-b, b);
   }
   else return gcd(a, b-a);
}

int main() {
   int a = 92, b = 36;
   cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
   return 0;
}
