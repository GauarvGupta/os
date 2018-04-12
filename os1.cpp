#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,p[50],a[50],b[50];
	cout<<"enter no of processes";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"\n enter the data for"<<p[i]<<"th process \n";
	cout<<"\n enter arrival time for "<<p[i]<<"th process \n";
	cin>>a[i];
	cout<<"\n enter burst time for"<<p[i]<<"th process \n";
	cin>>b[i];
}
for(int i=0;i<n;i++)
{
	cout<<"\n given data is :\n";
	cout<<"\n for "<<p[i]<<"th process arrival time is :"<<a[i]<<"and burst time is :"<<b[i]<<"\n";
}

}
