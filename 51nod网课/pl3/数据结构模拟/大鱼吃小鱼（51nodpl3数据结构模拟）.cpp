#include<iostream>
#include<stack>
using namespace std;
stack <int> a;
int main()
{
    int n,i,x,y,cnt=0;
    bool flag=1;
    a.push(0);
     cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(y==0)
        {
        	if(a.top()==0)
        	{
        		cnt++;
			}
			else
			{
				while(x>a.top())
				{
					if(a.top()!=0) 
					a.pop();
					else
					{
						cnt++;
						break;
					}
				}
			}
		}
		else
		{
			a.push(x);
		}
    }
//    cout<<cnt<<endl;
    cnt+=a.size()-1;
    cout<<cnt;
    return 0;
}
