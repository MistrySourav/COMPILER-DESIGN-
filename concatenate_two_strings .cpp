#include <iostream>
using namespace std;

int main()
{


    int n,n1;

    cout<<"Please enter first name size"<<endl;
    cin>>n;
    char arr[n];

        cout<<"Please enter your first name alphabet by alphabet"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Please enter last name size"<<endl;
    cin>>n1;
    char arr1[n1];
    cout<<"Please enter your last name alphabet by alphabet"<<endl;

     for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
     }

    string full_name = string(arr, n) + " " + string(arr1, n1);

         cout<<"your name is ="<<full_name<<endl;

}

