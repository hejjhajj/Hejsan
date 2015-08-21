#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <iostream>
#include <Windows.h>
#include "menu.h"
int cheat;

using namespace std;

int main(int argc, const char * argv[]){
	

	


	sf::RenderWindow window(sf::VideoMode(600, 600), "0.0.1.2 alpha", sf::Style::Fullscreen);
	Menu menu(window.getSize().x, window.getSize().y);
	bool isFullscreen = true;

	sf::SoundBuffer soundBuffer;
	sf::Music music;

	if (!music.openFromFile("main.ogg"))
	{
		std::cout << "cant find";
	}

	sf::SoundBuffer buffer;
	sf::Sound sound;
	if (!buffer.loadFromFile("mariojump.wav"))
	{
		std::cout << "cant find";
	}
	sound.setBuffer(buffer);

	sf::Texture Texture;
	Texture.loadFromFile("boshy1.png");
	sf::Sprite Sprite;
	Sprite.setTexture(Texture);
	Sprite.setPosition(150.f, 300.f);

	sf::Texture Texture2;
	Texture2.loadFromFile("boshymenu.jpg");
	sf::Sprite Sprite2;
	Sprite2.setTexture(Texture2);
	Sprite2.setPosition(0.f, 0.f);
	Sprite2.scale(sf::Vector2f(5, 4.4));
	

	sf::RectangleShape rectangle;
	rectangle.setSize(sf::Vector2f(1400, 3));;
	rectangle.setPosition(0.f, 670.f);

	sf::RectangleShape rectangle2;
	rectangle2.setSize(sf::Vector2f(300, 3));;
	rectangle2.setPosition(0.f, 550.f);

	sf::RectangleShape rectangle3;
	rectangle3.setSize(sf::Vector2f(300, 3));;
	rectangle3.setPosition(300.f, 360.f);


	bool gameRunning = true;
	int speed = 1;
	int i = 0;
	int K = 0;
	int S = 0;
	int J = 0;
	int P = 0;
	int F = 0;
	int Jump = 0;
	int map = 0;
	int mu = 0;
	int air = 0;
	int Jum = 0;
	int so = true;

	while (window.isOpen()){

		if (map == 0 && mu == 0)
		{
			//music.play();
			mu++;
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			if (i == 1)
			{
				Sprite.scale(-1.f, 1.f);
				i--;
				Sprite.move(-30, 0);
			}
			Sprite.move(0.3, 0);
		}
		if (GetAsyncKeyState('Z'))
		{
			if (Jum == 0 && so == true)
			{
				sound.play();
				Jum = 1;
				so = false;
			}
			air = 1;
			if (P == 1)
			{
				if (GetAsyncKeyState('Z'))
				{
					if (Jum == 1 && so == true)
					{
						sound.play();
						Jum = 2;
						so = false;
					}
					air = 2;
					if (J < 200)
					{
						Sprite.move(0, -0.8);
					}
					else if (J < 300 && J >= 200)
					{
						Sprite.move(0, -0.6);
					}
					else if (J < 350 && J >= 300)
					{
						Sprite.move(0, -0.4);
					}
					else if (J < 400 && J >= 350)
					{
						Sprite.move(0, -0.2);
					}
					else if (J < 430 && J >= 400)
					{
						Sprite.move(0, 0);
					}
					if (J < 431)
					{
						J++;
					}
				}
			}
			if (S < 200 && J < 1 && Jump == 0)
			{
				Sprite.move(0, -1);
			}
			else if (S < 300 && S >= 200 && J < 1)
			{
				Sprite.move(0, -0.8);
			}
			else if (S < 350 && S >= 300 && J < 1)
			{
				Sprite.move(0, -0.6);
			}
			else if (S < 400 && S >= 350 && J < 1)
			{
				Sprite.move(0, -0.5);
			}
			else if (S < 450 && S >= 400 && J < 1)
			{
				Sprite.move(0, -0.4);
			}

			else if (S < 500 && S >= 450 && J < 1)
			{
				Sprite.move(0, -0.2);
			}
			else if (S < 520 && S >= 500 && J < 1)
			{
				Sprite.move(0, 0);
			}

			if (S < 521)
			{
				S++;
			}
			if (S == 520)
			{
				Jump = 1;
			}
			

		}
		
		if (!GetAsyncKeyState('Z') && J > 0 && J < 400 && air == 2 || !GetAsyncKeyState('Z') && S > 0 && S < 380 && air == 1)
			{
				if (F < 100)
				{
					Sprite.move(0, -0.6);
				}
				else if (F < 140 && F >= 100)
				{
					Sprite.move(0, -0.5);
				}
				else if (F < 190 && F >= 140)
				{
					Sprite.move(0, -0.4);
				}
				else if (F < 300 && F >= 190)
				{
					Sprite.move(0, -0.2);
				}
				else if (F < 320 && F >= 300)
				{
					Sprite.move(0, 0);
				}
			
				if (F < 321)
				{
					F++;
				}
			}

		if (!GetAsyncKeyState('Z') && S < 450 && S > 400 && air == 1 || !GetAsyncKeyState('Z') && J < 350 && J > 300 && air == 2)
		{
			if (F < 100)
			{
				Sprite.move(0, -0.4);
			}
			else if (F < 140 && F >= 100)
			{
				Sprite.move(0, -0.2);
			}
			else if (F < 160 && F >= 140)
			{
				Sprite.move(0, 0);
			}

			if (F < 160)
			{
				F++;
			}
		}

		

		if (GetAsyncKeyState(VK_LEFT))
		{
			if (i == 0)
			{
				Sprite.scale(-1.f, 1.f);
				i++;
				Sprite.move(30, 0);
			}
			Sprite.move(-0.3, 0);
			
			
		}
		
		

		sf::Event event;

		while (window.pollEvent(event))
		{

			switch (event.type)
			{
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Escape:
					if (true == isFullscreen)
					{
						window.create(sf::VideoMode(600, 600), "i wanna be the boshy!", sf::Style::Default);
						isFullscreen = false;
						
					}
					else
					{
						window.create(sf::VideoMode(600, 600), "i wanna be the boshy!", sf::Style::Fullscreen);
						isFullscreen = true;
					}

				
					case sf::Keyboard::Z:
						P = 1;
						Jump = 0;
						so = true;
						

					
					
					
					break;
				
				case sf::Keyboard::Up:
					menu.MoveUp();
					break;
				case sf::Keyboard::Down:
					menu.MoveDown();
					break;
				case sf::Keyboard::Return:
					window.clear();
					break;
				

					

				
				}
			

				

			}
			
		}
		if (Sprite.getGlobalBounds().intersects(rectangle3.getGlobalBounds()))
		{
			S = 0;
			J = 0;
			P = 0;
			F = 0;
			Jum = 0;
		}

		else if (Sprite.getGlobalBounds().intersects(rectangle2.getGlobalBounds()))
		{
			S = 0;
			J = 0;
			P = 0;
			F = 0;
			Jum = 0;
		}

		else if (Sprite.getGlobalBounds().intersects(rectangle.getGlobalBounds()))
		{
			S = 0;
			J = 0;
			P = 0;
			F = 0;
			Jum = 0;
		}
		else
		{
			Sprite.move(sf::Vector2f(0, 0.5));
		}
		
		
		
		
		window.clear();
		window.draw(Sprite2);
		menu.draw(window);
		window.draw(rectangle);
		window.draw(rectangle2);
		window.draw(rectangle3);
		window.draw(Sprite);
		window.display();
		
		
		
		
		
		
		
		

	}



}