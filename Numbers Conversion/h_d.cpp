// Conversion of Hexadecimal to Decimal

#include <bits/stdc++.h>
using namespace std;

int h_d(string s){
    int len = s.size();
    int sum = 0, base = 1;
    for(int i=len-1;i>=0;i--){
        if(s[i] >= '0' && s[i] <= '9'){
            sum += (s[i]-'0') * base;
            base *= 16;
        }else if(s[i] >= 'A' && s[i] <= 'F'){
            sum += (s[i] - 'A' + 10) * base;
            base *= 16;
        }else{
            return 0;
        }
    }
    return sum;
}

int main(){
    string s;
    cin >> s;
    int isValid = h_d(s);
    if(isValid){
        cout << isValid;
    }else{
        cout << "Invalid Hexadecimal Input!!!";
    }
return 0;
}