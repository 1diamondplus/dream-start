#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct kkk{
	int a_i;
	int cnt;
}a[10005];
int main()
{
	int n,k,s[10005],kk[10005],u,i;
	char b[10005];
	cin>>n>>k;
	cin>>b;
	for(i=0;i<n;i++)
	{
		s[i]=b[i]-'0';
		kk[i]=s[i];
//		cout<<kk[i]<<' '; 
	}
	sort(s,s+n);
	a[0].a_i=s[0],a[0].cnt=0;
	u=0;
	for(i=0;i<n;i++) 
	{
		if(s[i]!=a[u].a_i)
		{
			u++;
			a[u].a_i=s[i];
			a[u].cnt=1;
		}
		else
		a[u].cnt++;
	}
//	cout<<u<<endl;
	for(i=0;i<=u;i++)
	{
//		cout<<a[i].cnt<<' '<<a[i].a_i<<endl;
		if(a[i].cnt==k)
		{
			for(i=0;i<n;i++)
			{
				cout<<kk[i];
			}
			return 0;
		}
		
	}
	return 0;
}

