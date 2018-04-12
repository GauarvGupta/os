#include<iostream>
#include<conio.h>
using namespace std;
main()
{
char name[4]={'a','b','c','d'},sq[15];
int ar[4]={0,2,4,13},j=0;
int bu[4]={18,23,13,10},time=0;
cout<<" time interval = 3 \n";
cout<<"\n sequence \n";
	for(int i=0;i<4;i++)
	{
		if(ar[i]<=time && bu[i]>0)
		{   cout<<" ";
			time=time+3;
			bu[i]=bu[i]-3;
			cout<<name[i];
			sq[j]=name[i];
			j++;
		}
	}
	
cout<<"\n\n time interval =6\n";
cout<<"\n sequence \n";
	for(int i=0;i<4;i++)
	{
		if(ar[i]<=time && bu[i]>0)
		{
			cout<<" ";
			time=time+6;
			bu[i]=bu[i]-6;
			cout<<name[i];
			sq[j]=name[i];
			j++;
		}
	}
	cout<<"\n\n rest of the code first come first serve \n";
	cout<<"\n sequence \n";
	for(int i=0;i<4;i++)
	{
		if(ar[i]<=time && bu[i]>0)
		{   cout<<" ";
			time=time+bu[i];
			bu[i]=bu[i]-bu[i];
			cout<<name[i];
			sq[j]=name[i];
			j++;
		}
		
	}
	cout<<"\n total time consumed is :"<<time<<"\n";
	cout<<"\n sequence \n";
	cout<<"--------------------------";
	cout<<"\n";
	for(int y=0;y<j;y++)
	{
		cout<<"|"<<sq[y];
	}
	cout<<"\n \nend of the program";
}
