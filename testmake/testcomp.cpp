#include "testcomp.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void testclass::putInt(int x) {
	testInt = x;
}

int testclass::getInt() {
	return testInt;
}

int main() {
	testclass a = testclass();
	a.putInt(6);
	cout << a.getInt() << endl;
	return 0;
}