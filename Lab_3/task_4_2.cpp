#include <iostream>
#include <string>
using namespace std;

bool isValid(string arr)
 {
    int arr1 = arr.length();

    for (int i = 0; i < arr1; i++)
        {

            if  (arr [i] == '_' || (arr[i] >= 'A' &&arr[i] <= 'Z') || (arr[i] >= 'a' &&arr[i] <= 'z'))
             {
                cout << "Identifier:  ";

                for (int j = i ; j < arr1; j++)
                    {
                    if (arr[j] == '_' || (arr[j] >= '0' && arr[j] <= '9') || (arr[j] >= 'A' && arr[j] <= 'Z') || (arr[j] >= 'a' && arr[j] <= 'z'))
                     {
                        cout << arr[j] ;
                      }
                else
                    {
                        cout <<"   Identifier is invalid " <<endl;
                        cout <<"   Special character found" <<endl;

                        return false;
                    }

                }
                cout << endl;
                return true;
            }
            else if(arr[i] >= '1' &&arr[i] <= '9')
                {
                cout << "Invalid identifier." << endl;
                cout << "Number found" << endl;
                }

                else if( arr[i]== '@' || arr[i]== '!' ||arr[i]== '#' ||arr[i]== '%' ||
                       arr[i]== '*' ||arr[i]== '+' ||arr[i]== '/' ||arr[i]== '_'

                         )
                {
                cout << "Invalid identifier." << endl;
                cout << "Special character found" << endl;
                return false;
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
       // cout << "Valid Identifier" << endl;
        }
    else
       {
        cout << "0" << endl;
        //cout << "Invalid Identifier" << endl;
       }

    return 0;
}


