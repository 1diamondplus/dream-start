#include<iostream>
#include<cstring>
using namespace std;
char a[10005],b[10005];
int map[10005];
int main()
{
	int n,i,m,j,u;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>map[i];
		map[i]-=1;
	}
	while(1)
	{
		cin>>m;
		if (m==0)
		{
			return 0;
		}
		cin>>a;
		for(j=0;j<m;j++)
		{
			for(u=0;u<n;u++)
			{
				if(u>=strlen(a))
				{
					b[map[u]]=' ';
					continue;
				}
				b[map[u]]=a[u];
			}
			for(u=0;u<n;u++)
			{
				a[u]=b[u];
			}
		}
		for(j=0;j<n;j++)
		{
			cout<<a[j];
		}
		cout<<endl;
	}
	return 0;
}