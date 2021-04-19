#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CoffeeShop
{
    private:
    string adress_;
    int capacity_;
    float rent_;
    public:
    CoffeeShop();
    CoffeeShop(string adress, int capacity, float rent);
    string getAdress();
    void getInfo();
    ~CoffeeShop();
};