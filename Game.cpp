#include "Game.h"

//Static functions

//Initializer functions
void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode({ 200, 200 }), "SFML works!");
}

//Constuctors/Destructors

Game::Game(){
    this->initWindow();
}

Game::~Game()
{
	delete this->window;
}


//Functions 

void Game::updateSFMLEvents()
{
    while (const std::optional event = window->pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            this->window->close();
        }
    }
}


void Game::update()
{
    this->updateSFMLEvents();
}

void Game::render()
{
    //This function will clear the window and written it over with a new thing, here that is the color blue
    window->clear(sf::Color::Blue);

    //Display everything u draw on the window
    window->display();
}

void Game::run()
{
    while (this->window->isOpen())
    {
        this->updateDT();
        this->update();
        this->render();
    }
}

void Game::updateDT()
{
    //Updates the dt variable will hold the time it takes to render and update one frame
    this->dt = dtClock.restart().asSeconds();
    system("cls"); 
    std::cout << dt << std::endl;
}
