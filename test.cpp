// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			for (int k = 0; k < 10; ++k)
				cout << "Voila: " << i * j * k;
		}
	}
	system ( "pause" );
	
    return 0;
}

