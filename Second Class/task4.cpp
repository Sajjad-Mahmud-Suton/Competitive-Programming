#include<iostream>
using namespace std;
int main()
{
   int num,i,sum=0;

   cin >> num;
   for(i=1; i<=num; i++)
   {
       if(i%2 == 0)
       {
           sum = sum+i;
       }
   }
   cout << sum;

}

