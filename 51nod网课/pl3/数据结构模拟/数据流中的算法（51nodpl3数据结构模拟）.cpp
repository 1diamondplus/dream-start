#include<iostream>
#include<deque>
#include<cmath>
#include<algorithm>

using namespace std;

int k,s,v;
int t[105],n,sum=0,square=0;
deque<int>a;

void _1(int n)
{
	a.push_back(n);
	sum+=n;
	square+=n*n;
	if(a.size()>k)
	{
//		cout<<a.size()<<endl;
		sum-=a.front();
		square-=a.front()*a.front();
		a.pop_front();
	}
//	cout<<a.size()<<endl;
}

double _2()
{
//	printf("%.2lf",sum/n);
	return double(sum)/double(a.size());
}

double _3()
{
	double ave=_2();
	return (square/double(a.size()))-(ave*ave);
	
}

double _4()
{
	int j=0;
	for(auto i=a.begin();i<a.end();i++,j++)
	{
		t[j]=*i;
	}
	sort(t,t+a.size());
	if (a.size()%2!=0)
	return t[a.size()/2];
	else
	{
		return (t[a.size()/2-1]+t[a.size()/2])/2.0;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin>>v>>k;
	for(int i=0;i<v;i++)
	{
		cin>>n;
		if(n==1)
		{
			cin>>s;
			_1(s);
			continue;
		}
		if(n==2)
		{
			printf("%.2lf\n",_2());
			continue;
		}
		if(n==3)
		{
			printf("%.2lf\n",_3());
		}
		else
		{
			printf("%.2lf\n",_4());
		}
	}
	return 0;
}
