#include<iostream>
using namespace std;
int main()
{
    long int n;
cin>>n;
long int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
long int sum=arr[n-1],max=arr[n-1];
for(int j=n-2;j>=0;j--)
{
    if(arr[j]>max)
    {
        max=arr[j];
        sum=sum+arr[j];
    }
}
cout<<sum;
}
