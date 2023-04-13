#include "ca_lottery.cpp"

int main() 
{
    int game_type;
    int quick_picks_amount;
        
    /* Select type of Lotto*/
    game_type = lotto_type();

    /* Select number of quick picks sets to display */
    quick_picks_amount = num_quick_picks(MAX_PICKS);
    
    /* Randomize the seed for the rand function*/
    srand(time(0));
    
    switch (game_type) {
        case 1:
            cout << "Mega Millions numbers are: " << endl;
	        cout << "\t" << "     |-------------- NUMBERS --------------|";
            cout << "  " << "|MEGA|" << endl;
        
            for(int i = 1; i <= quick_picks_amount; i++){
                cout << "\t" << i << " :" ;
                display_quick_picks(MEGA_MILLION_NUMBERS_RANGE, MEGA_NUMBER_RANGE);
                cout << endl;
            }
            break;

        case 2:
            cout << "Power Ball numbers are: " << endl;
	        cout << "\t" << "     |-------------- NUMBERS --------------|";
            cout << "  " << "|POWER|" << endl;
        
            for(int i = 1; i <= quick_picks_amount; i++){
                cout << "\t" << i << " :";
                display_quick_picks(POWERBALL_NUMBERS_RANGE, POWER_NUMBER_RANGE);
                cout << endl;
            }
            break;
    
        default:
            cout << "Something Went Wrong!" << endl;
            break;
    } 
    cout << endl;

    return 0;
}
