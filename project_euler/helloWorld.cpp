/*
 *  HelloWord.cpp
 *  
 *
 *  Created by Shorty Knudson on 9/9/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
using namespace std;

int main ()
{
	cout << "Beep!  Give me a number and I'll add 10 to it: \a";
	int x;
	cin >> x;
	cout << x+10 << '\n';
	return 0;
}