#include <iostream>
#include <cmath>
using namespace std;

void fc(double a, double b, double c ){
	double dt = b*b - 4*a*c;
	if(dt<0){
		cout << "нч╫Б";
		return;
	}
	if(dt == 0){
		double x = -1*b/(2*a);
		cout << "x=" << x << endl;
		return;
	}	
	double x1 = (-1*b + sqrt(dt))/(2*a);
	double x2 = (-1*b - sqrt(dt))/(2*a);
	cout << "x1=" << x1 << endl;
	cout << "x2=" << x2 << endl;	
}

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	fc(a, b, c);	
}
