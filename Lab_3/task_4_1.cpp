#include <iostream>
using namespace std;

bool isValid(string input)
{
    int input1 = input.length();

    if (input1 == 0)

        {
            cout << "Identifier is invalid. Empty string." << endl;
            return false;
        }

    if (!(input[0] == '_' || (input[0] >= 'A' && input[0] <= 'Z') || (input[0] >= 'a' && input[0] <= 'z')))

        {
            cout << "Identifier is invalid. " << endl;
            return false;
        }

    for (int i = 1; i < input1; i++)
        {
            if (!(input[i] == '_' || (input[i] >= '0' && input[i] <= '9') || (input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) )
            {


                    if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'|| input[i] == '%')
                        {
                            cout << "Identifier is invalid. arithmetic character found. " << endl;
                            //return false;
                        }
                         else if( input[i] == '!' || input[i] == '@' || input[i] == '#'  ||input[i] == '&' || input[i] == '/' || input[i] == '|' || input[i] == '?')
                        {
                            cout << "Identifier is invalid. Special character found. " << endl;
                            //return false;
                        }
                        return false;
                }
        }

    cout << "Valid Identifier: " << input << endl;
    return true;
}


int main() {
    string input;

    cout << "Enter your input string : ";
    getline(cin, input);

    if (isValid(input))

        {
            cout << "1" << endl;
        }
    else
        {

            cout << "0" << endl;

        }

    return 0;
}
