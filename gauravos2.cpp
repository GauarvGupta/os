#include<iostream>
#include<conio.h>
using namespace std;
main()
{
char name[4]={'a','b','c','d'},sequence[15];
int arrival_time[4]={0,2,4,13},j=0;
int burst_time[4]={18,23,13,10},time=0;
cout<<"\n process 1 - a - arraival time : 0  - burst time : 18\n process 2 - b - arraival time : 2  - burst time : 23 \n process 3 - c - arraival time : 4  - burst time : 13\n process 3 - d - arraival time : 13 - burst time : 10\n";


cout<<"\n time interval = 3 \n";
cout<<"\n sequence \n";
	for(int i=0;i<4;i++)
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
	for(int i=0;i<4;i++)
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
	for(int i=0;i<4;i++)
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
