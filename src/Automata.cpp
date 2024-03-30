// Copyright 2022 UNN-IASR
#include "Automata.h"
#include <iostream>

Automata::Automata() {
    cash = 0;
    nomer = 0;
    state = STATES::OFF;
}
void Automata::on() {
    state = STATES::WAIT;
    std::cout << "Avtomat vkluchen" << std::endl;
    std::cout << std::endl;
    std::cout << "Menu: " << std::endl;
    std::cout << "Tea - 20" << std::endl;
    std::cout << "Juice - 50" << std::endl;
    std::cout << "Water - 10" << std::endl;
    std::cout << "Chokolate - 35" << std::endl;
    std::cout << "Chips - 55" << std::endl;
    std::cout << std::endl;
}
void Automata::off() {
    state = STATES::OFF;
    std::cout << "Avtomat vikluchen" << std::endl;
}
void Automata::coin(int amount) {
    cash += amount;
    state = STATES::ACCEPT;
    std::cout<< "Avtomat poluchil dengi - "<< amount  << std::endl;
}
void Automata::getMenu() {
    menu[0] = "Tea";
    menu[1] = "Juice";
    menu[2] = "Water";
    menu[3] = "Chokolate";
    menu[4] = "Chips";
    prices[0] = 20;
    prices[1] = 50;
    prices[2] = 10;
    prices[3] = 35;
    prices[4] = 55;
    std::cout << "Menu c cenami cchitano" << std::endl;
}
STATES Automata::Automata::getState() {
    return state;
}
void Automata::choice(int drink) {
    if (drink >= 0 && drink < menu_size) {
        state = STATES::CHECK;
        nomer = drink;
        std::cout << "Vibran " << menu[nomer] << std::endl;
        std::cout << "Cena " << menu[nomer] << " " <<   prices[nomer] << std::endl;
    } else {
        std::cout << "Vibor nevernii " << std::endl;
    }
}
void Automata::check() {
    if (cash >= prices[nomer]) {
        state = STATES::CHECK;
        std::cout << "Dengi prinyati " <<  std::endl;
        if (cash > prices[nomer]) {
	    std::cout << "Sdacha " << cash - prices[nomer];
	    std::cout << ". Vozmite sdachu." << std::endl;
	} else {
            std::cout << "Sdacha " << cash - prices[nomer] << std::endl;
	}
    } else {
        state = STATES::CHECK;
	std::cout << "Deneg ne dostatochno " <<  std::endl;
    }
}
void Automata::cancel() {
    cash = 0;
    state = STATES::WAIT;
    std::cout << "Otmena seansa " <<  std::endl;
}
void Automata::cook() {
    if (cash >= prices[nomer]) {
        state = STATES::COOK;
        std::cout << "Prigotovlenie " << menu[nomer] << std::endl;
    }
}
void Automata::finish() {
    if (cash >= prices[nomer]) {
        cash -= prices[nomer];
	state = STATES::WAIT;
	std::cout << "Zakaz gotov " << std::endl;
    }
}
