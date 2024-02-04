#include <iostream>
using namespace std;

int main()
{
    int x,y,n,max,min;


    cout<<"Please enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please enter the elements"<<endl;


        for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
      min=arr[0];
     max=arr[0];
    for(int i=0;i<n;i++)
    {

        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"maximum is "<<max<<endl;
    cout<<"minimum is "<<min<<endl;

}
