#include "Automata.h"
#include <iostream>
using namespace std;
int main()
{
	//�������� �������
	Automata automat;
	automat.on();

	//��������, ����� ��� �������� ���������-������ �������� � ��, ��� ������ ��������
	automat.getMenu();
	automat.choice(2);
	automat.coin(10);
	automat.check();
	automat.cook();
	automat.finish();

	cout << endl;

	//��������, ����� ����� ������������
	automat.getMenu();
	automat.choice(2);
	automat.coin(5);
	automat.check();
	automat.coin(10);
	automat.check();
	automat.cook();
	automat.finish();

	cout << endl;

	//��������, ����� ����� �������
	automat.getMenu();
	automat.choice(3);
	automat.coin(50);
	automat.cancel();

	cout << endl;
	

    //��������� �������
	automat.off();


	return 0;
	
}