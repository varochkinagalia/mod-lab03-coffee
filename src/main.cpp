// Copyright 2022 UNN-IASR
#include "Automata.h"
#include <iostream>
int main() {
	Automata automat;
	automat.on();
	automat.getMenu();
	automat.choice(2);
	automat.coin(10);
	automat.check();
	automat.cook();
	automat.finish();
	std::cout << std::endl;
	automat.getMenu();
	automat.choice(2);
	automat.coin(5);
	automat.check();
	automat.coin(10);
	automat.check();
	automat.cook();
	automat.finish();
	std::cout << std::endl;
	automat.getMenu();
	automat.choice(3);
	automat.coin(50);
	automat.cancel();
	std::cout << std::endl;
	automat.coin(4);
	automat.choice(4);
	automat.getState();
	automat.off();
	return 0;
}
