//Diego Cuevas
//Game: Guess the number. Game for two players.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int player1 = 0, player2 = 0, attemps = 5;

    cout << "\t\tGuess the number" << endl;
    cout << "Player 1 enter a number: ";
    cin >> player1;

    cout << "Player 2, lets go to guess the player 1 number!" << endl;

    do
    {
        cout << "Remaining attemps: " << attemps << endl;
        cout << "Enter a number: ";
        cin >> player2;

        if (player1 < player2)
        {
            cout << "The player 1 number is less. Try again..." << endl;
        }
        else if (player1 > player2)
        {
            cout << "The player 1 number is greater. Try again..." << endl;
        }
        else
        {
            cout << "Great job!!! You guess the number." << endl;
        }
        
        attemps--;

        if (attemps == 0)
        {
            cout << "You can't guess the number. The number was: " << player1;
            player1 = player2; //Kill the loop
        }
        
    } while (player1 != player2);
    
    return 0;
}
