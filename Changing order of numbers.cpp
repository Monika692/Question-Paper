#include<iostream>
using namespace std;
int main()
{
   int arr[4];int arr2[4];
   for(int i=0;i<4;i++)
   {
       cout<<"enter the elements of array :"<<endl;
       cin>>arr[i];
   }
   for(int i=0;i<4;i++)
   {
       for(int j=i+1;j<4;j++)
       {
       if(arr[i]<arr[j])
         arr2[i]=arr[i];
         else
            arr2[i]=arr[j];
       }
       cout<<arr2[i]<<" ";
   }
}
