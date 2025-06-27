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
        a=c;

        it++;
    }

    return c;
    cout<<"Iterations: "<<it<<endl;

}


double traditional()
{
    double a,b;
    cin>>a>>b;
    double root=Bisection(a,b);
    return root;
}

