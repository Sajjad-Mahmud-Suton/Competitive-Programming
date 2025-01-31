#include<iostream>
using namespace std;
int main()
{
    int p,f;
    cout << "How many pizza:  ";
    cin>> p;

     cout << "How many Friends:  ";
    cin>> f;

    int t;
    t = p*8;
    int ev= t/f;
    int extra = t%f;
    cout << "Everyone : "<< ev;
     cout << "\nExtra : "<< extra;

}
