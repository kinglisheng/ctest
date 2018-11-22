#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a, b, c;
	cin >> a >> b >> c;
	
	if((a+b<=c) || (a+c<=b) || (b+c<=a)){
		cout << "不能构成三角形" << endl;
		return 0;
	}else{
		double s = (a+b+c)/2;
		double area = sqrt(s * (s-a) * (s-b) * (s-c));
		cout << "三角形面积：" << area << endl;
	}	
}
