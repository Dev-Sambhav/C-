// Conversion of Binary to Decimal

#include <bits/stdc++.h>
using namespace std;

int b_d(int n){
    int base = 1,digits=0,lastD;
    while(n){
        lastD = n % 10;
        if(lastD > 1){
            return 0;
        }
        digits = digits + lastD * base;
        base *= 2;
        n /= 10;
    }
    return digits;
}

int main(){
    int n;
    cin >> n;
    cout << b_d(n);
return 0;
}