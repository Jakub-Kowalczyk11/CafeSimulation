#pragma once
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Product
{
    public:
    string title_{};
    float price_{};
    ~Product();
    Product(const string& title,const float price);
    const string& getTitle() const;
    const float getPrice() const;
    virtual void getInfo() = 0;
    virtual string returnInfo() = 0;
};