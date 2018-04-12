#include<iostream>
#include<conio.h>
using namespace std;
main()
{
char name[4]={'p1','p2','p3','p4'};
int ar[4]={0,2,4,13};
int bu[4]={18,23,13,10},time=0;
	for(int i=0;i<4;i++)
	{
		if(ar[i]<=time && bu[i]>0)
		{
			bu[i]=bu[i]-3;
			cout<<name[i];
			time=time+3;
		}
	}
	for(int i=0;i<4;i++)
	{
		if(ar[i]<=time && bu[i]>0)
		{
			bu[i]=bu[i]-6;
			cout<<name[i];
			time=time+6;
		}
	}
	for(int i=0;i<4;i++)
	{
		if(ar[i]<=time && bu[i]>0)
		{
			bu[i]=bu[i]-bu[i];
			cout<<name[i];
			time=time+bu[i];
		}
	}
}
