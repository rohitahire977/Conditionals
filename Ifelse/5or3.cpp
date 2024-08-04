//input a number and tell if it is divisible by 5 or 3.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:" ;
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"the number is divible by 5 or 3";
    }
    else{
        cout<<"the number is not divible by 5 or 3";

    }
}