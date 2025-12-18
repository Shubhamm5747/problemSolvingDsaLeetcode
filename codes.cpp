#include<bits/stc++.h>
using namespace std;

//reverse a Number 
int main()
{
    int n; 
    cin >> n;
    int revNum = 0;

    while(n>0){
        int ld = n%10;
        n = n/10;
        revNum = (revNum*10) + ld;
    }

    cout << revNum;
}