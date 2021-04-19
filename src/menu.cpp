#include "menu.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

Menu::Menu(): coffee("Coffee"), cake("Cake"),
softDrink("Softdrinks"), remove("Remove"), receipt("Check order"), pay("Pay"), detail("Details"),
end("Exit"),cola("Cola"),fanta("Fanta"),pepsi("Pepsi"),sup("7UP"),sprite("Sprite"),
czeko("Chocolate"),wan("Vanila"),trusk("Strawberry"),wis("Cherry"){}

Menu::~Menu(){}

void Menu::hello(CoffeeShop adress) //przywitanie
{
    system("clear");
    cout << "\t\tWelcome in '"<< adress.getAdress() <<"' Café"<<endl;
}

void Menu::show() //menu glowne
{
    cout << "\n";
    cout << "\tWhat would you like to order?"<<endl;
    cout << coffee << " 4.50$- 1" << endl;
    cout << cake << "\t    - 2" << endl;
    cout << softDrink << "  - 3" << endl;
    cout << "\t Receipt Menu:" << endl;
    cout << remove << "\t    - 4" << endl;
    cout << pay << "\t    - 5" << endl;
    cout << receipt << " - 6"<< endl;
    cout << detail << "\t    - 7"<< endl;
    cout << end << "\t    - 8"<< endl;
}

void Menu::showDrinks() //submenu dla napoji
{
    cout << "\n";
    cout << "\tWhat drink would you like?" << endl;
    cout << cola <<" 3.50$\t -1" << endl;
    cout << fanta << " 3.00$\t -2" << endl;
    cout << pepsi << " 3.50$\t -3" << endl;
    cout << sup << " 3.25$\t -4" << endl;
    cout << sprite << " 2.50$\t -5" << endl;
}

void Menu::showCakes() //submenu dla ciast
{
    cout << "\n";
    cout << "\tWhat flavour of cake would you like?" << endl;
    cout << czeko <<" 7.00$\t\t -1" << endl;
    cout << wan << " 7.50$\t\t -2" << endl;
    cout << trusk << " 9.00$\t -3" << endl;
    cout << wis << " 8.50$\t\t -4" << endl;
    cout << "Special order 10.00$\t -5" << endl;
}
char Menu::showDetails(CoffeeShop adress, Worker worker) //menu zmiany inforamcji olokalu i pracowniku
{
    cout << "\n";
    cout << "\t\tCafé Details"<<endl;
    adress.getInfo();
    cout << "\t\tWaiter Details"<<endl;
    worker.getInfo();
    cout << "\n";
    cout << "\tWhat would you like to change about the café?" << endl;
    cout << "Coffee shop    - 1" << endl;
    cout << "Waiter         - 2" << endl;
    cout << "Return to menu - 3" << endl;
    char response;
    response = getchar();
    getchar();
    system("clear");
    while(1)
    {
        system("clear");
        switch(response)
        {
            case '1':
            return response;

            case '2':
            return response;

            case '3':
            return response;

            default:
            cout<<"Wrong input... try again"<<endl;
        }
        cout<<"\n"<<endl;
        cout << "\tWhat would you like to change about the café?" << endl;
        cout << "Coffee shop    - 1" << endl;
        cout << "Waiter         - 2" << endl;
        cout << "Return to menu - 3" << endl;
        response = getchar();
        getchar();
    }
}

CoffeeShop Menu::detailShop(CoffeeShop adress) //submenu wybory nowego lokalu
{
    string name;
    int cap;
    float rent;
    cout <<"Please enter new name of the café"<< endl;
    cin>>name;
    getchar();
    cout <<"Please enter the number of tables"<< endl;
    cin >> cap;
    getchar();
    cout <<"Please enter the rental price of new café"<< endl;
    cin >> rent;
    getchar();
    adress=CoffeeShop(name,cap,rent);
    return adress;
}

Worker Menu::detailWorker(Worker worker) //submenu wyboru nowego pracownika
{
    string name;
    string surname;
    string gender;
    int age;
    cout <<"Please enter name of the waiter"<< endl;
    cin>>name;
    getchar();
    cout <<"Please enter surname of the waiter"<< endl;
    cin >> surname;
    getchar();
    cout <<"Please enter gender of the new waiter"<< endl;
    cin >> gender;
    getchar();
    cout << "Please enter the age of the waiter" << endl;
    cin >> age;
    getchar();
    worker=Worker(name,surname,gender,age);
    return worker;
}

char Menu::printChoice() //menu wyboru rodzaju zapisu paragonu
{
    char response;
    cout<<"\n";
    cout<<"Would you like your receipt printed in a file 'receipt.txt' (y) or shown in terminal (n)?"<<endl;
    response = getchar();
    getchar();
    while(1)
    {
        system("clear");
        switch(response)
        {
            case 'y':
            return response;

            case 'n':
            return response;

            default:
            cout<<"Wrong input... try again"<<endl;
        }
        cout<<"\n"<<endl;
        cout<<"Would you like your receipt printed in a file (y) or shown in terminal (n)?"<<endl;
        response = getchar();
        getchar();
    }
}

SoftDrink* Menu::drinkChoice() // wybor napoju do zamowienia
{

    srand(time(NULL));
    choice = getchar();
    getchar();
while(1)
{
    system("clear");
    switch(choice)
    {
        case '1':
        {
            SoftDrink* e =new SoftDrink(cola,3.50,rand()% 99 + 1);
            return e;
        }
        case '2':
        {
            SoftDrink* e =new SoftDrink(fanta,3.00,rand()% 99 + 1);
            return e;
        }
        case '3':
        {
            SoftDrink* e =new SoftDrink(pepsi,3.50,rand()% 99 + 1);
            return e;
        }
        case '4':
        {
            SoftDrink* e =new SoftDrink(sup,3.25,rand()% 99 + 1);
            return e;
        }
        case '5':
        {
            SoftDrink* e =new SoftDrink(sprite,2.50,rand()% 99 + 1);
            return e;
        }
        default:
        cout<<"Invalid input... try again..."<<endl;
        cout<<"Press 'enter' to continue"<<endl;
        getchar();
    }
    system("clear");
    showDrinks();
    choice = getchar();
    getchar();
}
}

Cake* Menu::cakeChoice() // wybor ciasta do zamowienia
{
    string flavourChoice;
    choice = getchar();
    getchar();
while(1)
{
    system("clear");
    switch(choice)
    {
        case '1':
        {
            Cake* e =new Cake(cake,czeko,7.00);
            return e;
        }
        case '2':
        {
            Cake* e =new Cake(cake,wan,7.50);
            return e;
        }
        case '3':
        {
            Cake* e =new Cake(cake,trusk,9.00);
            return e;
        }
        case '4':
        {
            Cake* e =new Cake(cake,wis,8.50);
            return e;
        }
        case '5':
        {
            cout << "What kind of flavour?"<<endl;
            cin >> flavourChoice;
            getchar();
            Cake* e =new Cake(cake,flavourChoice,10.00);
            return e;
        }
        default:
        cout<<"Invalid input... try again..."<<endl;
        cout<<"Press 'enter' to continue"<<endl;
        getchar();
    }
    system("clear");
    showCakes();
    choice = getchar();
    getchar();
    }
}