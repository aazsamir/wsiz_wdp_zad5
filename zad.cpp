#include <iostream>

using namespace std;

// recursion function to convert decimal number to binary
int recursionDecimalToBinary(int decimal)
{
    if (decimal == 0)
    {
        return 0;
    }
    else
    {
        return (decimal % 2 + 10 * recursionDecimalToBinary(decimal / 2));
    }
}

int gdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gdc(b, a % b);
    }
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

float findN(float n)
{
    if(n==1){
        return 0;
    }
    if(n==2){
        return 0.5;
    }
    if(n>2){
        return -1 * findN(n-1) * findN(n-2);
    }
}

int main()
{
    //zad 1
    cout << "Zad 1" << endl;
    cout << recursionDecimalToBinary(23) << endl;

    //zad 2
    cout << "Zad 2" << endl;
    cout << gdc(24, 18) << endl;

    //zad 3
    cout << "Zad 3" << endl;
    cout << fibonacci(10) << endl;

    //zad 4
    cout << "Zad 4" << endl;
    cout << factorial(5) << endl;

    //zad 5
    cout << "Zad 5" << endl;
    cout << findN(12) << endl;
    return 0;
}