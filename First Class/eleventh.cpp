#include<iostream>
using namespace std;
int main()
{
    int day,i,sum=0;
    cout << "Enter your days: ";
    cin >> day;

    for(i=0; i<=day; i++)
    {
        if(i%2 != 0)
        {
            sum = sum + i;
        }
    }

    cout << "Total coins: " << sum;
}
