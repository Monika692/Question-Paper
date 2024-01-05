/*Dynamic array to store N elements and then remove duplicate elements in an array */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size :";
    cin>>n;
    int *arr=new int(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                flag++;
        }
        if(flag==1)
            cout<<" "<<arr[i]<<endl;
    }

}
