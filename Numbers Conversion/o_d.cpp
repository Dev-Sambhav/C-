// Conversion of Octal to Decimal

#include <bits/stdc++.h>
using namespace std;

int o_d(int n){
    int base = 1,digits=0;
    while(n){
        digits = digits + (n%10) * base;
        base *= 8;
        n /= 10;
    }
    return digits;
}

int main(){
    int n;
    cin >> n;
    cout << o_d(n);
return 0;
}