#include <iostream>

using namespace std;

void tOh(int n, char s, char a, char t){
    if(n == 1)
        cout<<n<<" shifts from "<<s<<" to "<<t<<" \n";
    else {
        tOh(n-1,s,t,a);
        cout<<n<<" shifts from "<<s<<" to "<<t<<" \n";
        tOh(n-1,a,s,t);
    }
}

int main()
{
    tOh(3,'s','a', 't');
    return 0;
}
//This code is contributed by Vaishnavi Shah