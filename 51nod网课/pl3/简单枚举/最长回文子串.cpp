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
    for(i=n;i>1;i--)//ģ���Ӵ�����
    {
        for(j=0;j<(n-i)+1;j++)//ģ���Ӵ���ʼ�±�
        {
            for(u=j;u<i/2+j;u++)//�����Ӵ�
            {
//                cout<<i<<' '<<j<<' '<<u<<' '<<a[u]<<'-'<<i+j-(u-j+1)<<' '<<a[i+j-(u-j+1)]<<endl;
				if(a[u]!=a[i+j-(u-j+1)])
                {
					flag=0;
//                    cout<<a[u]<<'-'<<a[i+j-(u-j+1)]<<"������Ҫ��"<<endl;
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
//            cout<<"�в�ѭ������"<<endl; 
        }
//        cout<<"��ѭ������"<<endl;
    }
    cout<<max_;
    return 0;
}
