#pragma once
#include "product.h"
#include <string>
using namespace std;

class Coffee: public Product
{
    public:
    Coffee(const string& title,const float price);
    ~Coffee();
    void getInfo();
    string returnInfo();
};
