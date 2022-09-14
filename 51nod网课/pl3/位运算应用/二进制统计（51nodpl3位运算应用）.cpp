#include<iostream>
using namespace std;
int b[50];
int main()
{
	int n,i,s,cnt;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cnt=0;
		cin>>s;
		while(s%2==0&&s!=0)
		{
			s>>=1;
			cnt++;
		}
//		cout<<cnt<<endl; 
		b[cnt]++;
	}
	for(i=0;i<32;i++)
	{
		cout<<b[i]<<' ';
	}
	return 0;
}
