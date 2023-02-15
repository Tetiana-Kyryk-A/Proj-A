// Proj-A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void print();
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    print(); // call  print
}

void print()
{
    cout << "I  am print()\n";
}
