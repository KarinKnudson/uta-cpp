/*
 *  Problem1KCK.h
 *  
 *
 *  Created by Shorty Knudson on 9/16/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
using namespace std;

int main()
{
	int multiples = 0;
	int x = 1;
	
	//sum up all the numbers that are multiples of three but not five, and are less than 1000
	while (3*x <1000 ) {
		if ((3*x) % 5 !=0){
			//cout << 3*x<<"\n";
			multiples = multiples + 3*x;
		}
		x++;
	}
	
	//add to the previous sum all the numbers less than 1000 that are multiples of five
	x = 1;
	while (5*x < 1000) {
		multiples = multiples + 5*x;
		x++;
	}
	cout << multiples<<"\n";
	return 0;
}