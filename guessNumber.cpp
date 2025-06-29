#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    int guessNumber=rand()%100+1;
    cout<<"Guess a number between 1 and 100"<<endl;
    bool flag=true;
    while(flag){
        int n;
        cin>>n;
        if(n<0 || n>100) cout<<"Enter a valid number"<<endl;
        if(n==guessNumber) {
            cout<<"Right number"<<endl;
            flag=false;
        }
        else if(n>guessNumber){
            cout<<"Number too big"<<endl;
        }
        else{
            cout<<"Number too small"<<endl;
        }
    }


    return 0;
}
