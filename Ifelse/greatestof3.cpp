#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first number:" ;
    cin>>a;
    cout<<"enter second number:" ;
    cin>>b;
    cout<<"enter third number:" ;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"first number is greatest" ;
        }
    }
    if(c>b){
        if(c>a){
            cout<<"third number is greatest" ;
        }
    }
    else{
        cout<<"second number is greatest" ;
    }
}