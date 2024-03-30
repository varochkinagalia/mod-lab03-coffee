// Copyright 2022 UNN-IASR
#ifndef INCLUDE_AUTOMATA_H_
#define INCLUDE_AUTOMATA_H_
#include <string>
enum STATES {OFF, WAIT, ACCEPT, CHECK, COOK};
class Automata {
    public:
        Automata();
        void on();
        void off();
	void coin(int amount);
	void getMenu();
	void getState();
	STATES getState();
	void choice(int drink);
	void check();
	void cancel();
	void cook();
	void finish();
    private:
	int cash;
	int menu_size = 5;
	int nomer;
	std::string menu[5];
	int prices[5];
	STATES state;
};
#endif // INCLUDE_AUTOMATA_H_
