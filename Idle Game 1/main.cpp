#include <SFML\Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 800), "Idle Game 1", sf::Style::Close | sf::Style::Titlebar);

	float deltaTime = 0.0f;
	sf::Clock clock;

	while (window.isOpen()) {
		deltaTime += clock.restart().asSeconds();

		sf::Event e;
		while (window.pollEvent(e)) {
			if (e.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear(sf::Color::White);



		window.display();
	}
	return 0;
}