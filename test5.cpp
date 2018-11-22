#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	n = n / 10;
	switch(n){
		case 10:
		case 9: cout << "优秀"  << endl; break;
		case 8:
		case 7:
		case 6:cout << "合格" << endl; break;
		default:cout << "不及格" << endl;break; 
	}
}
