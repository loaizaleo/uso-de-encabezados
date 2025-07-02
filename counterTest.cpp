#include "counter.h"
#include <iostream>
using namespace std;
int main()
{
counter c1;
counter c2(10);
/*
variable of type counter - maximum value
INT_MAX
variable of type counter - maximum value
10
 Test setCount, increment, decrement, and getCount
functions.*/
c1.setCount(50);
// SetValue of c1 to 50
c1.decrement();
c1.decrement();
c1.increment();
cout << "Final value of c1 is " << c1.getCount() << endl;
c2.increment();
c2.increment();
c2.decrement();
cout << "Final value of c2 is " << c2.getCount() << endl;
return 0;
}

