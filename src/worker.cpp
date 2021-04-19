#include <iostream>
#include "worker.h"
using namespace std;

Worker::Worker(): name_("Jakub"), surname_("Kowalczyk"), gender_("Male"), age_(20) {}

Worker::Worker(string name, string surname, string gender, int age): name_(name), surname_(surname),gender_(gender), age_(age)
{}

Worker::~Worker(){}

void Worker::getInfo() //wypisuuje informacje o pracowniku w terminalu
{
    cout << "Name: " << name_ << "\nSurname: " << surname_ << "\nGender: " << gender_ << "\nAge: " << age_ << endl;
}

string Worker::returnInfo() //zwraca imie i nazwisko pracownika by zapisac go w pliku "receipt.txt"
{
    return name_+" "+surname_;
}