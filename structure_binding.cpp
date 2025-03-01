#include <iostream>
#include<stdio.h>
using namespace std;

struct Point{
  int x,y;
  
  Point(int _x, int _y): x(_x),y(_y)
  {
  }
  
  auto operator()()
  {
      return make_tuple(x,y);
  }
};


int main()
{
    Point P(4,7);
    auto [a,b] = P();
    cout<<"a= "<<a<<"; b="<<b<<endl;

    int p,q;
    tie(p,q) = P();
    cout<<"p= "<<p<<"; q="<<q<<endl;
    
    return 0;
}
