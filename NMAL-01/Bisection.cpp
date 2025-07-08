#include<bits/stdc++.h>
using namespace std;

double tol=1e-6;

double f(double x)
{
    return (4*x*x+3*x-3);
}


double Bisection(double a, double b)
{
    if(f(a)*f(b)>0)
    {
        return LLONG_MIN;
    }

    double error=abs(a-b);
    double c;
    long long int it=0;
    while(error>=tol)
    {
        c=(a+b)/2;

        if(f(c)==0.0)
        {
            return c;
        }

        if(f(a)*f(c)<0)
        {
            b=c;
        }

        else
        {
            a=c;
        }
        error=abs(a-b);
        it++;
    }

    return c;
    cout<<"Iterations: "<<it<<endl;

}


void traditional()
{
    double a=0,b=5;
    double root=Bisection(a,b);
    cout<<"Root in traditional approach is: "<<root<<endl;
}

void scan()
{
    double a=LLONG_MIN;
    double b=LLONG_MIN;
    
    for(double x=0;x<=10;x+=0.01)
    {
        if(f(x)*f(x+0.01)<0)
        {
            a=x;
            b=x+0.01;
            break;
        }
    }

    if(a!=LLONG_MIN&&b!=LLONG_MIN)
    {
        double Root=Bisection(a,b);
        cout<<"Root in Automated Approach is: "<<Root<<endl;
    }
    else
    {
        cout<<"Root is not in this range"<<endl;
    }
}

int main()
{
    traditional();
    scan();
}

