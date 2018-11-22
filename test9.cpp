#include <iostream>
using namespace std;

template <class T> T GetMax(T a, T b) {
	T result;
	result = (a>b)? a : b;
	return (result);
}

int main () {
	int i=5, j=6, k;
	long l=10, m=5, n;
	double f1=3.14, f2 = 6.78, f3;
	
	k=GetMax(i,j);
	n=GetMax(l,m);
	f3=GetMax(f1,f2);
	
	cout << k << endl;
	cout << n << endl;
	cout << f3 << endl;
	
	return 0;
}
