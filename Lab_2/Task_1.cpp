#include <iostream>
using namespace std;

int main()
{
    cout<<"Please Give Input :"<<endl;
    string arr;
    cin >> arr;

    bool input = true;

    for (char ch : arr)
    {
        if (!(ch >= '0' && ch <= '9' || ch == '.'))
        {
            input = false;
            break;
        }
    }

    if (input)
    {
        cout << "Numeric Constant" << endl;
    }
    else
    {
        cout << "Not Numeric Constant" << endl;
    }

    return 0;
}
