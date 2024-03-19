#include <player.h>

//Behavior:
Player::Player()
{                 //Default Constructor
    name = "?";   // Name of the Player
    points = 0;   // Points scored by the player
    assists = 0;  // Assists recorded by the player
    blocks = 0;   // Blocks recorded by the player
    steals = 0;   // Steals recorded by the player
    rebounds = 0; // Rebounds recorded by the player
}

Player::Player(int ptype, string pname)
{

    name = pname;
    playerType = ptype;
    position = p[ptype - 1]; //the player type
    refreshStats(ptype);     //Refresh the players stats based on player type
}

string Player::getName()
{
    return name; //Full name
}

string Player::getPosition()
{
    return position; //player's position
}
//Getting the points scored by the player each game
// return. Number of Points
int Player::getPoints()
{
    return points; //Total points
}
//Getting the assists recorded by the player each game
// Return. Number of Assists
int Player::getAssists()
{
    return assists; //Total assists
}
//Getting the Blocks recorded by the player each game
// Return. Number of Blocks
int Player::getBlocks()
{
    return blocks; //Total blocks
}
//Getting the Steals recorded by the player each game
// Return. Number of Steals
int Player::getSteals()
{
    return steals; //Total steals
}
//Getting the Rebounds recorded by the player each game
// Return. Number of Rebounds
int Player::getRebounds()
{
    return rebounds; //Total rebounds
}

//Refreshes the players' stats after each game to make things convenient
//Cin function
void Player::refreshStats(int ptype)

{
    if (ptype == 1)
    {
        points = rand() % 20 + 20; //Attributing the number of Points to the Point Gaurd 1 & 2
        assists = rand() % 4 + 6;  //Attributing the number of Assists to the Point Gaurd 1 & 2
        blocks = rand() % 2;       //Attributing the number of Blocks to the Point Gaurd 1 & 2
        steals = rand() % 5;       //Attributing the number of Steals to the Point Gaurd 1 & 2
        rebounds = rand() % 5;     //Attributing the number of Rebounds to the Point Gaurd 1 & 2
    }
    else if (ptype == 2)
    {
        points = rand() % 20 + 20; //Attributing the number of Points to the Shooting Guard 1 & 2
        assists = rand() % 5 + 2;  //Attributing the number of Assists to the Shooting Guard 1 & 2
        blocks = rand() % 3;       //Attributing the number of Blocks to the Shooting Guard 1 & 2
        steals = rand() % 2;       //Attributing the number of Steals to the Shooting Guard 1 & 2
        rebounds = rand() % 8 + 2; //Attributing the number of Rebounds to the Shooting Guard 1 & 2
    }
    else if (ptype == 3)
    {
        points = rand() % 16 + 16; //Attributing the number of Points to the Small Forward 1 & 2
        assists = rand() % 6 + 2;  //Attributing the number of Assists to the Small Forward 1 & 2
        blocks = rand() % 6;       //Attributing the number of Blocks to the Small Forward 1 & 2
        steals = rand() % 6;       //Attributing the number of Steals to the Small Forward 1 & 2
        rebounds = rand() % 4 + 6; //Attributing the number of Rebounds to the Small Forward 1 & 2
    }

    else if (ptype == 4)
    {
        points = rand() % 11 + 14; //Attributing the number of Points to the Power Forward 1 & 2
        assists = rand() % 3 + 2;  //Attributing the number of Assists to the Power Forward 1 & 2
        blocks = rand() % 10;      //Attributing the number of Blocks to the Power Forward 1 & 2
        steals = rand() % 7;       //Attributing the number of Steals to the Power Forward 1 & 2
        rebounds = rand() % 7 + 8; //Attributing the number of Rebounds to the Power Forward 1 & 2
    }

    else if (ptype == 5)
    {
        points = rand() % 10 + 10;   //Attributing the number of Points to the Center 1 & 2
        assists = rand() % 5;        //Attributing the number of Assists to the Center 1 & 2
        blocks = rand() % 7 + 3;     //Attributing the number of Blocks to the Center 1 & 2
        steals = rand() % 6 + 1;     //Attributing the number of Steals to the Center 1 & 2
        rebounds = rand() % 10 + 10; //Attributing the number of Rebounds to the Center 1 & 2
    }
}

string Player::getStats(string team) //Outputting the overall stats for each player during a single game
{
    return "The " + team + getPosition() + getName() + ": " + to_string(getPoints()) + " Points, " + to_string(getAssists()) + " Assists, " + to_string(getBlocks()) + " Blocks, " + to_string(getSteals()) + " Steals, " + to_string(getRebounds()) + " Rebounds";
}
