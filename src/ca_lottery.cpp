#include "../header/ca_lottery.hpp"

/**
 * @brief Display the menu to the customer for a selection
 * 
 */
void display_selection_menu() {
    cout << "For Mega Millions quick pick select:   '1'" << endl;
    cout << "For Power Ball quick pick select   :   '2'" << endl;
}

/**
 * @brief get which lotto the customer wants to buy
 * 
 * @return the type of lotto to generate. 
 */
int lotto_type() {
    int selection = 0; 
    
    while ( !(selection == 1 || selection == 2)) {
        display_selection_menu();
        cin >> selection; 

        if(!(selection == 1 || selection == 2)) {
            cout << "Wrong selection!" << endl;
        }

        if(!cin) {
            cin.clear();                // reset failbit  
            cin.ignore(255, '\n');      // skip bad input
            cout << "Please select from available options!" << endl;
        }
        cout << endl;
    }
    
    return selection;
}

/**
 * @brief  get the number of quick picks to generate from the customer
 * Note: limit to MAX_PICKS
 * @return the amount of requested quick picks  
 */
int num_quick_picks() {
    int quick_picks_amount = 0;
    
    while (quick_picks_amount < 1 || quick_picks_amount > MAX_PICKS) {
        cout << "Enter number of plays (";
        cout << MAX_PICKS << " is maximum plays): ";
        cin >> quick_picks_amount;

        if(quick_picks_amount < 1 || quick_picks_amount > MAX_PICKS) {
            cout << "Wrong input!" << endl;
        }

        if(!cin) {
            cin.clear();             // reset failbit
            cin.ignore(255, '\n');   // skip bad input
            cout << "Please input a number between 1 and ";
	        cout << MAX_PICKS << endl;
        }
        cout << endl;
    }

    return quick_picks_amount;
}

/**
 * @brief display the random generated quick picks  
 * 
 * @param range_1 the max number in the range to pick mega millions or powerball numbers  
 * @param range_2 the max number in the range to pick a Mega number or a Power number
 */
void display_quick_picks(int range_1, int range_2) {

    /* Variables */
    vector<int> my_picks;
    int number;

    /* Pick numbers for mega millions or powerball from 1 to range_1 */
    for(int i = 1 ; i <= NUMBERS; i++) {
        number = rand() % range_1 + 1;

        /* Check if number is already picked */
        if( find(my_picks.begin(), my_picks.end(), number) != my_picks.end()) {
                i -= 1;
        } else {
                my_picks.push_back(number);
        }
    }

    /* Sort the first 5 picks */
    sort(my_picks.begin(), my_picks.end());

    /* Pick mega or power number from 1 to range_2 */
    my_picks.push_back((rand() % range_2) + 1);

    /* Display the quick picks */
    for(vector<int>::iterator it = my_picks.begin(); it != my_picks.end(); it++) {
        cout << "\t" << *it;
    }
}
