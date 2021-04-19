#include <iostream>
#include <time.h>
#include <unistd.h>
#include "coffeeShop.h"
#include "softDrink.h"
#include "coffee.h"
#include "cake.h"
#include "worker.h"
#include "menu.h"
#include "product.h"
#include "receipt.h"

int main()
{;
    CoffeeShop a=CoffeeShop();
    Worker b=Worker();
    Receipt receipt=Receipt();
    Menu menu;
    int choice,i;
    menu.hello(a);
    menu.show();

    choice = getchar();
    getchar();

    while (choice!='8')
    {
        system("clear");
        switch(choice)
        {
            case '1':
            {
                Coffee* q=new Coffee("Kawa",4.50);
                receipt.addToReceipt(q);
                break;
            }
            case '2':
            {
                system("clear");
                menu.showCakes();
                Cake* p = menu.cakeChoice();
                receipt.addToReceipt(p);
                break;
            }
            case '3':
            {
                system("clear");
                menu.showDrinks();
                SoftDrink* y = menu.drinkChoice();
                receipt.addToReceipt(y);
                break;
            }
            case '4':
            {
                if(receipt.returnVectorSize()==0)
                {
                    cout<<"You haven't ordered anything yet...\nPress enter to contiune";
                    getchar();
                    break;
                }
                else
                {
                receipt.showReceipt();
                receipt.removeProduct();
                break;
                }
            }
            case '5':
            {
                if(menu.printChoice()=='y')
                {
                   receipt.printReceipt();
                   receipt.printReceiptFile(a,b); 
                }
                else
                {
                    receipt.printReceipt();
                    receipt.printReceiptTerminal(a,b);
                }
                getchar();
                break;
            }
            case '6':
            {
                if(receipt.returnVectorSize()==0)
                {
                    cout<<"You haven't ordered anything yet...\nPress enter to contiune";
                    getchar();
                    break;
                }
                else
                {
                receipt.showReceipt();
                getchar();
                break;
                }
            }
            case '7':
            {
                char decision=menu.showDetails(a,b);
                if(decision=='1')
                {
                    a=menu.detailShop(a);
                }
                else if (decision=='2')
                {   
                    b=menu.detailWorker(b);
                }
                else if(decision== '3')
                {
                    break;
                }
                break;
            }
            default:
            cout<<"Invalid input...try again..."<<endl;
            cout<<"Press 'enter' to continue"<<endl;
            getchar();
        }
        system("clear");
        menu.show();
        choice = getchar();
        getchar();
    }
    cout << "Please come again!" << endl;
    return 0;
}