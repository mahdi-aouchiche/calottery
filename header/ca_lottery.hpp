#ifndef __CA_LOTTERY_HPP__
#define __CA_LOTTERY_HPP__

#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <cstdlib>
using namespace std;

// Pick 5 numbers and a 1 Mega or Power
const int NUMBERS = 5;              
// max quick picks per purchased ticket 
const int MAX_PICKS = 20;         	
// Mega Millions Rules
const int MEGA_MILLION_NUMBERS_RANGE = 70;  // 1 to 70
const int MEGA_NUMBER_RANGE = 25;			// 1 to 25
// Powerball Rules
const int POWERBALL_NUMBERS_RANGE = 69;		// 1 to 69
const int POWER_NUMBER_RANGE = 26; 		    // 1 to 26

void display_selection_menu();
void display_quick_picks(int,int);
int lotto_type();
int num_quick_picks(int);

#endif // __CA_LOTTERY_HPP__
