#ifndef GAME_H
#define GAME_H

#include "State.h"

class Game
{ 
private: 
	//Variables
	sf::RenderWindow *window;
	
	sf::Clock dtClock;
	float dt;



	//Initialization
	void initWindow();
public: 
	//Constuctors/Destructors
	Game();
	~Game();

	// Functions
	void updateSFMLEvents();
	void update();
	void render();
	void run();
	void updateDT();

};

#endif
