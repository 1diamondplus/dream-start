#include<iostream>
using namespace std;
int main()
{
    int i=0,u,j,max_=1,n;
    bool flag=1;
    char a[1005];
    while(cin>>a[i])
    {
//        cout<<a[i]; 
		i++;
    }
//    cout<<endl;
//    cout<<i;
    n=i;
    for(i=n;i>1;i--)//模拟子串长度
    {
        for(j=0;j<(n-i)+1;j++)//模拟子串起始下标
        {
            for(u=j;u<i/2+j;u++)//遍历子串
            {
//                cout<<i<<' '<<j<<' '<<u<<' '<<a[u]<<'-'<<i+j-(u-j+1)<<' '<<a[i+j-(u-j+1)]<<endl;
				if(a[u]!=a[i+j-(u-j+1)])
                {
					flag=0;
//                    cout<<a[u]<<'-'<<a[i+j-(u-j+1)]<<"不符合要求"<<endl;
                    break;
                }
            }
            if(flag)
            {
//                cout<<max_<<' ';
				max_=max(max_,i);
//                cout<<i<<' '<<max_<<endl;
            }
            flag=1;
//            cout<<"中层循环结束"<<endl; 
        }
//        cout<<"外循环结束"<<endl;
    }
    cout<<max_;
    return 0;
}
