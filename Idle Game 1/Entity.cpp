#include "Entity.h"

Entity::Entity()
	: sprite(), velocity(), acceleration() {
	name = "Unnamed Entity";
}

Entity::Entity(std::string name, sf::Texture texture)
	: sprite(texture), velocity(), acceleration() {
	this->name = name;
}

void Entity::Update(float deltaTime) {
	velocity += acceleration;
	sprite.move(velocity);
}

void Entity::Draw(sf::RenderWindow& window) {
	window.draw(sprite);
}

std::string Entity::getName() {
	return std::string();
}
