
#include <iostream>

using namespace std;

int reverse(int n){
    int revNum = 0;
    while(n>0){
        int rem = n % 10;
        revNum = revNum * 10 + rem;
        n = n /10;
    }
    return revNum;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = reverse(n);
    cout<<"Reverse: "<<rev;
    return 0;
}
