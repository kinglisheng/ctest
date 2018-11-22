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
		cout << "�˺ţ�" << no << endl;
		cout << "������" << name << endl;
		cout << "��" << balance << "Ԫ" << endl;
	}
};

class DebitCard: Card{
public:	
	DebitCard(string no, string name, int balance):Card(no,name,balance){
	}
	
	void save(int value){
		this->balance = this->balance + value;
		cout << "���" << value << "Ԫ����ǰ���:" << balance << "Ԫ"<< endl; 
	}
	
	void pay(int value){
		if(value > this->balance){
			cout << "ˢ��" << value << "Ԫ�����㣡" << endl;
		}else{
			this->balance = this->balance - value;
			cout << "����" << value << "Ԫ����ǰ���:" << balance << "Ԫ"<< endl; 			
		} 
	}
	
	void show(){
		cout << "��ǿ�" << endl;
		cout << "�˺ţ�" << no << endl;
		cout << "������" << name << endl;
		cout << "��" << balance << "Ԫ" << endl;
	}
};

class CreditCard:Card{
public:	 
	int max;          //������ö�� 
	int credit;       //���ö�� 
	
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
		cout << "���ÿ�����" << value << "Ԫ����ǰ���ö�ȣ�" << credit << "Ԫ��������ö�ȣ�" << max <<"Ԫ"<< endl;		
	}
	
	void pay(int value){
		if(credit >= value){
			credit -= value;
			cout << "���ÿ�����" << value << "Ԫ����ǰ���ö�ȣ�" << credit << "Ԫ��������ö�ȣ�" << max <<"Ԫ"<< endl;
		}else{
			cout << "ˢ��" << value << "Ԫ��͸֧��������޶����ʧ�ܣ�" << endl;
		}
	}
	
	void show(){
		cout << "���ÿ�" << endl;
		cout << "�˺ţ�" << no << endl;
		cout << "������" << name << endl;
		cout << "������ö�ȣ�" << max << "Ԫ" << endl;
		cout << "��ǰ���ö�ȣ�" << credit << "Ԫ" << endl;		
	}
};

void line(){
	cout << "************************" << endl;
}

int main(){
	Card c("100001", "����", 1000);
	c.show();
	line();
	
	DebitCard dc("100002", "����", 1000);
	dc.show();
	line();
	
	dc.save(500);
	dc.pay(800);
	dc.pay(800);
	dc.show();
	line();
	
	CreditCard cc("200001", "����", 20000);
	cc.show();
	line();
	
	cc.pay(15000);	
	line();
	cc.pay(6000);
	
	
	
}
