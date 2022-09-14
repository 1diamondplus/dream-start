#include<iostream>
#include<stack>
using namespace std;
int a[1005];

stack<int>v;

int n,m;
int main()
{
 	int i,j,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=0;j<n;++j)
		{
			cin>>a[j];
		}
		int k=1,h=0;
		bool r=1;
		while(1)
		{
			if(h==n)
			{
				break;
			}
			if(k==a[h])
			{
				k++;
				h++;
			}
			else if(v.size()&&v.top()==a[h])
			{
				v.pop();
				h++;   
			}
			else if(k<=n)
			{
				v.push(k);
				k++;
			}
			else
			{
				r=0;
				break;
			}
		}
		if(r==0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}
