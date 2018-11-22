#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double t = 1;
	int n = 1;
	double pi = 0;
	double flag = 1.0;
	while(fabs(t) > 1e-7){
		pi += t;
		n += 2;
		flag *= -1;
		t = flag/n;
	}
	pi *= 4;
	cout << "pi=" << pi << endl;
}
