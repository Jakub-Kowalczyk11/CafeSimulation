#include "receipt.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

Receipt::Receipt(){}

Receipt::~Receipt(){}

int Receipt::returnVectorSize()
{
    return receipt_.size();
}

void Receipt::addToReceipt(Coffee *a) //dodaje produkt kawy
{ 
    receipt_.push_back(a);
}

void Receipt::addToReceipt(SoftDrink* a) //dodaje produkt napoju
{
    receipt_.push_back(a);
}

void Receipt::addToReceipt(Cake* a) // dodaje produkt ciasta
{
    receipt_.push_back(a);
}
void Receipt::removeProduct() //usuwa wybrany produkt z vectora
{
    int i;
    cout<<"\nWhich product (in order) would you like to remove from your order?"<<endl;
    cin>>i;
    getchar();
    if(i>receipt_.size())
    {
        cout<<"Wrong input... \nPress enter to continue"<<endl;
        getchar();
    }
    else
    {
    auto it=begin(receipt_);
    receipt_.erase(it+i-1);
    }
}

void Receipt::showReceipt() // wypisuje na terminal  zawartosc vectora
{
    cout<<"Here's your order"<<endl;
    for(int i=0; i<receipt_.size();++i)
    {
        cout<<i+1<<". ";
        receipt_[i]->getInfo();
    }
}

void Receipt::printReceipt() //mala animacja drukowania
{
    cout<<"\t Thank you for ordering!"<<endl;
    cout<<"     Printing receipt";
    sleep(1);
    cout<<"."<<flush;
    sleep(1);
    cout<<"."<<flush;
    sleep(1);
    cout<<"."<<flush;
    sleep(1);
    cout<<" Printing Complete"<<endl;
}

void Receipt::printReceiptTerminal(CoffeeShop adress,Worker worker) //wypisanie na termianl pelnego paragonu
{
    if(receipt_.size()==0)
    {
        cout<<"You haven't ordered anything yet..."<<endl;
    }
    else
    {
    time_t end_time = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout<<"\n";
    cout<<"===================================================="<<endl;
    cout<<"|                      RECEIPT                     |"<<endl;
    cout<<"|                      "<<adress.getAdress()<<"\t\t   |"<<endl;
    cout<<"|"<<ctime(&end_time);
    cout<<"|                                                  |"<<endl;
    cout<<"|                                                  |"<<endl;
    for(int i=0; i<receipt_.size();++i)
    {
        sum_ +=receipt_[i]->getPrice();
        cout<<"|"; 
        receipt_[i]->getInfo();
    }
    cout<<"|                                                  |"<<endl;
    cout<<"|--------------------------------------------------|"<<endl;
    cout<<"|                             TOTAL: "<< sum_<<"$        |"<<endl;
    cout<<"|                                                  |"<<endl;
    cout<<"| You were served by: "<<worker.returnInfo()<<"\t\t   |"<<endl;
    cout<<"===================================================="<<endl;
    sum_=0.00;
    receipt_.clear();
    }
    cout<<"Press 'enter' to continue"<<endl;
}

void Receipt::printReceiptFile(CoffeeShop adress,Worker worker) //zapisanie pelnego paragonu w pilku "receipt.txt"
{
    if(receipt_.size()==0)
    {
        cout<<"You haven't ordered anything yet...\nPress enter to contiune"<<endl;
    }
    else
    {
    time_t end_time = chrono::system_clock::to_time_t(chrono::system_clock::now());
    ofstream myfile ("receipt.txt");
    if (myfile.is_open())
    {
    myfile<<"===================================================="<<endl;
    myfile<<"|                      RECEIPT                     |"<<endl;
    myfile<<"|                      "<<adress.getAdress()<<"\t\t   |"<<endl;
    myfile<<"|"<<ctime(&end_time);
    myfile<<"|                                                  |"<<endl;
    myfile<<"|                                                  |"<<endl;
    for(int i=0; i<receipt_.size();++i)
    {
        sum_ +=receipt_[i]->getPrice();
        myfile<<"|"; 
        myfile<<receipt_[i]->returnInfo()<<endl;
    }
    myfile<<"|                                                  |"<<endl;
    myfile<<"|--------------------------------------------------|"<<endl;
    myfile<<"|                             TOTAL: "<<fixed<<setprecision(2)<<sum_<<"$        |"<<endl;
    myfile<<"|                                                  |"<<endl;
    myfile<<"| You were served by: "<<worker.returnInfo()<<"\t\t   |"<<endl;
    myfile<<"===================================================="<<endl;
    myfile.close();
    sum_=0.00;
    receipt_.clear();
    cout<<"Press 'enter' to continue"<<endl;
    }
    else cout <<"Printer broke... Sorry! We can't print your receipt.\nPress enter to continue";
    }
}