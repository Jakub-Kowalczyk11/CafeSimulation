#pragma once
#include "softDrink.h"
#include "cake.h"
#include "coffeeShop.h"
#include "worker.h"
#include <iostream>
#include <string>
using namespace std;

class Menu
{
    private:
    string coffee;
    string cake;
    string softDrink;
    string remove;
    string receipt;
    string pay;
    string detail;
    string end;
    string cola;
    string fanta;
    string pepsi;
    string sup;
    string sprite;
    string czeko;
    string wan;
    string trusk;
    string wis;
    int choice;
    public:
    Menu();
    ~Menu();
    void hello(CoffeeShop adress);
    void show();
    void showDrinks();
    void showCakes();
    char showDetails(CoffeeShop adress, Worker worker);
    char printChoice();
    SoftDrink* drinkChoice();
    Cake* cakeChoice();
    CoffeeShop detailShop(CoffeeShop adress);
    Worker detailWorker(Worker worker);
};