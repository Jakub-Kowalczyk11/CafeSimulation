#include "product.h"
#include <iostream>
#include <string>
using namespace std;

Product::~Product(){}

Product::Product(const string& title,const float price): title_{title}, price_{price}{}
const string& Product::getTitle() const //funckja zwracajaca nazwe produktu
{
    return title_;
}
const float Product::getPrice() const //funkcja zwracajaca cene produktu
{
    return price_;
}
