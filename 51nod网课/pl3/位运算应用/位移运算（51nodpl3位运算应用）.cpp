#include<iostream>
using namespace std;

bool handle(int x,int y)
{
    int cnt=0,cnt_=0;
    while(y%2==0&&((y/2) > 0))
    {
        y/=2;
    }
    while(x>0)
    {
        if((x&y)==y)
        {
            int c=x xor y;
            int lb=c & (-c);
            if(lb==0||lb>y)
            {
            	return 1;
			}
        }
        x/=2;
    }
    return 0;
}
int main()
{
    int n,x,y;
    cin>>n;
    for(register int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(handle(x,y))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
