#include <iostream>
#include<conio.h>
using namespace std;

int decimalToBinary(int n)
{
    if (n <= 0)
        return 0;
    else
    {
        cout << n % 2;
        return decimalToBinary(n / 2);
    }
}

int main()
{
    cout << decimalToBinary(2);
}
