#include "singleton.h"
#include <iostream>
using namespace std;
int main()
{
	Singleton *instance=Singleton::getinstance();
	return 0;
}