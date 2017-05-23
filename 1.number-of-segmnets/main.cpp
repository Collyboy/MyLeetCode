#include "434.number-of-segments-in-a-string.h"
#include <iostream>
using namespace std;
int main()
{
	Solution test;
	string context="Hello, my name is John";
	int count=test.countSegments(context);
	cout<<"the segmnet int he context is ="<<count<<" times";
	return 0;
}
