#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
    int i,key,j;
    for(i=1;i<n;++i)
    {
        key=arr[i];
        j=i-1;
    while(key>arr[j] && j>=0)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i)
    {
        cin>>arr[i];
    }
    insertion(arr,size);
    display(arr,size);
}