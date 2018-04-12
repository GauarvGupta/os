#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int id1=2132,id2=2102,id3=2453;
	int p1=2,p2=4,p3=8,p=0;
	cout<<"\n for student s1 id is:"<<id1<<"  process time is :"<<p1<<"\n";
	cout<<"\n for student s2 id is:"<<id2<<"  process time is :"<<p2<<"\n";
	cout<<"\n for student s3 id is:"<<id3<<"  process time is :"<<p3<<"\n";
	cout<<"\n\n";
	cout<<"order \tp1|p2|p3\n";
	cout<<"----- \t--------\n";
		cout<<"\t"<<p1<<" |"<<p2<<" |"<<p3<<"\n";
	for(int i=0;i<14;i++)
	{
        if(p3>p1 && p3>p2 && p3>=p)
        {
        	p3=p3-1;
        	cout<<" p3\t";
		}
		else if(p2>p1 && p2>p3 && p2>=p)
        {
        	p2=p2-1;cout<<" p2\t";
		}
	    else if(p1>p3 && p1>p2 && p1>=p)
        {
        	p1=p1-1;cout<<" p1\t";
		}
		else if(p3==p2)
		{
			if(id3<id2)
			{
				p3=p3-1;cout<<" p3\t";
			}
			else if(id2<id3)
			{
				p2=p2-1;cout<<" p2\t";
			}
		}
				else if(p3==p1)
		{
			if(id3<id1)
			{
				p3=p3-1;cout<<" p3\t";
			}
			else if(id1<id3)
			{
				p1=p1-1;cout<<" p1\t";
			}
		}
				else if(p1==p2)
		{
			if(id1<id2)
			{
				p1=p1-1;cout<<" p1\t";
			}
			else if(id2<id1)
			{
				p2=p2-1;cout<<" p2\t";
			}
		}
		 cout<<p1<<" |"<<p2<<" |"<<p3<<"\n";
	}
	cout<<"\nend of program";
} 
