// OOP-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Waffle
{
    char* name=nullptr;
    double weight=0;
    double eprice=0;
    double cprice=0;
public:
    Waffle() {};
    Waffle(const char* name,double weight, double eprice, double cprice )
    {
        setname(name);
        setweight(weight);
        seteprice(eprice);
        setcprice(cprice);
    
    }

    void setname( const char* name)
    {
        //asc
        //vv
        if (this->name != name) {
            return;
        }
        if (!(name == nullptr)) {
            delete[]name;
        }
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    
    }
    char* getname(char* name) const 
    {
        return name;
    
    }
    double getweight(double weight) const
    {
        return weight;
    
    }
    double geteprice(double eprice) const
    {
        return eprice;

    }
    double getcprice(double cprice) const
    {
        return cprice;

    }
     void seteprice( double eprice)
    {
        this->eprice = eprice;
    
    }
    void setweight(double weight)
    {
        this->weight = weight;

    }
    void setcprice(double weight)
    {
        this->cprice = cprice;

    }
    void free()
    {
        delete[] name;
    
    }
};
class Market
{
    Waffle* waffles = nullptr;
    size_t size=0;
    size_t capacity = 0;
    size_t maxnumwaffle=0;
    double income=0;
    double expenses=0;
public:
    Market() = default;
    Market(Waffle* waffles, int maxnumwaffle, double prihodi, double razhodi)
    {
        setmaxnum(maxnumwaffle);
        setincome(income);
        setexpenses(expenses);
    
    }
    void setwaffles(const Waffle* waffles, size_t capacity)
    {
        this->waffles = new Waffle[capacity];
    }
    void setmaxnum(size_t maxnumwaffle)
    {
        this->maxnumwaffle = maxnumwaffle;
    }
    void setincome(double income)
    {
        this->income = income;
    }
    void setexpenses(double expenses)
    {
        this->expenses =expenses;
    }
    size_t getmaxwaf(size_t maxnumwaffle) const
    {
        return maxnumwaffle;
    
    }
    double
};

int main()
{
    Waffle waffle;
    
}


