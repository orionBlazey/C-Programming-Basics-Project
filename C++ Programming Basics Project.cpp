// C++ Programming Basics Project.cpp : This is the "Energy Drink Consumption" branch
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double totalCustomers, Ecustomer, Ccustomer;

    totalCustomers = 16500;
    Ecustomer = totalCustomers * 0.15;
    Ccustomer = Ecustomer * 0.58;

    cout << "The approximate number of customers purchasing one or more energy drinks is " << Ecustomer << " people.\n";
    cout << "The approximate amount of customers preferring citrus-flavored drinks is " << round(Ccustomer) << " people.\n";
}
