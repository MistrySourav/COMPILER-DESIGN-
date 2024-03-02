#include <iostream>
#include <string>
using namespace std;

bool isValid(string arr)
 {
    int arr1 = arr.length();

    for (int i = 0; i < arr1; i++)
        {
        if (arr[i] == ' ')
         {
            if (arr[i + 1] == '_' || (arr[i + 1] >= 'A' && arr[i + 1] <= 'Z') || (arr[i + 1] >= 'a' && arr[i + 1] <= 'z'))
             {
                cout << "Identifier: ";

                for (int j = i + 1; j < arr1; j++)
                    {
                    if (arr[j] == '_' || (arr[j] >= '0' && arr[j] <= '9') || (arr[j] >= 'A' && arr[j] <= 'Z') || (arr[j] >= 'a' && arr[j] <= 'z'))
                     {
                        cout << arr[j];
                     }
                else
                    {
                        cout << endl;
                        return false;
                    }
                }
                cout << endl;
                return true;
            }
            else
                {
                cout << "Invalid identifier." << endl;
                return false;
                }
        }
    }


    }




int main() {
    string arr;

    cout << "Enter your input string: ";
    getline(cin, arr);

    if (isValid(arr))
        {
        cout << "1" << endl;
        cout << "Valid Identifier" << endl;
        }
    else
       {
        cout << "0" << endl;
        cout << "Invalid Identifier" << endl;
       }

    return 0;
}


