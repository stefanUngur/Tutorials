// Tutorial1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
	for (int i = 0; i <= 1000; i++)
	{
		std::cout << rand() * i;
		getchar();
	}
}
