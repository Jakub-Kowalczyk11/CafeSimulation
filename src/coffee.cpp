#include <iostream>
#include <string>
#include "coffee.h"
using namespace std;
Coffee::Coffee(const string& title,const float price): Product::Product{title,price}{}
Coffee::~Coffee(){}
void Coffee::getInfo() ///wypisanie informacji o produkcie
{
    cout<< "Product: " << title_<<"\t\t Price: "<< fixed << setprecision(2) <<price_<<"$"<<endl;
}

string Coffee::returnInfo() //zmiana getInfo na string by zapisac w pliku
{
    return "Product: "+title_+"\t Price: "+to_string(price_)+"$";
}