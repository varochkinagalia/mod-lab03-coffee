#pragma once
#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <string>

enum STATES
{
	OFF,
	WAIT,
	ACCEPT,
	CHECK,
	COOK
};

class Automata
{

public:
	/*enum class STATES
	{
		OFF,
		WAIT,
		ACCEPT,
		CHECK,
		COOK
	};*/
	Automata();
	void on();
	void off();
	void coin(int amount);
	void getMenu();
	void getState();
	//STATES getState();
	void choice(int drink);
	void check();
	void cancel();
	void cook();
	void finish();

private:
	int cash;
	static const int menu_size = 5;
	int nomer;
	std::string menu[menu_size];
	float prices[menu_size];
	STATES state;

};

#endif