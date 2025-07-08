# Task Code: NMAL-01
## Topic of Task: Best way of Range selection in bisection method.
---
### Task 01: What could be the better approach to choose the range in the bisection method?

In traditional bisection method, a function f(x) has at least one root if it is continuous and changes sign in the interval [a,b]. In mathematical term, if

    f(a)*f(b)<0, then there must be at least one root c in the interval [a,b], where f(c)=0. For a continuous function f(x)=4x^2+3x-3, there also must be at least one root.
---

### A better approach other than the traditional method to select range in bisection->

#### Automatic Interval Scanning:

It is a technique to find interval[a,b] in bisection method instead of guessing it manually. Basically, a loop is initiated within a wide range (e.g.,-5 to +5) and in each loop, the value of x is incrementing delta times, where delta is a small value (e.g. 10^-2/10^-3). In this way, a range can be found automatically where the function f(x) changes sign.

#### C++ (Pseudocode)
```cpp
for (double x=0;x<10;x+=0.01) 
{
    if (f(x)*f(x+0.01)<0) 
    {
        a=x;
        b=x+0.01;
        break;
    }
}
```
This snippet scans through a specified domain in small increments and checks for a sign change in the function values between two consecutive points. If a sign change is detected, it indicates the presence of a root within that interval ([a, b]).
This approach is applied by narrowing down the range before bisection. That is why the number of iteration is also reduced within the tolerance level.
    