#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char way,b;
	int n;
	int x=0,y=0;
	while(1)
	{
		cin>>n>>way>>b;
		switch (way)
		{
			case 'E':
				 x+=n;
//				 cout<<x<<'E'<<endl;
				 break;
			case 'W':
				x-=n;
//				cout<<x<<'w'<<endl;
				break;
			case 'N':
				 y+=n;
//				 cout<<y<<'N'<<endl;
				 break;
			case 'S':
				 y-=n;
//				 cout<<y<<'S'<<endl;
				 break;
		}
		if (b=='.')
		{
			break;
		}
	}
//	cout<<x<<y;
	cout<<abs(x)+abs(y);
	return 0;
 } 
