#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int a;
    cout<<"ENTER NUMBER THAT'S YOU WANT TO  FIND THE FIBONACCI SERIES "<<endl;
    cin>>a;
    for(int i =0; i<a; i++)
    {
        cout<<" "<<fib(i);
    }
}
int fib(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
