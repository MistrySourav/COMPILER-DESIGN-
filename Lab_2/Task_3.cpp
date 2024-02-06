#include <iostream>
using namespace std;

int S( string &arr)
{
    int n = arr.length();


    if (arr.find("//") != -1)
    {
        return 1;
    }

    else if (arr.find("/*") != -1 && arr.find("*/") != -1)
    {
        return 2;
    }

    return 0;
}

int main()
 {
    string input;

    cout << "Please enter your input: " << endl;
    getline(cin, input);

    cout << "Input is: " << input << endl;

    int result = S(input);

    if (result == 1)
    {
        cout << "The input is a single-line comment" << endl;
    }
    else if (result == 2)
    {
        cout << "The input is a multi-line comment" << endl;
    }
    else
    {
        cout << "The input is not a comment." << endl;
    }

    return 0;
}
