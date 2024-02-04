#include <iostream>
using namespace std;

int main()
{


    int x,y,z,n;
    float sum;
    sum=0;

    //int arr[n];
    cout<<"Please enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    float avg=sum/n;
    cout<<"the Avg is :"<<avg<<endl;

}
