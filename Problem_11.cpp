#include<iostream>
using namespace std;
int main()
{
    int a[20][20];
    for(int i=0;i<20;++i)
    {
        for(int j=0;j<20;++j)
        {
            cin>>a[i][j];
        }
    }
    int res=0;
    int r_res=1;
    for(int i=0;i<20;++i)
    {
        for(int j=0;j<17;++j)
        {
            r_res=1;
            r_res=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            if(r_res>res)
            res=r_res;
        }

    }
    for(int i=0;i<20;++i)
    {
        for(int j=0;j<17;++j)
        {
            r_res=1;
            r_res=a[j][i]*a[j+1][i]*a[j+2][i]*a[j+3][i];
            if(r_res>res)
            res=r_res;
        }

    }
    for(int i=0;i<20;++i)
    {
        for(int j=0;j<20;++j)
        {
            r_res=1;
            if(i+3<=19&&j+3<=19)
            {
                r_res=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
                if(r_res>res)
                    res=r_res;
            }
            r_res=1;
            if(i+3<=19&&j-3<=19)
            {
                r_res=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
                if(r_res>res)
                    res=r_res;
            }
        }
    }
    cout<<res;
    return 0;
}
