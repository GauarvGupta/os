#include<iostream>
#include<conio.h>
using namespace std;
main()
{
char name[50],sequence[50];
int arrival_time[50],j=0,burst_time[50],time=0,n;
cout<<endl<<"enter the number of process";
cin>>n;
for(int i=0;i<n;i++)
{
	cout<<endl<<"enter process name(only one char) :";
	cin>>name[i];
	cout<<" arrival time : ";
	cin>>arrival_time[i];
	cout<<" burst time : ";
	cin>>burst_time[i];
}
for(int i=0;i<n;i++)
{
    cout<<endl<<"process name : "<<name[i]<<" arrival time : "<<arrival_time[i]<<" burst time : "<<arrival_time[i];	
}
cout<<"\n time interval = 3 \n";
cout<<"\n sequence \n";
	for(int i=0;i<n;i++)
	{
		if(arrival_time[i]<=time && burst_time[i]>0)
		{   cout<<" ";
			time=time+3;
			burst_time[i]=burst_time[i]-3;
			cout<<name[i];
			sequence[j]=name[i];
			j++;
		}
	}
	
cout<<"\n\n time interval =6\n";
cout<<"\n sequence \n";
	for(int i=0;i<n;i++)
	{
		if(arrival_time[i]<=time && burst_time[i]>0)
		{
			cout<<" ";
			time=time+6;
			burst_time[i]=burst_time[i]-6;
			cout<<name[i];
			sequence[j]=name[i];
			j++;
		}
	}
	cout<<"\n\n rest of the code first come first serve \n";
	cout<<"\n sequence \n";
	for(int i=0;i<n;i++)
	{
		if(arrival_time[i]<=time && burst_time[i]>0)
		{   cout<<" ";
			time=time+burst_time[i];
			burst_time[i]=burst_time[i]-burst_time[i];
			cout<<name[i];
			sequence[j]=name[i];
			j++;
		}
		
	}
	cout<<"\n total time consumed is :"<<time<<"\n";
	cout<<"\nfinal sequence \n";
	cout<<"--------------------------";
	cout<<"\n";
	for(int y=0;y<j;y++)
	{
		cout<<"|"<<sequence[y];
	}
	cout<<"\n \nend of the program";
}
