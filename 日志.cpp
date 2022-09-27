#include <iostream>
#include<cstdio>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

#define ll long long
#define long _int128

class diary
{
    private:
        void dataplus()
        {
            int d;
            openfiles("C:\\Users\\86151\\Desktop\\archive\\temp.txt","r",1);
            {
                cin>>d;
            }
            closefiles(1);
            openfiles("C:\\Users\\86151\\Desktop\\archive\\temp.txt","w",0);
            {
                cout<<d+1;
            }
            closefiles(0);
        }
    public:
        FILE *in=stdin,*out=stdout;
        char time[5],data[8];
        string people[10];
        string place[5];
        // char people[];
        bool mode(char s)
        {
            if(s!='a')
            {
                dataplus();
                return 0;
            }
            else
            {
                return 1;
            }
        }
        void openfiles(char path[],char *_type,bool _type_)
        {
            freopen(path,_type,_type_==1?in:out);   
        }
        void closefiles(bool _type_)
        {
            fclose(_type_==1?in:out);
        }
        void printpeople(int n)
        {
            int i=0;
            for(i=0;i<n;i++)
            {
                cout<<people[i];
                if(i!=n-1)
                {
                    cout<<',';
                }
                else
                {
                    cout<<"   ";
                }
            }
        }
        void printdata()
        {
            cout<<data;
            cout<<"   ";
        }
        void printtime()
        {
            cout<<time<<"   ";
        }
        void printplace(int n)
        {
            int i;
            for(i=0;i<n;i++)
            {
                cout<<place[i];
                if(i!=n-1)
                {
                    cout<<'-';
                }
                else
                {
                    cout<<"   ";
                }
            }
        }
}a;

int main()
{
    bool flag=0;
    char s;
    int d;
    int people_cnt,place_cnt;
    cin>>s;
    if(!a.mode(s))
    {
        cout<<"Keep trying get R!!!"<<endl;
        return 0;
    }
    cout<<"Please input the number of people."<<endl;
    cin>>people_cnt;
    cout<<'\n';
    cout<<"Please input people."<<endl;
    for(int i=0;i<people_cnt;i++)
    {
        cin>>a.people[i];
    }
    cout<<endl;
    // cout<<endl;
    cout<<"Please input the number of place."<<endl;
    cin>>place_cnt;
    cout<<"Please input place."<<endl;
    for(int i=0;i<place_cnt;i++)
    {
        cin>>a.place[i];
    }
    cout<<endl;
    cout<<"Please input the data."<<endl;
    cin>>a.data;
    cout<<"Please input the time."<<endl;
    cin>>a.time;
    a.openfiles("C:\\Users\\86151\\Desktop\\archive\\temp.txt","r",1);
    {
        cin>>d;
    }
    a.closefiles(1);
    a.openfiles("C:\\Users\\86151\\Desktop\\archive\\temp.txt","w",0);
    {
        cout<<0;
    }
    a.closefiles(0);

    a.openfiles("C:\\Users\\86151\\Desktop\\diary.txt","a",0);
    {
        cout<<d<<endl;
        a.printdata();
        a.printtime();
        a.printplace(place_cnt);
        a.printpeople(people_cnt);
    }
    a.closefiles(1);

    cout<<"Good job!\nKeep trying!";
    return 0;
}