#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a, b, c;
	cin >> a >> b >> c;
	
	if((a+b<=c) || (a+c<=b) || (b+c<=a)){
		cout << "���ܹ���������" << endl;
		return 0;
	}else{
		double s = (a+b+c)/2;
		double area = sqrt(s * (s-a) * (s-b) * (s-c));
		cout << "�����������" << area << endl;
	}	
}
