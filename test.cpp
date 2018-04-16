// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << "VOila!!" << i * j;
		}
	}
	system ( "pause" );
	
    return 0;
}

