#include<iostream>
#include <unistd.h>
using namespace std;
int main()
{
	int h,m,s,t_s,i;
	cout<<"Enter number of hours: ";
	cin>>h;
	cout<<"Enter number of minutes: ";
	cin>>m;
	cout<<"Enter number of seconds: ";
	cin>>s;
	t_s=(h*60*60)+(m*60)+s;
	cout<<"Your time includes "<<t_s<<" seconds"<<endl;
	for(i=1;i<=t_s;i++)
	{
		cout<<"Timer running, seconds= "<<i<<endl;
		sleep(1);
	}
	cout<<"Timer has completed after "<<h<<" hours, "<<m<<" minutes, and "<<s<<" seconds";
}
