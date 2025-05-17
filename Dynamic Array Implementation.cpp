// Dynamic Array Implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "clsDynamicArray.h";
using namespace std;

int main()
{
    clsDynamicArray<int> Array;

    cout << Array.Size() << endl;

    Array.Resize(10);

    cout << Array.Size() << endl;


}


