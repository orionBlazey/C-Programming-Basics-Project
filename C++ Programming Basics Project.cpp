// C++ Programming Basics Project.cpp : This is the "Distance per Tank of Gas" branch
//

#include <iostream>
using namespace std;

int main()
{
    double Tdistance, Hdistance, gallonsAmount, AMG1, AMG2;

    gallonsAmount = 20;
    AMG1 = 23.5;
    AMG2 = 28.9;
    Tdistance = gallonsAmount * AMG1;
    Hdistance = gallonsAmount * AMG2;

    cout << "On one tank of gas, the car can travel " << Tdistance << "miles in town and " << Hdistance << "miles on the highway\n";
    
}
