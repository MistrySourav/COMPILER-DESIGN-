#include <iostream>
using namespace std;
int main()
{
   int i,f=1,n;
  cout<<"Enter any number: ";
 cin>>n;
  for(i=1;i<=n;i++)
    {
      f=f*i;
  }
  cout<<"The factorial of " <<n<<" is = "<<f<<endl;
  return 0;
}

/*if(n=>1)
{
for(i=1;i<=n;i++)
    {
      f=f*i;
  }
}
if(n<=-1)
{
for(i=1;i<=n;i++)
    {
      f=-f*i;
  }
}
/*
