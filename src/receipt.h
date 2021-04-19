#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <chrono>
#include <ctime>
#include <fstream>
#include "product.h"
#include "coffee.h"
#include "softDrink.h"
#include "cake.h"
#include "coffeeShop.h"
#include "Worker.h"
using namespace std;
class Receipt
{
    public:
    float sum_ = 0.00;
    vector<Product*> receipt_;
    Receipt();
    ~Receipt();
    int returnVectorSize();
    void addToReceipt(Coffee *a);
    void addToReceipt(SoftDrink* a);
    void addToReceipt(Cake* a);
    void removeProduct();
    void showReceipt();
    void printReceipt();
    void printReceiptTerminal(CoffeeShop adress, Worker worker);
    void printReceiptFile(CoffeeShop adress,Worker worker);
};