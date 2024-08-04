#include<iostream>
using namespace std;
int main()
{
    int cp,sp,profit,loss;//cost price selling price
    cout<<"enter the total cost price of item";
    cin>>cp;
    cout<<"enter the selling price of item";
    cin>>sp;
    profit=sp-cp;
    loss=cp-sp;
    if(sp>cp){
        cout<<"seller has made a profit of rupees:"<<profit<<endl;
    }
    if(cp>sp){
        cout<<"seller has made a loss of rupees:"<<loss<<endl;
    }
    
}