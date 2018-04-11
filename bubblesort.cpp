#include<iostream>
using namespace std;
main()
{
int n, i, arr[50], j, temp;
cout<<"Enter total number of elements :";
cin>>n;
cout<<"Enter "<<n<<" numbers :";
for(i=0; i<n; i++)
{
cin>>arr[i];
}
cout<<"Sorted arrays are\n";
for(i=0; i<(n-1); i++)
{
for(j=0; j<(n-i-1); j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0; i<n; i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
