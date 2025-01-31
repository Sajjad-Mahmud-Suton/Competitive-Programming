#include<iostream>
using namespace std;
int main()
{
    int age,t,price;
    cout << "enter your age: ";
    cin >> age;
    cout << " How many ticket: ";
    cin >> t;

    if(age>=18)
    {
        price= t*200;
        cout << " Total price: "<<price;
    }
    else
    {
        price = (200*t)-(t*50);
        cout << " Total price: "<<price;
    }

}
