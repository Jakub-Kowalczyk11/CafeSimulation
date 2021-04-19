#include <iostream>
#include <string>
#include "softDrink.h"
using namespace std;

SoftDrink::SoftDrink(const string& title,const float price,const int ID):Product::Product{title,price},ID_{ID}{}

SoftDrink::~SoftDrink(){}
const int SoftDrink::getID() const //funckja zwracajaca numer ID produktu
{
    return ID_;
}

void SoftDrink::getInfo() //funckja wypisujaca inforamcje o produkcie
{
    cout<<"Product: " << title_<<"\t ID: "<<ID_<<"\t Price: "<< fixed << setprecision(2) <<price_<<"$"<<endl;
}

string SoftDrink::returnInfo() //zmiana getInfo na string by zapisac informacje w pilku
{
    return "Product: "+title_+"\t ID: "+to_string(ID_)+"\t Price: "+to_string(price_)+"$";
}