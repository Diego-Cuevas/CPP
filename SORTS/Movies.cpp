//Diego Cuevas
/*This program saves twenty movies in a matrix 
(movie name and year of release). It has a menu
with three options: a) Shows movies from oldest
to newest. b) Shows movies from newest to oldest.
c) Shows movies from a specific year. Also, it
has the option to return to menu or exit the program*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int opt = 0;
    int year_release[20][3] = { {0, 2009}, {1, 2019}, {2, 1997}, {3,2015}, {4,2018}, {5,2021}, {6,2015},  {7,2019}, {8,2012}, {9,2015}, {10,2022},
                                {11,2019}, {12,2015}, {13,2018}, {14,2011}, {15,2017}, {16,2018}, {17,2013}, {18,2017}, {19,2018} };
    char name[20][45] = { "Avatar", "Avengers: Endgame", "Titanic", "Star Wars Episodio 7", "Avengers: Infinity War", "Spiderman: No Way Home",
                          "Jurassic World", "El rey Leon", "The Avengers", "Fast & Furius 7", "Top Gun: Maverick", "Frozen 2", "Avengers: Age of Ultron",
                          "Black Panther", "Harry Potter y las Reliquias de la Muerte 2", "Star Wars Episodio 8", "Jurassic World: El reino Caido",
                          "Frozen", "La bella y la bestia", "Los increible 2"};
    
    do
    {
        cout << "\t\tMovies\n\n1. Show movies from oldest to newest.\n2. Show movies from newest to oldest.\n3. Show by specific year.\n4. Exit.\n\nEnter option: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            for (int i = 0; i < 19; i++)
            {
                for (int j = 0; j < 19; j++)
                {
                    if (year_release[j][1] > year_release[j+1][1])
                    {   //Switch years
                        year_release[j][1] += year_release[j+1][1];
                        year_release[j+1][1] = year_release[j][1] - year_release[j+1][1];
                        year_release[j][1] -= year_release[j+1][1];
                        //Switch movies id
                        year_release[j][0] += year_release[j+1][0];
                        year_release[j+1][0] = year_release[j][0] - year_release[j+1][0];
                        year_release[j][0] -= year_release[j+1][0];
                    }
                }
                
            }
            
            for (int i = 0; i < 20; i++)
            {
                cout << i+1 << ".- " << name[(year_release[i][0])] << " (" << year_release[i][1] << ")." << endl;
            }
            
            break;
        case 2:
        for (int i = 0; i < 19; i++)
            {
                for (int j = 0; j < 19; j++)
                {
                    if (year_release[j][1] < year_release[j+1][1])
                    {   //Switch years
                        year_release[j][1] += year_release[j+1][1];
                        year_release[j+1][1] = year_release[j][1] - year_release[j+1][1];
                        year_release[j][1] -= year_release[j+1][1];
                        //Switch movies id
                        year_release[j][0] += year_release[j+1][0];
                        year_release[j+1][0] = year_release[j][0] - year_release[j+1][0];
                        year_release[j][0] -= year_release[j+1][0];
                    }
                }
                
            }
            
            for (int i = 0; i < 20; i++)
            {
                cout << i+1 << ".- " << name[(year_release[i][0])] << " (" << year_release[i][1] << ")." << endl;
            }
            
            break;
        case 3: {
            int year = 0, count = 0;
            cout << "Enter the year: ";
            cin >> year;

            for (int i = 0; i < 20; i++)
            {
                if (year == year_release[i][1])
                {
                    count++;
                    cout << count << ".- " << name[(year_release[i][0])] << " (" << year_release[i][1] << ")." << endl;
                }
                
            }

            cout << "Movies founded: " << count << endl;
            }
            break;
        case 4:
            cout << "See you..." << endl;
            break;
        default:
            cout << "Sorry but that isn't a option." << endl;
            break;
        }
        system("pause");
        system("cls");

    } while (opt != 4);
    
    return 0;
}
