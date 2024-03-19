////////////////////////////////////////
//
// Name: Salim Dhahri & Tanner Cassell
// Date: 12/16/2021
// Course Code: CS-171-03
//
// Copyright (C) Salim Dhahri 2021
//
//
//
////////////////////////////////////////

#include <iostream> //Used for both input and output to the terminal
#include <player.h>
#include <team.h>
#include <game.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{ //start of main() function

    srand(time(NULL)); //Seeds random time

    Team t1("Galaxy Wipers ");                     // Team of 5 players (an array of 5 'Player' objects)
    t1.addPlayer(Player(1, "Salim Dhahri"), 0);    //Attributing The Point Guard "Salim Dhahri"
    t1.addPlayer(Player(2, "Kanye West"), 1);      //Attributing The Shooting Guard "Kanye West"
    t1.addPlayer(Player(3, "Scott Griffith"), 2);  //Attributing The Small forward "Scott Griffith"
    t1.addPlayer(Player(4, "Aubrey Drake"), 3);    //Attributing The Power Forward "Aubrey Drake"
    t1.addPlayer(Player(5, "Stephen Hawking"), 4); //Attributing The Center "Stephen Hawking"

    Team t2("Washington Wallabees ");             // Team of 5 players (an array of 5 'Player' objects)
    t2.addPlayer(Player(1, "Tanner Cassell"), 0); //Attributing The Point Guard "Tanner Cassell"
    t2.addPlayer(Player(2, "Elon Musk"), 1);      //Attributing The Shooting Guard "Elon Musk"
    t2.addPlayer(Player(3, "Bill Gates"), 2);     //Attributing The Small Forward "Bill Gates"
    t2.addPlayer(Player(4, "Ryan Reynolds"), 3);  //Attributing The Power forward "Ryan Reynolds"
    t2.addPlayer(Player(5, "Tom Cruise"), 4);     //Attributing The Center "Tom Cruise"

    Game game = Game();
    while ((t1.getWin() < 4) && (t2.getWin() < 4)) //The series is made of 7 games but the first team who gets 4 wins, wins the finals
    {
        game.playGame(t1, t2); //play the game every time
        t1.getStats();         //Team 1 Gets there stats
        t2.getStats();         //Team 2 Gets there stats
        t1.refresh();          //Team 1 Refreshes there stats
        t2.refresh();          //Team 2 Refreshes there stats
    }

    cout << endl;
    cout << endl;

    if (t1.getWin() == 4) //if team 1 gets first 4  wins then it's the winner
    {
        cout << t1.name << "Won the Finals"; //If team 2  won they get "Won the Finals"
    }
    else if (t2.getWin() == 4) //if team 2 gets first 4 wins then it's the winner
    {
        cout << t2.name << "Won the Finals"; //If team 2 won they get "Won the finals"
    }

    cout << endl;
    cout << endl;
}

//End of main() function