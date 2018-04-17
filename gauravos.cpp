#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int id1=2132,id2=2102,id3=2453,time=0, p1=2,p2=4,p3=8,p=0,p1w=0,p2w=0,p3w=0,tt=0,a,b,c;
	a=p1;b=p2;c=p3;
	float avgwt=0,avgta=0,sumw=0;
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
        	if(p1!=0)
        	{
        		p1w+=1;
			}
			if(p2!=0)
			{
				p2w+=1;
			}
        	cout<<" p3\t";
		}
		else if(p2>p1 && p2>p3 && p2>=p)
        {
        	p2=p2-1;
				if(p1!=0)
        	{
        		p1w+=1;
			}
			if(p3!=0)
			{
				p3w+=1;
			}cout<<" p2\t";
		}
	    else if(p1>p3 && p1>p2 && p1>=p)
        {
        	p1=p1-1;
				if(p3!=0)
        	{
        		p3w+=1;
			}
			if(p2!=0)
			{
				p2w+=1;
			}cout<<" p1\t";
		}
		else if(p3==p2)
		{
			if(id3<id2)
			{
				p3=p3-1;
					if(p1!=0)
        	{
        		p1w+=1;
			}
			if(p2!=0)
			{
				p2w+=1;
			}
			cout<<" p3\t";
			}
			else if(id2<id3)
			{
				p2=p2-1;cout<<" p2\t";
				if(p1!=0)
        	{
        		p1w+=1;
			}
			if(p3!=0)
			{
				p3w+=1;
			}
			}
		}
				else if(p3==p1)
		{
			if(id3<id1)
			{
				p3=p3-1;cout<<" p3\t";
				if(p1!=0)
        	{
        		p1w+=1;
			}
			if(p2!=0)
			{
				p2w+=1;
			}
			}
			else if(id1<id3)
			{
				p1=p1-1;cout<<" p1\t";
				if(p3!=0)
        	{
        		p3w+=1;
			}
			if(p2!=0)
			{
				p2w+=1;
			}
			}
		}
				else if(p1==p2)
		{
			if(id1<id2)
			{
				p1=p1-1;
					if(p3!=0)
        	{
        		p3w+=1;
			}
			if(p2!=0)
			{
				p2w+=1;
			}cout<<" p1\t";
			}
			else if(id2<id1)
			{
				p2=p2-1;cout<<" p2\t";
				if(p1!=0)
        	{
        		p1w+=1;
			}
			if(p3!=0)
			{
				p3w+=1;
			}
			}
		}
		 cout<<p1<<" |"<<p2<<" |"<<p3<<"\n";
		 time =time+1;
	}
		cout<<"\n time taken to complete all 3 processes is :"<<time;
	cout<<endl<<"waiting time of p1 : "<<p1w<<" p2 : "<<p2w<<" p3 : "<<p3w;
	sumw=p1w+p2w+p3w;
	avgwt=sumw/3;
	cout<<endl <<"average waiting time :"<<avgwt;
    tt= sumw+a+b+c;
	avgta=tt/3;
	cout<<endl<<"average turnaround time :"<<avgta;
	cout<<"\nend of program";
} 
