// Conversion of Decimal to Octal

#include <bits/stdc++.h>
using namespace std;

int d_b(int n){
    int arr[30];
    int i=0;
    while(n){
        arr[i++] = n%8;
        n /= 8;
    }
    for(i=i-1;i>=0;i--){
        cout << arr[i] << "\t";
    }
    
}

int main(){
    int n;
    cin >> n;
    d_b(n);
return 0;
}