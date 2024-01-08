#include<iostream>
using namespace std;

int pow(int n, int power)
{
    if(power==0)
    return 1;

    return n*pow(n,power-1);
}
int main()
{
    int n;
    cout<<"Enter the number whose power is to be calculated:- "<<endl;
    cin>>n;
    cout<<"Enter the power:- "<<endl;
    int power;
    cin>>power;
    cout<<"Required answer is:- "<<pow(n,power);
}