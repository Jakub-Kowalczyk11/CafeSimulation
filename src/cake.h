#pragma once
#include "product.h"
#include <string>
using namespace std;

class Cake: public Product
{
    private:
    string flavour_;
    public:
    Cake(const string& title,const string& flavour,const float price);
    ~Cake();
    const string& getFlavour() const;
    void getInfo();
    string returnInfo();
};