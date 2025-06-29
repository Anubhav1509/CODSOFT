#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int a,b;
    cout << "Enter first number: ";
    cin>>a;
    cout<<"Enter the operation (+, -, *, /): ";
    char op;
    cin>>op;   
    cout << "Enter second number: "; 
    cin>>b;
    cout << "Result: ";
    switch(op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << a / b << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation" << endl;
    }



    return 0;
}
