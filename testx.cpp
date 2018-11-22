#include <iostream>
#include <cstring>
using namespace std;

class Card{
	
public:
	string no;
	string name;
	int balance;
	
	Card(){
		this->no = "";
		this->name = "";
		this->balance = 0;
	}
	
	Card(string no, string name, int balance){
		this->no = no;
		this->name = name;
		this->balance = balance;
	}
	
	void show(){
		cout << "账号：" << no << endl;
		cout << "户名：" << name << endl;
		cout << "余额：" << balance << "元" << endl;
	}
};

class DebitCard: Card{
public:	
	DebitCard(string no, string name, int balance):Card(no,name,balance){
	}
	
	void save(int value){
		this->balance = this->balance + value;
		cout << "存款" << value << "元，当前余额:" << balance << "元"<< endl; 
	}
	
	void pay(int value){
		if(value > this->balance){
			cout << "刷卡" << value << "元，余额不足！" << endl;
		}else{
			this->balance = this->balance - value;
			cout << "消费" << value << "元，当前余额:" << balance << "元"<< endl; 			
		} 
	}
	
	void show(){
		cout << "借记卡" << endl;
		cout << "账号：" << no << endl;
		cout << "户名：" << name << endl;
		cout << "余额：" << balance << "元" << endl;
	}
};

class CreditCard:Card{
public:	 
	int max;          //最大信用额度 
	int credit;       //信用额度 
	
	CreditCard():Card(){
	}
	
	CreditCard(string no, string name, int max){
		this->no = no;
		this->name = name;		
		this->max = max;
		this->credit = max;		
	}
	
	void save(int value){		
		this->credit += value;
		cout << "信用卡存入" << value << "元，当前信用额度：" << credit << "元，最大信用额度：" << max <<"元"<< endl;		
	}
	
	void pay(int value){
		if(credit >= value){
			credit -= value;
			cout << "信用卡消费" << value << "元，当前信用额度：" << credit << "元，最大信用额度：" << max <<"元"<< endl;
		}else{
			cout << "刷卡" << value << "元，透支超过最高限额，消费失败！" << endl;
		}
	}
	
	void show(){
		cout << "信用卡" << endl;
		cout << "账号：" << no << endl;
		cout << "户名：" << name << endl;
		cout << "最大信用额度：" << max << "元" << endl;
		cout << "当前信用额度：" << credit << "元" << endl;		
	}
};

void line(){
	cout << "************************" << endl;
}

int main(){
	Card c("100001", "张三", 1000);
	c.show();
	line();
	
	DebitCard dc("100002", "李四", 1000);
	dc.show();
	line();
	
	dc.save(500);
	dc.pay(800);
	dc.pay(800);
	dc.show();
	line();
	
	CreditCard cc("200001", "王五", 20000);
	cc.show();
	line();
	
	cc.pay(15000);	
	line();
	cc.pay(6000);
	
	
	
}
