#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter your limitation: ";
    cin>>n;
    cout<< "Even jersey numbers: \n";
     for (int i=0; i<=n; i++)
     {
         if(i%2==0)
         cout<< i << "\n";
     }
}
