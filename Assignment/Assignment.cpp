#include <iostream>
#include <fstream>

using namespace std;
bool isValid(string input) {
    int S = 32;  // SPACE
    int SL = 47;  // Slash
    int C = 58;   // colon
    int SN = 64;  // at sign
    int xS = 91;
    int yS = 94;
    int h = 96;
    int sf = 123;
    int ss = 126;

    int input1 = input.length();

    if (input1 == 0)
        {
        cout << "Identifier is invalid. Empty string." << endl;
        return false;
        }

    if (!(input[0] == '_' || (input[0] >= 'A' && input[0] <= 'Z') || (input[0] >= 'a' && input[0] <= 'z')))
        {
            cout << "Identifier is invalid. " << endl;
            if (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/' || input[0] == '%')
                    {
                        cout << "  Arithmetic character found. " << endl;
                    }
            else if (input[0] == '!' || input[0] == '@' || input[0] == '#' || input[0] == '&' || input[0] == '/' || input[0] == '|' || input[0] == '?')
                    {
                        cout << " Special character found. " << endl;
                    }
            else if(input[0] >= '0' && input[0] <= '9')
                    {
                        cout << " Number   found. " << endl;
                    }

            return false;
        }
    else
        {
            for (int i = 1; i < input1; i++) {
            if (!(input[i] == '_' || (input[i] >= '0' && input[i] <= '9') || (input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')))
                {
                    if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '%')
                        {
                            cout << "Identifier is invalid. Arithmetic character found. " << endl;
                        }
                    else if (input[i] == '!' || input[i] == '@' || input[i] == '#' || input[i] == '&' || input[i] == '/' || input[i] == '|' || input[i] == '?')
                        {
                            cout << "Identifier is invalid. Special character found. " << endl;
                        }
                    return false;
                }
        }
    }

    for (int i = 0; i < input.size(); ++i)
        {
            if ((input[i] >= S && input[i] <= SL) || (input[i] >= C && input[i] <= SN) || (input[i] >= xS && input[i] <= yS)
                || (input[i] == h) || (input[i] >= sf && input[i] <= ss))
                {
                    cout << "Symbolic value cannot exist at Index : " << i << " -> " << input[i] << '\n';
                    cout << '\n';
                    return false;
                }
        }


    return true;
}

bool isKeyword(string input)
{
    ifstream file("program.txt");

    if (!file.is_open())
        {
            cout << "Error opening file" << endl;
            return false;
        }

    string line;
    bool found = false;

    while (getline(file, line)) {
        if (line.find(input) <line.length()) {
            found = true;
            break;
        }
    }

    file.close();

    return found;
}

int main() {
    string input;

    cout << "Enter your input string: ";
      getline(cin >> std::ws, input);
    if (isValid(input) )
        {
            if(isKeyword(input))
            {


             cout << "Input found in the file." << endl;
             cout << "Invalid.Variable cannot be a keyword" << endl;
            cout << "0" << endl;
            }
            else
            {
            cout << "Input not found in the file." << endl;
            cout << "valid ." << endl;
            cout << "1" << endl;
            }
        }
    else
        {
           cout<<"invalid"<<endl;
        }

       return 0;
    }





