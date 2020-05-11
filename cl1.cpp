#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int hour,minute,second,a;
    a=0;
    cout<<"Enter current time:"<<endl;
    cin>>hour>>minute>>second;
    while(a==0)
    {
        system("cls");
        cout<<hour<<":"<<minute<<":"<<second;
        Sleep(1000);
        second++;
        if(second==60)
        {
            second=0;
            minute++;
        }
        if(minute==60)
        {
            minute=0;
            hour++;
        }
        if(hour==24)
        {
            hour=0;
            minute=0;
            second=0;
        }

    }
    return 0;
}
