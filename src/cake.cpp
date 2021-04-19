#include <iostream>
#include <string>
#include "cake.h"
using namespace std;

Cake::Cake(const string& title,const string& flavour,const float price):Product::Product{title,price},flavour_{flavour}{}

Cake::~Cake(){}

const string& Cake::getFlavour() const
{
    return flavour_;
}
void Cake::getInfo() //wupisanie informacji o produkcie w terminalu
{
    cout<<"Product: " << flavour_ <<" "<< title_<<"\t Price: "<< fixed << setprecision(2) <<price_<<"$"<<endl;
}

string Cake::returnInfo() //zmiana getinfo na string by zapisac w pliku
{
    return "Product: "+flavour_+" "+title_+"\t Price: "+to_string(price_)+"$";
}