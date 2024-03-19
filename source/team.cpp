#include <team.h>

Team::Team()
{ //Default Constructor
    name = "?";
}
//Attributes
Team::Team(string teamName)
{
    name = teamName;
}

//add 5 players of different types to each team
void Team::addPlayer(Player n, int i)
{
    p[i] = n;
}


//refreshing the stats on each team
void Team::refresh()
{
    for (int i = 0; i < 5; i++)
    {
        p[i].refreshStats(p[i].playerType); //Refresh team stats
    }
}
void Team::getStats() //Get the team stats
{
    cout << endl;
    cout << "Players' Stats: " << endl; //Gets player stats and tells you after saying "Player stats"
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i].getStats(name);
        cout << endl;
    }
}
//Gets total points Scored in the game
//return. game score
int Team::getTotal()
{
    int totalScore = 0; //Score of game
    for (int i = 0; i < 5; i++)
    {
        totalScore += p[i].getPoints(); //Makeing points add into the score
        cout << endl;
    }
    return totalScore; //Returns the final score of the game
}

void Team::addWin() //Add a win to the winning team
{
    win++;
}
//Compares the total points and adds a win to the team with the higher score
//Return. Win to which team won said game
int Team::getWin() //Giving the win to the team with a +1 point
{
    return win;
}

