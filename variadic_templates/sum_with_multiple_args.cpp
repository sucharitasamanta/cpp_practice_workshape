#include <iostream>
#include<stdio.h>
using namespace std;

int sumApproach1()
{
    return 0;
}

template <class T1, class... T2>
T1 sumApproach1(T1 var1, T2... var2)
{
    return var1 + sumApproach1(var2...);
}

template <class... T>
auto sumApproach2(T... var)
{
    return (...+var);
}


int main()
{
    int sum1 = sumApproach1(1,2,3,4,5);
    cout<<"Sum in approach1= "<<sum1<<endl;
    
    int sum2 = sumApproach2(1,2,3,4,5);
    cout<<"Sum in approach2= "<<sum2<<endl;

    return 0;
}
