#ifndef GAME_H
#define GAME_H

#include <string>
#include "./player.h" //to have access to the player class
#include "./team.h" //to have access to the team class
using namespace std;

//The function is a class for the game
//This makes the game run
//This is the way we calculate total points and add a win to who has more a the end of the game

class Game
{
public:
    Game();
    //Attributes:
    int gameNum; //Current game number

    //Behavior:

    //Start playing the games between the two teams
    //Increments and ouputs the game number every time
    //Highlights the game winner
    void playGame(Team &team1, Team &team2);
};

#endif
