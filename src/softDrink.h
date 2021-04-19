#pragma once

#include "product.h"
using namespace std;

class SoftDrink: public Product
{
    private:
    int ID_{};
    public:
    SoftDrink(const string& title,const float price, const int ID);
    ~SoftDrink();
    const int getID() const;
    void getInfo();
    string returnInfo();
};
