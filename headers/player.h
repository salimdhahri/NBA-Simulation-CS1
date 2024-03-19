#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

//We are using the class funtion
//this is to describe the players within the team
//player has the stats to go towards the win and to see who wins the MVP

class Player
{
public:
    //Attributes:
    string name;
    string position;
    string p[5] = {"Point Guard ", "Shooting Guard ", "Small Forward ", "Power Forward ", "Center "};

    //Getting the points scored by the player in each game
    // return. Number of Points
    int points; //Total of Points scored in all the games

    //Getting the assists recorded by the player in each game
    // Return. Number of Assists
    int assists; //Total of assists (last pass before the goal) in all the games

    //Getting the Blocks recorded by the player in each game
    // Return. Number of Blocks
    int blocks; //Total Blocks (you making the other teams shot not go in) in all the games

    //Getting the Steals recorded by the player in each game
    // Return. Number of Steals
    int steals; //Total Steals (taking the ball from the other team) in all the games

    //Getting the rebounds recorded by the player each game
    // Return. Number of rebounds
    int rebounds; //Total Rebounds (getting the ball after a miss) in all the games

    //The type of player the player is Point guard, shooting gaurd, etc
    //Return. Player type
    int playerType; //Setting a number from 1 to 5 for each player type

    //Behavior:
    Player();
    Player(int ptype, string pname);

    //Refreshes the players' stats after each game to make things convenient
    //Cin function
    void refreshStats(int ptype);

    string getName(); //Gets the name of the Player depending on player type and team

    string getTeam(); //Get the name of the Team Depending of the player type and the Name of the Player

    string getPosition(); //Get the Player type Name of the player and team

    //Getting the points scored by the player in each game
    // return. Number of Points for the game
    int getPoints(); //How many points they score in a game based on the Player type

    //Getting the assists recorded by the player in each game
    // Return. Number of Assists
    int getAssists(); //How many Assists they get in a game based on the Player type

    //Getting the Blocks recorded by the player in each game
    // Return. Number of Blocks
    int getBlocks(); //How many Blocks they Get in a game based on the Player type

    //Getting the Steals recorded by the player in each game
    // Return. Number of Steals
    int getSteals(); //How many Steals they Get in a game based on the Player type

    //Getting the Rebounds recorded by the player in each game
    // Return. Number of Rebounds
    int getRebounds(); //How many rebounds they get in a game based on the player type

    string getStats(string team); //Outputting the overall stats for each player during a single game
};

#endif
