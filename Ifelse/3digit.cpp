#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:" ;
    cin>>n;
    if(n>99 && n<1000){
        cout<<"given number is 3 digit";
    }
    else{
        cout<<"given number is not 3 digit";
    }
}