#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return pow(x,5)-3*x+5;
}

double derivative(double x)
{
    return 5*pow(x,4)-3;
}
int main()
{
    double x0;
    cout<<"Enter initial guess:";
    cin>>x0;
    double err=1e-3;
    double x1;
    int it=0;
    
    while(true)
    {
        it++;
        x1=x0-f(x0)/derivative(x0);
        double error=fabs((x1-x0)/x1);
        cout<<"Iteration "<<it<<": x="<<x1<<", f(x)="<<f(x1)<<", error="<<error<<endl;
        if(error<err)
        {
            break;
        }
        x0=x1;
    }
    cout<<"\nApproximate root="<<x1<<endl;
    return 0;
}