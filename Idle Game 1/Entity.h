#pragma once
#include <SFML/Graphics.hpp>

class Entity {
private:
	sf::Sprite sprite;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;

	std::string name;

public:
	Entity();
	Entity(std::string name, sf::Texture texture);


	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);

	std::string getName();
};

