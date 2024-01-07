#include<iostream>
using namespace std;
int main()
{
             int n;
             cout<<"enter the size of element in array"<<endl;
             cin>>n;
             int *arr=new int(n);
             for(int i=0;i<n;i++)
                    cin>>arr[i];

            int count=0;
            int c=0;
            for(int i=0;i<n;i++)
            {
                count=0;//to count frequency of element in array
                for(int j=0;j<n;j++)
                {
                    if(arr[i]==arr[j])
                       count++;
                }
                if(count==1)
                    c++;
            }
                if(c>0)
                    cout<<"the distinct elements are "<<c;
                else
                    cout<<"no"<<endl;
            }
