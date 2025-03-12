// OOP-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma warning(disable:4996)
#include <iostream>
const double EPS = 10e-7;
enum Subjects
{
Math,
English,
History,
Art



};
class Teacher
{
     char name[20];
    int age;
    Subjects subject;
    double salary;
    Teacher(const  char* name, int age, Subjects subject, double salary) :  subject(subject), salary(salary)
    {
        SetName(name);
        strcpy(this->name, name);
    
    }
public:
    void SetName(const char* name)
    {
        if (strlen(name) >= strlen(this->name)) 
        {
            return;
        }
    
    }
    char* GetName( char* name) const 
    {
        return this->name;
    
    }
    void SetAge(int age)
    {
        if (this->age <= 18 || this->age >= 70)
        {
            return;

        }
        this->age = age;

    }
    const int  GetAge(int age) const 
    {
        
        return this->age;
    
    }

    void SetSalary(double salary)
    {
        if (this->salary <=500-EPS)
        {
            return;

        }
        this->salary = salary;
    }
    const double GetSalary (double salary) const
    {
        return this->salary;

    }


};
int main()
{

    Teacher teacher("Gergana", 33, Math, 500);
    std::cout << "Hello World!\n";
}

