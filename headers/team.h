#ifndef TEAM_H
#define TEAM_H
#include "./player.h" //to have access to the player class

#include <iostream>
#include <string>
using namespace std;

//funtion is the class
//used to make up the teams
//team is to make the players have somewhere to go and got the gam to work

class Team
{
public:
    //Attributes:
    Player p[5];
    string name;

    //Attributes
    Team();

    Team(string teamName);

    void addPlayer(Player n, int i); //add 5 players of different types to each team

    void refresh(); //refreshing the stats on each team

    void getStats(); //geting the stats on each team

    int getTotal(); //getting the total stats of each team

    int win = 0; //Number of wins

    void addWin(); //if they win they will add the win to the team so it increments by 1

    int getWin(); //This gives the win to the team with the most points of the 2
}

;

#endif