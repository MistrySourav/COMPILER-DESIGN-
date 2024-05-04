
#include<iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<vector>

using namespace std;

///checking correct variable
bool isValid(string input)
{

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
        return false;
    }

    if (!(input[0] == '_' || (input[0] >= 'A' && input[0] <= 'Z') || (input[0] >= 'a' && input[0] <= 'z')))
    {
        if (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/' || input[0] == '%')
        {

            return false;
        }
        else if (input[0] == '!' || input[0] == '@' || input[0] == '#' || input[0] == '&' || input[0] == '/' || input[0] == '|' || input[0] == '?')
        {

            return false;
        }
        else if (input[0] >= '0' && input[0] <= '9')
        {
            return false;
        }
    }
    else
    {
        for (int i = 1; i < input1; i++)
        {
            if (!(input[i] == '_' || (input[i] >= '0' && input[i] <= '9') || (input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')))
            {
                if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '%')
                {
                    return false;
                }
                else if (input[i] == '!' || input[i] == '@' || input[i] == '#' || input[i] == '&' || input[i] == '/' || input[i] == '|' || input[i] == '?')
                {


                    return false;
                }
            }
        }
    }

    for (int i = 0; i < input.size(); ++i)
    {
        if ((input[i] >= S && input[i] <= SL) || (input[i] >= C && input[i] <= SN) || (input[i] >= xS && input[i] <= yS) ||
            (input[i] == h) || (input[i] >= sf && input[i] <= ss))
        {
            return false;
        }
    }

    return true;
}
/// checking incorrect variable

bool isNValid(string input)

{


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
         cout <<  "Empty input" << endl;
        return false;
    }

    if (!(input[0] == '_' || (input[0] >= 'A' && input[0] <= 'Z') || (input[0] >= 'a' && input[0] <= 'z')))
    {
        if (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/' || input[0] == '%')
        {
             cout << "Word starts with a mathematical operator : " << input << endl;
            return false;
        }
        else if (input[0] == '!' || input[0] == '@' || input[0] == '#' || input[0] == '&' || input[0] == '/' || input[0] == '|' || input[0] == '?')
        {
             cout << "Word starts with a special character : " << input << endl;
            return false;
        }
        else if (input[0] >= '0' && input[0] <= '9')
        {
             cout << "Word starts with a digit : " << input << endl;
            return false;
        }
    }
    else
    {
        for (int i = 1; i < input1; i++)
        {
            if (!(input[i] == '_' || (input[i] >= '0' && input[i] <= '9') || (input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')))
            {
                if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '%')
                {
                     cout << "Word contains a mathematical operator in 2nd letter : " << input << endl;
                    return false;
                }
                else if (input[i] == '!' || input[i] == '@' || input[i] == '#' || input[i] == '&' || input[i] == '/' || input[i] == '|' || input[i] == '?')
                {
                     cout << "Word contains a special character   in 2nd letter: " << input << endl;
                }
            }
        }
    }

    for (int i = 0; i < input.size(); ++i)
    {
        if ((input[i] >= S && input[i] <= SL) || (input[i] >= C && input[i] <= SN) || (input[i] >= xS && input[i] <= yS) ||
            (input[i] == h) || (input[i] >= sf && input[i] <= ss))
        {
             cout << "Word contains invalid characters" << endl;
            return false;
        }
    }

    return true;
}

///is keyword

bool isKeyword(string input)
{
    ifstream file("Keyword.txt");
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return false;
    }

    string keyword;
    bool found = false;
    while (file >> keyword)
    {
        if (keyword == input)
        {
            found = true;
            break;
        }
    }

    file.close();
    return found;
}


///is punctuation
bool ispunctuation(string input)
{
    ifstream file("punctuation.txt");
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return false;
    }

    string line;
    do
    {
        if (line.find(input) < line.length())
        {
            file.close();
            return true;
        }
    } while (getline(file, line));

    file.close();
    return false;
}

/// declare namespace
bool isUsing(string input)
{
    ifstream file("namespace.txt");
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return false;
    }

    string line;
    do
    {
        if (line.find(input) < line.length())
        {
            file.close();
            return true;
        }
    } while (getline(file, line));

    file.close();
    return false;
}
///  Header
bool isHeader(string input)
{
    ifstream file("Header.txt");
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return false;
    }

    string line;
    do
    {
        if (line.find(input) < line.length())
        {
            file.close();
            return true;
        }
    } while (getline(file, line));

    file.close();
    return false;
}
///operator
bool isOperator(string input)
{
    ifstream file("operator.txt");
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return false;
    }

    string line;
    do
    {
        if (line.find(input) < line.length())
        {
            file.close();
            return true;
        }
    } while (getline(file, line));

    file.close();
    return false;
}


///built-in function
bool isBuilt(string input)
{
    ifstream file("built-in.txt");
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return false;
    }

    string line;
    while (getline(file, line))
    {
        if (line.find(input) < line.length())
        {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}


///constant
bool isConstant(string input)
{

     if (all_of(input.begin(), input.end(), ::isdigit)) {
        return true;
    }

     if (input.size() >= 2 && input.front() == '"' && input.back() == '"') {
        return true;
    }

     if (input.size() == 3 && input.front() == '\'' && input.back() == '\'') {
        return true;
    }

    return false;
}
/// Comment

 bool isCommented(string word)
 {
    return word.find("//") == 0 || (word.find("/*") != string::npos && word.find("*/") != string::npos && word.find("/*") < word.find("*/"));
 }
int main()
{
    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    string line;
    int lineNumber = 1;
    int id = 1;

    while (getline(inputFile, line))
        {
        istringstream iss(line);
        string word;
        vector<string> results;

        while (iss >> word)
        {
            if (isKeyword(word))
            {
                results.push_back("Keyword: " + word);
                cout << "id" << id << ": " << word << endl;
                id++;
            }
            else if (ispunctuation(word))
            {
                results.push_back("Punctuation: " + word);
                cout << "id" << id << ": " << word << endl;
                id++;
            }
            else if (isOperator(word))
            {
                results.push_back("Operator: " + word);
                cout << "id" << id << ": " << word << endl;
                id++;
            }
            else if (isBuilt(word))
            {
                results.push_back("Built-in function: " + word);
                cout << "id" << id << ": " << word << endl;
                id++;
            }
             else if (isCommented(word))
            {
                results.push_back("Commented: " + word);
                cout << "id" << id << ": " << word << endl;
                id++;
            }
            else if (isHeader(word))
            {
                results.push_back("Header file: " + word);
                cout << "id" << id << ": " << word << endl;
                id++;
            }
            else if (isUsing(word))
            {
                results.push_back("Namespace declaration: " + word);
                cout << "id" << id << ": " << word << endl;
                id++;
            }
            else if (isConstant(word))
            {
                results.push_back("Constant: " + word);
                cout << "id" << id << ": " << word << endl;
                id++;
            }
             else if (isValid(word))
            {
                results.push_back("Variable: " + word);
                cout << "id" << id << ": " << word << endl; // Print ID for valid words
                id++;
            }
            else if (isNValid(word))
            {
                results.push_back("not a variable: " + word);
            }
            else
            {
                results.push_back("Invalid token: " + word);
            }
            cout<<endl;
        }

        cout << "Line " << lineNumber << ": ";

        for (string result : results)
            {
            cout << result << ", ";
        }
        cout << endl;

        lineNumber++;
    }

    inputFile.close();

    return 0;
}
