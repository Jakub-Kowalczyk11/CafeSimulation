#include "coffeeShop.h"
#include <iostream>
#include <string>
using namespace std;

CoffeeShop::CoffeeShop(): adress_("Sweet unknown"),capacity_(10),rent_(1000.00)
{}

CoffeeShop::CoffeeShop(string adress, int capacity, float rent): adress_(adress),capacity_(capacity),rent_(rent)
{}

CoffeeShop::~CoffeeShop(){}

string CoffeeShop::getAdress() //zwraca string adresu by zapisac go w pliku "receipt.txt"
{
    return adress_;
}
void CoffeeShop::getInfo() //wypisuje informacje o lokalu w terminalu
{
    cout << "Adress: " << adress_ << "\nCapacity: " << capacity_ << "\nRent: " << rent_ << endl;
}   
