#include "Automata.h"
#include <iostream>
using namespace std;
int main()
{
	//включили автомат
	Automata automat;
	automat.on();

	//ситуация, когда все работает правильно-деньги положили и то, что хотели получили
	automat.getMenu();
	automat.choice(2);
	automat.coin(10);
	automat.check();
	automat.cook();
	automat.finish();

	cout << endl;

	//ситуация, когда денег недостаточно
	automat.getMenu();
	automat.choice(2);
	automat.coin(5);
	automat.check();
	automat.coin(10);
	automat.check();
	automat.cook();
	automat.finish();

	cout << endl;

	//ситуация, когда заказ отменен
	automat.getMenu();
	automat.choice(3);
	automat.coin(50);
	automat.cancel();

	cout << endl;
	

    //выключаем автомат
	automat.off();


	return 0;
	
}