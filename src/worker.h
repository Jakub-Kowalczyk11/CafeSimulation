#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
    private:
    string name_;
    string surname_;
    string gender_;
    int age_;
    public:
    Worker();
    ~Worker();
    Worker(string name, string surname, string gender, int age);
    string returnInfo();
    void getInfo();
};