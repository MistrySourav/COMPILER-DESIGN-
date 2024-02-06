#include <iostream>
using namespace std;

bool Check(char op)
{
    string o = "+-*/%=";

    for (char c : o)
    {
        if (op == c)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string input;

    cout << "Please enter an input string: ";
    getline(cin, input);


    bool foundOperator = false;

    for (int i = 0; i < input.length(); i++)
    {
        if (Check(input[i]))
        {


            cout << "operator : " << input[i] << endl;
            foundOperator = true;
        }
    }

    if (!foundOperator)
    {
        cout << "No operators found in the input." << endl;
    }

    return 0;
}
