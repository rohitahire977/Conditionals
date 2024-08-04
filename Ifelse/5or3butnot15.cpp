//nested if else
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter an integer";
    cin>>n;
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"not matching condition";
    }
    }
        else{
            cout<<"not matching condition";
        }
}