<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
  <h1>Basketball Game Simulator</h1>

  <h2>Overview</h2>
  <p>This project is a simple basketball game simulator implemented in C++. It allows users to simulate a series of basketball games between two teams and determine the winner based on the outcomes of those games.</p>
  
  <h2>Features</h2>
  <ul>
      <li>Simulates basketball games between two teams.</li>
      <li>Each team consists of five players, each with different attributes such as points scored, assists, blocks, steals, and rebounds.</li>
      <li>The simulator calculates the total points scored by each team in a game and determines the winner based on the higher score.</li>
      <li>The series consists of a best-of-seven format, where the first team to win four games wins the finals.</li>
      <li>Player stats are randomized for each game, providing variability in each simulation.</li>
      <li>Outputs detailed game results and player statistics for each game.</li>
      <li>Provides a simple command-line interface for running the simulation.</li>
  </ul>

<h2>Components</h2>
<h3>main.cpp</h3>
<p>Main entry point of the program. It contains the <code>main</code> function which initializes teams, runs the game simulation, and determines the winner of the finals.</p>

<h3>game.h</h3>
<p>Contains the <code>Game</code> class responsible for managing the game simulation. Defines methods for playing games between teams and determining the winner.</p>

<h3>player.h</h3>
<p>Defines the <code>Player</code> class representing individual basketball players. Includes methods for initializing player attributes, refreshing player stats, and retrieving player statistics.</p>

<h3>team.h</h3>
<p>Defines the <code>Team</code> class representing basketball teams. Includes methods for adding players to a team, refreshing team stats, and retrieving team statistics.</p>

<h2>Usage</h2>
<ol>
    <li>Compile the program using a C++ compiler.</li>
    <li>Run the compiled executable.</li>
    <li>The program will simulate a series of basketball games between two predefined teams.</li>
    <li>After each game, it will display the game results and player statistics.</li>
    <li>The simulation will continue until one team wins four games and is declared the winner of the finals.</li>
</ol>
</body>
</html>
