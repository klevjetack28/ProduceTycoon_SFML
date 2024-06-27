#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <random>
#include <functional>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <vector>

int main()
{
	int window_width = 800;
	int window_height = 600;
	const int bpp = 32;

	// delta time variables
	sf::Clock clock;
	sf::Time elapsed = clock.restart();
	const sf::Time update_ms = sf::seconds(1.f / 165.f);

	// frametime variables
	int fps;
	int ft;
	sf::Clock frameTime;
	sf::Time previousTime = frameTime.getElapsedTime();
	sf::Time currentTime;

	sf::RenderWindow window(sf::VideoMode(window_width, window_height, bpp), "Produce Tycoon SFML", sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize);
	window.setVerticalSyncEnabled(true);

	// set the icon for the window
	sf::Image icon;
	if (icon.loadFromFile("Resources/Images/Produce/Tomato.png"))
	{
		window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
	}

	// load font
	sf::Font font;
	font.loadFromFile("arial.ttf");
	sf::Text text;
	text.setFont(font);
	text.setCharacterSize(12);
	text.setFillColor(sf::Color::White);
	text.setPosition(10, 10);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if ((event.type == sf::Event::Closed) ||
				((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)))
			{
				window.close();
				break;
			}
			// update if window is resized
			if (event.type == sf::Event::Resized)
			{
				sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
				window.setView(sf::View(visibleArea));

				// update width and height
				window_width = event.size.width;
				window_height = event.size.height;
			}
		}

		////// update //////
		elapsed += clock.restart();
		while (elapsed >= update_ms)
		{
			const auto delta = update_ms.asSeconds();

			elapsed -= update_ms;
		}

		window.clear(sf::Color(30, 30, 120));

		////// draw //////

		// get frame time and fps
		currentTime = frameTime.getElapsedTime();
		fps = 1.0f / (currentTime.asSeconds() - previousTime.asSeconds()); // the asSeconds returns a float
		ft = (currentTime.asMilliseconds() - previousTime.asMilliseconds());

		text.setString("fps: " + std::to_string(fps));
		text.setPosition(10, 10);
		window.draw(text);

		text.setString(std::to_string(ft) + " ms");
		text.setPosition(10, 30);
		window.draw(text);

		previousTime = currentTime;

		window.display();
	}

	return EXIT_SUCCESS;
}