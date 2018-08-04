#include <iostream>
using namespace std;

int main()
{
int n; //User input
int num = 1;
int primeCount = 0; //counts the times it num % i == 0

cout<< "Masukkan batas bilangan prima :";
cin>> n;

//counts the number of primes
for(int j = 1; j <= n; j++)
{
    num++;//num = 2
    primeCount = 0;
//Determines if a number is prime
    for(int i = 1; i <= num; i++)
    {

        if(num % i == 0)
        {
            primeCount++;
        }
    }
        if(primeCount == 2)
        {
            cout<< num << '\n';
        }
}
return 0;
}
