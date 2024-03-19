#include <game.h> 
#include <team.h> //to have access to the team class
#include <iostream>

//Behavior:
Game::Game()
{                //Default Constructor
    gameNum = 0; //Current game number
}
//Start playing the games between the two teams
//Increments and ouputs the game number every time
//Highlights the game winner
void Game::playGame(Team &team1, Team &team2)
{
    int score1 = team1.getTotal();      //adding all team 1's 5 players' points scored during a single game to determine the team's final score
    int score2 = team2.getTotal();      //adding all team 2's 5 players' points scored during a single game to determine the team's final score
    gameNum++;                          //incrementing the game number each time a game is played
    cout << "Game " << gameNum << endl; //before each game, its' number is mentioned
    cout << endl;
    cout << team1.name << score1 << " - " << score2 << " " << team2.name << endl; //outputting the scores of the 2 teams during that game
    cout << endl;

    if (score1 > score2) //the team with the more points scored during a game is the winner
    {
        team1.addWin(); //each time team 1 wins, their win record increments
        cout << "The " << team1.name << " won this game" << endl;
    }
    else if (score2 > score1)
    {
        team2.addWin(); //each time team 2 wins, their win record increments
        cout << "The " << team2.name << " won this game" << endl;
    }
}
