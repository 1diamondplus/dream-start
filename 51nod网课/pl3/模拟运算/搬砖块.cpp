#include<iostream>
using namespace std;
struct node{
    int u;//上方木块编号
    int d;//下方木块编号
    int index;//本木块所在位置
}a[10005];

void move(int x,int y)
{
    while (a[])
    {
        /* code */
    }
    
}

void clear(int a)
{

}

int main()
{
    char s;
    bool flag=0;
    int i,n,k,x,y;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        a[i-1].index=i;
        a[i-1].d=0;
        a[i-1].u=0;
    }
    for(i=0;i<k;i++)
    {
        flag=0;
        cin>>s;
        if(s=='m')
        {
            flag=1;
        }
        cin>>s;
        cin>>s;
        cin>>s;
        cin>>x;
        cin>>s;
        cin>>s;
        cin>>s;
        cin>>s;
        if(flag)
        {
            cin>>y;
        }
        if (flag=1)
        {
            move(x,y);
        }
        else
        {
            clear(x);
        }
    }
    return 0;
}