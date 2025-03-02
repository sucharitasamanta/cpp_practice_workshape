#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int (*pSquareFunc)(int) = [](int a)->int {
	    return a*a;
	};
	
	cout<<"Square of number = "<<pSquareFunc(5)<<endl;
	
	auto pFunc = [&](int & a)->int {
	    return a+=2;
	};
	
	int a=5;
	cout<<"Value of variable = "<<pFunc(a)<<endl;

	return 0;
}