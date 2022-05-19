// Conversion of Decimal to Hexadecimal

#include <bits/stdc++.h>
using namespace std;

string d_h(int n){
    int lastDigit;
    string ans="";
    while(n){
        lastDigit = n%16;
        if(lastDigit>9 && lastDigit<16){
            char c = lastDigit + 55;
            ans.push_back(c);
            n /= 16;
        }else if(lastDigit >=0 && lastDigit <10){
            ans = ans + to_string(lastDigit);
            n /= 16;
        }else{
            return "Invalid Decimal Input";
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << d_h(n);
return 0;
}