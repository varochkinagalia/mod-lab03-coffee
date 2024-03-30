// Copyright 2020 GHA Test Team
#include <gtest/gtest.h>
#include "Automata.h"
TEST(AutomataTest, InitialState) {
    Automata automata;
    EXPECT_EQ(automata.getState(), 0);
}
TEST(AutomataTest, InsertCoin) {
    Automata automata;
    automata.on();
    automata.coin(3);
    EXPECT_EQ(automata.getState(), 2);
}
TEST(AutomataTest, InsertCoin1) {
    Automata automata;
    automata.on();
    automata.coin(3);
    automata.coin(2);
    EXPECT_EQ(automata.getState(), 2);
}
TEST(AutomataTest, Select) {
    Automata automata;
    automata.on();
    automata.coin(10);
    automata.choice(2);
    EXPECT_EQ(automata.getState(), 3);
}
TEST(AutomataTest, SelectWithCancel) {
    Automata automata;
    automata.on();
    automata.coin(15);
    automata.cancel();
    EXPECT_EQ(automata.getState(), 1);
}
TEST(AutomataTest, SelectWithMoneyWithCancel) {
    Automata automata;
    automata.on();
    automata.coin(10);
    automata.choice(2);
    automata.cancel();
    EXPECT_EQ(automata.getState(), 1);
}
TEST(AutomataTest, Check) {
    Automata automata;
    automata.on();
    automata.coin(10);
    automata.choice(2);
    automata.check();
    EXPECT_EQ(automata.getState(), 3);
}
TEST(AutomataTest, Cooking) {
    Automata automata;
    automata.on();
    automata.coin(5);
    automata.choice(2);
    automata.cook();
    EXPECT_EQ(automata.getState(), 4);
}
TEST(AutomataTest, CookingWithFinish) {
    Automata automata;
    automata.on();
    automata.coin(5);
    automata.choice(2);
    automata.cook();
    automata.finish();
    EXPECT_EQ(automata.getState(), 1);
}
TEST(AutomataTest, Off) {
    Automata automata;
    automata.on();
    automata.coin(5);
    automata.choice(2);
    automata.cook();
    automata.finish();
    automata.off();
    EXPECT_EQ(automata.getState(), 0);
}
