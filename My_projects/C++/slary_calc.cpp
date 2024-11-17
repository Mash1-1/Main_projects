#include <iostream>
using namespace std;

int main()
{
    int num;
    bool prime = true;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 1)
    {
        prime = false;
    }
    for (int i = 2; (i <= num / 2) && (num != 1); i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << "it is  prime number.";
    }
    else
    {
        cout << "it is not prime number.";
    }

    return 0;
}