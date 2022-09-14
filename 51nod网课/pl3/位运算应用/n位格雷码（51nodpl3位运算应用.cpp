#include<iostream>
using namespace std;

void print(int v,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<((v&(1<<(i)))!=0);
    }
    cout<<endl;
}

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<(1<<n);i++)
    {
        int v=(i>>1)^i;
        print(v,n);
    }
    return 0;
}
