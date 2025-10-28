#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return log(3.0*x)-3.0;
}
int main()
{
    double a,b;
    cin>>a>>b;

    double tol=1e-4;
    int maxit=20;
    double err=1e9;
    if(f(a)*f(b)>=0)
    {
        cout<<"Error"<<endl;
        return -1;
    }

    double c=a;
    double cold=c;
    for(int i=1;i<=maxit;i++)
    {
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        double fc=f(c);
        err=fabs(c-cold)/c*100;
        cout<<"Iteration-"<<i<<": a= "<<a<<" b= "<<b<<" c="<<c<<" f(c)="<<fc<<" Error= "<<err<<endl;

        if(err<=tol)
        {
            cout<<"The Root is: "<<c<<endl;
            break;
        }

        if(f(a)*f(c)<0)
        {
            b=c;
        }
        else
        a=c;
        cold=c;
        if(i==maxit)
        {
            cout<<"Maximum iterations reached"<<endl;
        }


    }

    return 0;
}