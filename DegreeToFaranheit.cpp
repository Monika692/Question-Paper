#include<iostream>
using namespace std;
int main()
{
    int f[2];
    int c[2];
    for(int i=0;i<2;i++)
    {
        cout<<"enter elements in an array"<<endl;
        cin>>f[i];
    }
    for(int i=0;i<2;i++)
    {

    c[i]= 5*((f[i]-32)/9);
    cout<<"the degree after converting to farahneit is :"<<c[i]<<endl;
    }
}
