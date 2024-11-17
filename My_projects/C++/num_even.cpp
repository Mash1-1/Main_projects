#include <iostream>
using namespace std;
int main()
{
    int size, count;
    count = 0;

    cout << "Enter the size of numbers ";
    cin >> size;

    while (size-- > 0)
    {
        int num;
        int tryal = 0;
    a:
        cout << "Enter the number: ";
        cin >> num;
        if (cin.fail() && ++tryal <= 3)
        {
            goto a;
        }
        else
        {
            exit(0);
        }
        if (num % 2 == 0)
        {
            cout << num << " is the " << (count + 1) << " even number" << endl;
            count++;
        }
        if (count == 2)
        {
            break;
        }
    }
}