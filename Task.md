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
    