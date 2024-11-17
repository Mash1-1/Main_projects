#include <iostream>
using namespace std;

int main()
{
    int continue_;
    continue_ = 1;
    while (continue_ == 1)
    {
        int operand1, operand2;
        float result;
        string operation;

        cout << "Enter operand 1 : ";
        cin >> operand1;

        cout << "Enter operator : ";
        cin >> operation;

        cout << "Enter operand 2 : ";
        cin >> operand2;

        if (operation == "+")
        {
            result = operand1 + operand2;
        }
        else if (operation == "-")
        {
            result = operand1 - operand2;
        }
        else if (operation == "*")
        {
            result = operand1 * operand2;
        }
        else if (operation == "/")
        {
            float operandA, operandB;
            operandA = operand1;
            operandB = operand2;
            result = operandA / operandB;
        }
        else if (operation == "%")
        {
            result = operand1 % operand2;
        }
        else
        {
            cout << endl
                 << "Please enter a valid operator! ";
            exit(0);
        }
        cout << endl
             << "Result : "
             << result << endl;
        cout << "Do you want to continue? " << endl
             << "Enter: continue(1) or stop(0)." << endl;
        cin >> continue_;
    }
}