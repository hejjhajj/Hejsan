#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
	
	sf::RenderWindow window(sf::VideoMode(1366, 768), "SFML works!");
	
	sf::View view;
	view.reset(sf::FloatRect(6, 30, 1920, 1080));
	sf::Texture map;
	map.loadFromFile("tilemap.png");
	sf::Sprite Map;
	Map.setTexture(map);

	sf::Texture Cursor;
	Cursor.loadFromFile("cursor.png");
	sf::Sprite cursor;
	cursor.setTexture(Cursor);

	sf::Texture select;
	select.loadFromFile("oreselect.png");
	sf::Sprite Select;
	Select.setTexture(select);

	sf::Texture Bigselect;
	Bigselect.loadFromFile("3x3select.png");
	sf::Sprite bigselect;
	bigselect.setTexture(Bigselect);

	sf::Texture Ironinv;
	Ironinv.loadFromFile("inviron.png");
	sf::Sprite ironinve;
	ironinve.setTexture(Ironinv);
	ironinve.setScale(2, 2);

	sf::Texture Cog;
	Cog.loadFromFile("cog.png");
	sf::Sprite cog;
	cog.setTexture(Cog);
	cog.setScale(2, 2);

	sf::Sprite coginve;
	coginve.setTexture(Cog);
	coginve.setScale(2, 2);

	sf::Texture Pipe;
	Pipe.loadFromFile("pipe.png");
	sf::Sprite pipe;
	pipe.setTexture(Pipe);
	pipe.setScale(2, 2);

	sf::Sprite pipeinve;
	pipeinve.setTexture(Pipe);
	pipeinve.setScale(2, 2);

	sf::Texture Research;
	Research.loadFromFile("research.png");
	sf::Sprite research;
	research.setTexture(Research);
	research.setScale(2, 2);

	sf::Sprite researchinve;
	researchinve.setTexture(Research);
	researchinve.setScale(2, 2);

	sf::Texture Researchworld;
	Researchworld.loadFromFile("researchworld.png");
	sf::Sprite researchworld[100];

	sf::Texture Transportbeltworld;
	Transportbeltworld.loadFromFile("transportbelt.png");
	sf::Sprite transportbeltworld[100];

	sf::Texture Transportbelt;
	Transportbelt.loadFromFile("researchbelt.png");
	sf::Sprite transportbelt;
	transportbelt.setTexture(Transportbelt);
	transportbelt.setScale(2, 2);

	sf::Sprite transportbeltinve;
	transportbeltinve.setTexture(Transportbelt);
	transportbeltinve.setScale(2, 2);

	sf::Texture Minerworld;
	Minerworld.loadFromFile("minerworld.png");
	sf::Sprite minerworld[100];

	sf::Texture Minerinve;
	Minerinve.loadFromFile("miner.png");
	sf::Sprite minerinve;
	minerinve.setTexture(Minerinve);
	minerinve.setScale(2, 2);

	sf::Sprite Cminer;
	Cminer.setTexture(Minerinve);
	Cminer.setScale(2, 2);
	

	sf::Texture Pipeworld;
	Pipeworld.loadFromFile("pipeworld.png");
	sf::Sprite pipeworld[100];
	for (int i = 0; i < 100; i++)
	{
		minerworld[i].setTexture(Minerworld);
		pipeworld[i].setTexture(Pipeworld);
		researchworld[i].setTexture(Researchworld);
		transportbeltworld[i].setTexture(Transportbeltworld);
	}
	

	sf::Texture Circut;
	Circut.loadFromFile("circut.png");
	sf::Sprite circut;
	circut.setTexture(Circut);
	circut.setScale(2, 2);

	sf::Sprite circutinve;
	circutinve.setTexture(Circut);
	circutinve.setScale(2, 2);

	sf::Texture Science1;
	Science1.loadFromFile("sciencepack1.png");
	sf::Sprite science1;
	science1.setTexture(Science1);
	science1.setScale(2, 2);

	sf::Sprite Cscience1;
	Cscience1.setTexture(Science1);
	Cscience1.setScale(2, 2);

	sf::Texture Researchbar0;
	Researchbar0.loadFromFile("researchbar0%.png");
	sf::Sprite researchbar0;
	researchbar0.setTexture(Researchbar0);
	researchbar0.setScale(4, 5);

	sf::Sprite progressbar;
	progressbar.setTexture(Researchbar0);

	sf::Texture Researchbar10;
	Researchbar10.loadFromFile("researchbar10%.png");
	sf::Sprite researchbar10;
	researchbar10.setTexture(Researchbar10);
	researchbar10.setScale(4, 5);

	sf::Texture Researchbar20;
	Researchbar20.loadFromFile("researchbar20%.png");
	sf::Sprite researchbar20;
	researchbar20.setTexture(Researchbar20);
	researchbar20.setScale(4, 5);

	sf::Texture Researchbar30;
	Researchbar30.loadFromFile("researchbar30%.png");
	sf::Sprite researchbar30;
	researchbar30.setTexture(Researchbar30);
	researchbar30.setScale(4, 5);

	sf::Texture Researchbar40;
	Researchbar40.loadFromFile("researchbar40%.png");
	sf::Sprite researchbar40;
	researchbar40.setTexture(Researchbar40);
	researchbar40.setScale(4, 5);

	sf::Texture Researchbar50;
	Researchbar50.loadFromFile("researchbar50%.png");
	sf::Sprite researchbar50;
	researchbar50.setTexture(Researchbar50);
	researchbar50.setScale(4, 5);

	sf::Texture Researchbar60;
	Researchbar60.loadFromFile("researchbar60%.png");
	sf::Sprite researchbar60;
	researchbar60.setTexture(Researchbar60);
	researchbar60.setScale(4, 5);

	sf::Texture Researchbar70;
	Researchbar70.loadFromFile("researchbar70%.png");
	sf::Sprite researchbar70;
	researchbar70.setTexture(Researchbar70);
	researchbar70.setScale(4, 5);

	sf::Texture Researchbar80;
	Researchbar80.loadFromFile("researchbar80%.png");
	sf::Sprite researchbar80;
	researchbar80.setTexture(Researchbar80);
	researchbar80.setScale(4, 5);

	sf::Texture Researchbar90;
	Researchbar90.loadFromFile("researchbar90%.png");
	sf::Sprite researchbar90;
	researchbar90.setTexture(Researchbar90);
	researchbar90.setScale(4, 5);

	sf::Texture Researchbar100;
	Researchbar100.loadFromFile("researchbar100%.png");
	sf::Sprite researchbar100;
	researchbar100.setTexture(Researchbar100);
	researchbar100.setScale(4, 5);

	
	progressbar.setScale(4, 5);

	sf::Texture Copperinv;
	Copperinv.loadFromFile("invcopper.png");
	sf::Sprite copperinve;
	copperinve.setTexture(Copperinv);
	copperinve.setScale(2, 2);

	sf::Texture Copperwireinv;
	Copperwireinv.loadFromFile("invcopperwire.png");
	sf::Sprite copperwireinve;
	copperwireinve.setTexture(Copperwireinv);
	copperwireinve.setScale(2, 2);

	sf::Texture Researchbelt;
	Researchbelt.loadFromFile("researchbelt.png");
	sf::Sprite researchbelt;
	researchbelt.setTexture(Researchbelt);
	researchbelt.setScale(2, 2);

	
	sf::Texture Researchcar;
	Researchcar.loadFromFile("researchcar.png");
	sf::Sprite researchcar;
	sf::Sprite carinve;
	researchcar.setTexture(Researchcar);
	carinve.setTexture(Researchcar);
	researchcar.setScale(2, 2);
	carinve.setScale(2, 2);

	sf::Texture Carworld;
	Carworld.loadFromFile("car.png");
	sf::Sprite carworld[10];
	for (int i = 0; i < 10; i++)
	{
		carworld[i].setTexture(Carworld);
		carworld[i].setScale(4, 4);
	}
	

	sf::Sprite copperwire;
	copperwire.setTexture(Copperwireinv);
	copperwire.setScale(2, 2);

	sf::Texture iron;
	iron.loadFromFile("iron.png");
	sf::Sprite Iron[100];
	for (int i = 0; i < 70; i++)
	{
		Iron[i].setTexture(iron);
		Iron[i].setPosition(896 - 14 * i, 504);
		if (20 <= i && i < 35)
		{
			Iron[i].setPosition(1148 - 14 * i, 504 + 14);
		}
		if (35 <= i && i < 41)
		{
			Iron[i].setPosition(1302 - 14 * i, 504 + 28);
		}
		if (41 <= i && i < 60)
		{
			Iron[i].setPosition(1456 - 14 * i, 504 - 14);
		}
		if (60 <= i && i < 70)
		{
			Iron[i].setPosition(1652 - 14 * i, 504 - 28);
		}
	}

	sf::Texture Watertile;
	Watertile.loadFromFile("watertile.png");
	sf::Sprite watertile[100];
	for (int i = 1; i < 100; i++)
	{
		watertile[i].setTexture(Watertile);
		watertile[1].setPosition(294, 602);
		watertile[20].setPosition(280, 616);
		watertile[34].setPosition(266, 630);
		watertile[49].setPosition(252, 644);
		watertile[64].setPosition(238, 658);
		watertile[80].setPosition(224, 672);
		researchworld[i].setPosition(1000, 100);
		transportbeltworld[i].setPosition(1000, 100);
		
		pipeworld[i].setPosition(1000, 100);
		minerworld[i].setPosition(1000, 100);
		if (2 <= i && i < 20)
		{
			watertile[i].setPosition(watertile[i - 1].getPosition().x, watertile[i - 1].getPosition().y + 14);
		}
		if (21 <= i && i < 34)
		{
			watertile[i].setPosition(watertile[i - 1].getPosition().x, watertile[i - 1].getPosition().y + 14);
		}
		if (35 <= i && i < 49)
		{
			watertile[i].setPosition(watertile[i - 1].getPosition().x, watertile[i - 1].getPosition().y + 14);
		}
		if (50 <= i && i < 64)
		{
			watertile[i].setPosition(watertile[i - 1].getPosition().x, watertile[i - 1].getPosition().y + 14);
		}
		if (65 <= i && i < 80)
		{
			watertile[i].setPosition(watertile[i - 1].getPosition().x, watertile[i - 1].getPosition().y + 14);
		}
		if (81 <= i && i < 100)
		{
			watertile[i].setPosition(watertile[i - 1].getPosition().x, watertile[i - 1].getPosition().y + 14);
		}
	}

	sf::Texture copper;
	copper.loadFromFile("copper.png");
	sf::Sprite Copper[100];
	
	for (int i = 0; i < 70; i++)
	{
		Copper[i].setTexture(copper);
		Copper[i].setPosition(602 - 14 * i, 504);
		if (20 <= i && i < 35)
		{
			Copper[i].setPosition(854 - 14 * i, 504 + 14);
		}
		if (35 <= i && i < 41)
		{
			Copper[i].setPosition(1008 - 14 * i, 504 + 28);
		}
		if (41 <= i && i < 60)
		{
			Copper[i].setPosition(1162 - 14 * i, 504 - 14);
		}
		if (60 <= i && i < 70)
		{
			Copper[i].setPosition(1358 - 14 * i, 504 - 28);
		}
	}

	sf::Texture player;
	player.loadFromFile("player.png");
	sf::Sprite Player;
	Player.setTexture(player);
	Player.setPosition(960.f, 540.f);

	sf::Text irontext;
	sf::Text coppertext;
	sf::Text copperwiretext;
	sf::Text cogtext;
	sf::Text pipetext;
	sf::Text circuttext;
	sf::Text minertext;
	sf::Text researchtext;
	sf::Text science1text;
	sf::Text transportbelttext;
	sf::Text cartext;
	sf::Font font;
	if (!font.loadFromFile("arial.ttf"))
	{
		//error
	}
	transportbelttext.setColor(sf::Color::Red);
	transportbelttext.setFont(font);
	cartext.setColor(sf::Color::Red);
	cartext.setFont(font);
	minertext.setColor(sf::Color::Red);
	minertext.setFont(font);
	science1text.setColor(sf::Color::Black);
	science1text.setFont(font);
	irontext.setColor(sf::Color::Red);
	irontext.setFont(font);
	coppertext.setColor(sf::Color::Red);
	coppertext.setFont(font);
	cogtext.setColor(sf::Color::Red);
	cogtext.setFont(font);
	copperwiretext.setColor(sf::Color::Red);
	copperwiretext.setFont(font);
	circuttext.setColor(sf::Color::Red);
	circuttext.setFont(font);
	pipetext.setColor(sf::Color::Red);
	pipetext.setFont(font);
	researchtext.setColor(sf::Color::Red);
	researchtext.setFont(font);
		

	sf::Texture inventory;
	inventory.loadFromFile("inventory.png");
	sf::Sprite Inventory;
	Inventory.setTexture(inventory);
	Inventory.setScale(2, 2);

	sf::Texture Chooseresearch;
	Chooseresearch.loadFromFile("chooseresearch.png");
	sf::Sprite chooseresearch;
	chooseresearch.setTexture(Chooseresearch);
	chooseresearch.setScale(2, 2);

	sf::Texture Researchlab;
	Researchlab.loadFromFile("researchlab.png");
	sf::Sprite researchlab;
	researchlab.setTexture(Researchlab);
	researchlab.setScale(2, 2);
	int speed = 1;
	int ironore[100];
	int pipecol[100];
	int buildcol[100];
	int copperore[100];
	for (int i = 0; i < 70; i++)
	{
		ironore[i] = 1000;
		copperore[i] = 1000;
	}
	for (int i = 1; i < 100; i++)
	{
		pipecol[i] = false;
		buildcol[i] = false;
	}
	
	int pipedraw[100];
	int cardraw[10];
	int researchdraw[100];
	int transportdir[100];
	int transportbeltdraw[100];
	int minerdraw[100];
	for (int i = 0; i < 100; i++)
	{
		transportdir[i] = 0;
		pipedraw[i] = 0;
		minerdraw[i] = 0;
		researchdraw[i] = 0;
		transportbeltdraw[i] = 0;
	}
	for (int i = 0; i < 10; i++)
	{
		cardraw[i] = 0;
		carworld[i].setPosition(1000, 100);
	}
	int ironselected = false;
	int pipeselected = false;
	int pack1use = false;
	int minerinv = 0;
	int researchselected = false;
	int pipeitems = 1;
	int caritems = 1;
	int minerirontimer = 0;
	int minercoppertimer = 0;
	int researchitems = 1;
	int mineritems = 1;
	int transportbeltitems = 1;
	int copperselected = false;
	int progressbars = 0;
	int mining = false;
	int beltresearched = false;
	int carresearched = false;
	int carbuild = false;
	int pipebuild = true;
	int researchbuild = false;
	int transportbeltbuild = false;
	int minerbuild = false;
	int miningtimer = 0;
	int move = 0;
	int beltresearching = false;
	int carresearching = false;
	int researchbar = 0;
	int mousestate = 0;
	int item = 0;
	int pipepos[99];
	int carpos[9];
	int researchpos[99];
	int minerpos[99];
	int transportbeltpos[99];
	for (int i = 0; i < 9; i++)
	{
		carpos[i] = false;
	}
	for (int i = 0; i < 99; i++)
	{
		pipepos[i] = false;
		researchpos[i] = false;
		minerpos[i] = false;
		transportbeltpos[i] = false;
	}
	int movable = true;
	int inventorys = false;
	int researchlabs = false;
	int chooseresearchs = false;
	int transportinv = 0;
	int carinv = 10;
	int ironinv = 1000;
	int k = 0;
	int onentity = false;
	int moveup = true;
	int movedown = true;
	int researchtimer = 0;
	int moveleft = true;
	int researching = false;
	int moveright = true;
	int copperinv = 1000;
	int rotate = 0;
	int researchinv = 10;
	int copperwireinv = 0;
	int science1inv = 1000;
	int circutinv = 0;
	int pipeinv = 0;
	int coginv = 0;
	int playerposy = 540;
	int fps = 60;
	window.setFramerateLimit(fps);




	while (window.isOpen())
	{
		
		std::stringstream ssssssssssss;
		if (carinv < 1000)
		{
			ssssssssssss << carinv;
		}
		else if (carinv >= 1000)
		{
			ssssssssssss << carinv / 1000 << ".K";
		}
		cartext.setString(ssssssssssss.str().c_str());

		std::stringstream sssssssssss;
		if (minerinv < 1000)
		{
			sssssssssss << minerinv;
		}
		else if (transportinv >= 1000)
		{
			sssssssssss << minerinv / 1000 << ".K";
		}
		minertext.setString(sssssssssss.str().c_str());

		std::stringstream ssssssssss;
		if (transportinv < 1000)
		{
			ssssssssss << transportinv;
		}
		else if (transportinv >= 1000)
		{
			ssssssssss << transportinv / 1000 << ".K";
		}
		transportbelttext.setString(ssssssssss.str().c_str());

		std::stringstream sssssssss;
		if (science1inv < 1000)
		{
			sssssssss << science1inv;
		}
		else if (science1inv >= 1000)
		{
			sssssssss << science1inv / 1000 << ".K";
		}
		science1text.setString(sssssssss.str().c_str());

		std::stringstream sssssss;
		if (pipeinv < 1000)
		{
			sssssss << pipeinv;
		}
		else if (pipeinv >= 1000)
		{
			sssssss << pipeinv / 1000 << ".K";
		}
		pipetext.setString(sssssss.str().c_str());

		std::stringstream ssssssss;
		if (researchinv < 1000)
		{
			ssssssss << researchinv;
		}
		else if (researchinv >= 1000)
		{
			ssssssss << researchinv / 1000 << ".K";
		}
		researchtext.setString(ssssssss.str().c_str());

		std::stringstream ssssss;
		if (circutinv < 1000)
		{
			ssssss << circutinv;
		}
		else if (circutinv >= 1000)
		{
			ssssss << circutinv / 1000 << ".K";
		}
		circuttext.setString(ssssss.str().c_str());

		std::stringstream ss;
		if (ironinv < 1000)
		{
			ss << ironinv;
		}
		else if (ironinv >= 1000)
		{
			ss << ironinv / 1000 << ".K";
		}
		irontext.setString(ss.str().c_str());

		std::stringstream sss;
		if (copperinv < 1000)
		{
			sss << copperinv;
		}
		else if (copperinv >= 1000)
		{
			sss << copperinv / 1000 << ".K";
		}
		coppertext.setString(sss.str().c_str());

		std::stringstream sssss;
		if (copperwireinv < 1000)
		{
			sssss << copperwireinv;
		}
		else if (copperwireinv >= 1000)
		{
			sssss << copperwireinv / 1000 << ".K";
		}
		copperwiretext.setString(sssss.str().c_str());

		std::stringstream ssss;
		if (coginv < 1000)
		{
			ssss << coginv;
		}
		else if (coginv >= 1000)
		{
			ssss << coginv / 1000 << ".K";
		}
		cogtext.setString(ssss.str().c_str());

		float x_offset = window.getView().getCenter().x - window.getSize().x * .5f;
		float y_offset = window.getView().getCenter().y - window.getSize().y * .5f;
		
		if (GetAsyncKeyState('A') && movable == true && pipebuild == false && moveleft == true) //move sprites left
		{
			Player.move(-speed, 0);
			
			cursor.move(-speed, 0);

		}
		if (GetAsyncKeyState('S') && movable == true && pipebuild == false && movedown == true) //move sprites left
		{
			Player.move(0, speed);
			
			cursor.move(0, speed);
			playerposy = playerposy + speed;
		}
		if (GetAsyncKeyState('D') && movable == true && pipebuild == false && moveright == true) //move sprites right
		{
			Player.move(speed, 0);
			
			cursor.move(speed, 0);
		}
		if (GetAsyncKeyState('W') && movable == true && pipebuild == false && moveup == true) //move sprites up
		{
			Player.move(0, -speed);
			
			cursor.move(0, -speed);
			playerposy = playerposy - speed;
		}
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;



			case sf::Event::KeyPressed:
			{
				switch (event.key.code)
				{
				case sf::Keyboard::E: //if E is pressed
					if (researchlabs == true)
					{
						researchlabs = false;
						inventorys = false;
						break;
					}
					if (chooseresearchs == true)
					{
						inventorys = false;
						researchlabs = false;
						chooseresearchs = false;
						break;
					}
					if (inventorys == true)
					{
						inventorys = false;
						researchlabs = false;
					}
					else if (inventorys == false && researchlabs == false && chooseresearchs == false)
					{
						inventorys = true;
					}
				}

				switch (event.key.code)
				{
				case sf::Keyboard::T: //if T is pressed
					if (researchlabs == true)
					{
						researchlabs = false;
						inventorys = false;
						chooseresearchs = true;
					}
					if (inventorys == true)
					{
						inventorys = false;
						researchlabs = false;
						chooseresearchs = true;
					}
					if (chooseresearchs == true)
					{
						inventorys = false;
						researchlabs = false;
						chooseresearchs = false;
					}
					else if (inventorys == false && researchlabs == false && chooseresearchs == false)
					{
						chooseresearchs = true;
					}
				}
				switch (event.key.code)
				{
				case sf::Keyboard::R: //if R is pressed
					if (rotate < 270)
					{
						rotate += 90;
					}
					else
					{
						rotate = 0;
					}
					transportbeltworld[0].rotate(90);
					carworld[0].rotate(90);
					
				}

					break;
			}
			}
		}
		
		sf::Vector2f mouse_pos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
		view.setCenter(Player.getPosition().x + 12, Player.getPosition().y + 25);
		cursor.setPosition(mouse_pos); //sprite dot follow mouse
		for (int i = 0; i < 100; i++)
		{
			if (cursor.getGlobalBounds().intersects(Iron[i].getGlobalBounds()) && ironore[i] > 0) //if cursor intersect iron ores
			{
				ironselected = true;
				Select.setPosition(Iron[i].getPosition().x, Iron[i].getPosition().y);
				break;
			}
			else
			{
				ironselected = false;
			}
		}
		for (int i = 0; i < 100; i++)
		{
			if (cursor.getGlobalBounds().intersects(Copper[i].getGlobalBounds()) && copperore[i] > 0) //if cursor intersect copper ores
			{
				copperselected = true;
				Select.setPosition(Copper[i].getPosition().x, Copper[i].getPosition().y);
				break;
			}
			else
			{
				copperselected = false;
			}
		}
		for (int i = 0; i < 100; i++)
		{
			if (cursor.getGlobalBounds().intersects(pipeworld[i].getGlobalBounds())) //if cursor intersect pipeworld
			{
				pipeselected = true;
				Select.setPosition(pipeworld[i].getPosition().x, pipeworld[i].getPosition().y);
				break;
			}
			else
			{
				pipeselected = false;
			}
			if (cursor.getGlobalBounds().intersects(researchworld[i].getGlobalBounds()))
			{
				
				researchselected = true;
				bigselect.setPosition(researchworld[i].getPosition().x, researchworld[i].getPosition().y);
				break;
			}
			else
			{
				researchselected = false;
			}
		}
		
		
		
		if (GetAsyncKeyState(VK_LBUTTON) & 0x8000 && ironselected == true || GetAsyncKeyState(VK_LBUTTON) & 0x8000 && copperselected == true) // while Lmouse is down
		{
			movable = false;
			mining = true;
		}
		else
		{
			mining = false;
			movable = true;
		}

		for (int i = 0; i < 100; i++)
		{
			if (miningtimer == 1 && mining == true && cursor.getGlobalBounds().intersects(Iron[i].getGlobalBounds()))
			{
				
				if (ironinv == 0)
				{
					item = 1;
				}
				miningtimer = 0;
				if (ironore[i] >= 0)
				{
					ironore[i]--;
					ironinv++;
				}
			}
		}
		for (int i = 0; i < 100; i++)
		{
			if (miningtimer == 1 && mining == true && cursor.getGlobalBounds().intersects(Copper[i].getGlobalBounds())) // gather selected copper ores
			{
				
				if (copperinv == 0)
				{
					item = 2;

				}
				miningtimer = 0;
				if (copperore[i] > 0)
				{
					copperinv++;
					copperore[i]--;
				}
			}
		}
		if (mining == true)
		{
			miningtimer++;
		}
		
		if (GetKeyState(VK_LBUTTON) & 0x8000)
		{
			if (mousestate == 0)
			{
				mousestate = 1;
				if (ironinv >= 4 && cursor.getGlobalBounds().intersects(cog.getGlobalBounds()))
				{
					ironinv -= 4;
					coginv++;
				}
				if (copperinv >= 4 && cursor.getGlobalBounds().intersects(copperwire.getGlobalBounds()))
				{
					copperinv -= 4;
					copperwireinv++;
				}
				if (copperwireinv >= 4 && coginv >= 4 && cursor.getGlobalBounds().intersects(circut.getGlobalBounds()))
				{
					coginv -= 4;
					copperwireinv -= 4;
					circutinv++;
				}
				if (ironinv >= 3 && cursor.getGlobalBounds().intersects(pipe.getGlobalBounds()))
				{
					ironinv -= 3;
					pipeinv++;
				}
				if (circutinv >= 1 && coginv >= 2 && ironinv >= 5 && cursor.getGlobalBounds().intersects(Cminer.getGlobalBounds()))
				{
					ironinv -= 5;
					circutinv -= 1;
					coginv -= 2;
					minerinv++;
				}
				if (inventorys == true && researchbuild == true && cursor.getGlobalBounds().intersects(Inventory.getGlobalBounds()) ||
					inventorys == true && pipebuild == true && cursor.getGlobalBounds().intersects(Inventory.getGlobalBounds()) ||
					inventorys == true && transportbeltbuild == true && transportbeltworld[0].getGlobalBounds().intersects(Inventory.getGlobalBounds()) ||
					inventorys == true && minerbuild == true && minerworld[0].getGlobalBounds().intersects(Inventory.getGlobalBounds()) ||
					inventorys == true && carbuild == true && carworld[0].getGlobalBounds().intersects(Inventory.getGlobalBounds()))
				{
					pipebuild = false;
					researchbuild = false;
					transportbeltbuild = false;
					minerbuild = false;
					carbuild = false;
				}
				if (pipebuild == false && cursor.getGlobalBounds().intersects(pipeinve.getGlobalBounds()))
				{
					pipebuild = true;
				}
				if (carbuild == false && cursor.getGlobalBounds().intersects(carinve.getGlobalBounds()))
				{
					carbuild = true;
				}
				if (researchbuild == false && cursor.getGlobalBounds().intersects(researchinve.getGlobalBounds()))
				{
					researchbuild = true;
				}
				if (transportbeltbuild == false && cursor.getGlobalBounds().intersects(transportbeltinve.getGlobalBounds()))
				{
					transportbeltbuild = true;
				}
				if (minerbuild == false && cursor.getGlobalBounds().intersects(minerinve.getGlobalBounds()))
				{
					minerbuild = true;
				}
				if (ironinv >= 5 && copperinv >= 5 && circutinv >= 5 && cursor.getGlobalBounds().intersects(research.getGlobalBounds()))
				{
					circutinv -= 5;
					ironinv -= 5;
					copperinv -= 5;
					researchinv++;
				}
				if (coginv >= 1 && copperinv >= 1 && cursor.getGlobalBounds().intersects(Cscience1.getGlobalBounds()))
				{
					coginv -= 1;
					copperinv -= 1;
					science1inv += 1;
				}
				if (coginv >= 1 && ironinv >= 1 && cursor.getGlobalBounds().intersects(transportbelt.getGlobalBounds()))
				{
					coginv -= 1;
					ironinv -= 1;
					transportinv += 2;
				}
				if (carresearched == true && coginv >= 10 && ironinv >= 100 && circutinv >= 20 && transportinv >= 10 && cursor.getGlobalBounds().intersects(researchcar.getGlobalBounds()))
				{
					coginv -= 10;
					ironinv -= 100;
					circutinv -= 20;
					carinv += 1;
				}
				if (cursor.getGlobalBounds().intersects(researchbelt.getGlobalBounds()) && researchitems > 1)
				{
					beltresearching = true;
				}
				if (carresearched == false && cursor.getGlobalBounds().intersects(researchcar.getGlobalBounds()) && researchitems > 1 && beltresearched == true)
				{
					carresearching = true;
				}
				if (carresearched == false && cursor.getGlobalBounds().intersects(researchcar.getGlobalBounds()) && researchlabs == true)
				{
					carresearching = false;
					researchcar.setScale(2, 2);
				}
				if (cursor.getGlobalBounds().intersects(researchbelt.getGlobalBounds()) && researchlabs == true)
				{
					beltresearching = false;
					researchbelt.setScale(2, 2);
				}
			}
			
		}
		else if (GetKeyState(VK_RBUTTON) & 0x8000)
		{
			if (mousestate == 0)
			{
				mousestate = 1;
				if (ironinv >= 20 && cursor.getGlobalBounds().intersects(cog.getGlobalBounds()))
				{
					ironinv -= 20;
					coginv += 5;
				}
				if (copperinv >= 20 && cursor.getGlobalBounds().intersects(copperwire.getGlobalBounds()))
				{
					copperinv -= 20;
					copperwireinv += 5;
				}
				if (copperwireinv >= 20 && coginv >= 20 && cursor.getGlobalBounds().intersects(circut.getGlobalBounds()))
				{
					coginv -= 20;
					copperwireinv -= 20;
					circutinv += 5;
				}
				if (circutinv >= 5 && coginv >= 10 && ironinv >= 50 && cursor.getGlobalBounds().intersects(Cminer.getGlobalBounds()))
				{
					ironinv -= 50;
					circutinv -= 5;
					coginv -= 10;
					minerinv += 5;
				}
				if (ironinv >= 15 && cursor.getGlobalBounds().intersects(pipe.getGlobalBounds()))
				{
					ironinv -= 15;
					pipeinv += 5;
				}
				if (pipebuild == true && pipeinv > 0 && onentity == false)
				{
					if (pipepos[pipeitems] == false)
					{
						pipeworld[pipeitems].setPosition(sf::Mouse::getPosition().x / 14 * 14 - 8 + x_offset, sf::Mouse::getPosition().y / 14 * 14 - 30 + y_offset);
					}
						pipepos[pipeitems] = true;
						pipedraw[pipeitems] = 1;
						if (pipeitems < 100)
						{
							pipeitems++;
							pipeinv--;
						}
				}
				if (carbuild == true && carinv > 0 && onentity == false)
				{
					if (carpos[caritems] == false)
					{
						if (rotate == 0)
						{
							carworld[transportbeltitems].setPosition(mouse_pos.x, mouse_pos.y);
							carworld[transportbeltitems].rotate(rotate);
						}
						if (rotate == 90)
						{
							carworld[transportbeltitems].setPosition(mouse_pos.x, mouse_pos.y);
							carworld[transportbeltitems].rotate(rotate);
						}
						if (rotate == 180)
						{
							carworld[transportbeltitems].setPosition(mouse_pos.x, mouse_pos.y);
							carworld[transportbeltitems].rotate(rotate);
						}
						if (rotate == 270)
						{
							carworld[transportbeltitems].setPosition(mouse_pos.x, mouse_pos.y);
							carworld[transportbeltitems].rotate(rotate);
						}
					}
					carpos[caritems] = true;
					cardraw[caritems] = 1;
					if (caritems < 10)
					{
						caritems++;
						carinv--;
					}
				}
				
				if (researchbuild == true && researchinv > 0 && onentity == false)
				{
					if (researchpos[researchitems] == false)
					{
						researchworld[researchitems].setPosition(sf::Mouse::getPosition().x / 14 * 14 - 8 + x_offset, sf::Mouse::getPosition().y / 14 * 14 - 30 + y_offset);
					}
					researchpos[researchitems] = true;
					researchdraw[researchitems] = 1;
					if (researchitems < 100)
					{
						researchitems++;
						researchinv--;
					}
				}

				if (minerbuild == true && minerinv > 0 && onentity == false)
				{
					if (minerpos[mineritems] == false)
					{
						minerworld[mineritems].setPosition(sf::Mouse::getPosition().x / 14 * 14 - 8 + x_offset, sf::Mouse::getPosition().y / 14 * 14 - 30 + y_offset);
					}
					minerpos[mineritems] = true;
					minerdraw[mineritems] = 1;
					if (mineritems < 100)
					{
						mineritems++;
						minerinv--;
					}
				}

				if (transportbeltbuild == true && transportinv > 0 && onentity == false)
				{
					if (transportbeltpos[transportbeltitems] == false)
					{
						if (rotate == 0)
						{
							transportbeltworld[transportbeltitems].setPosition(sf::Mouse::getPosition().x / 28 * 28 - 8 + x_offset, sf::Mouse::getPosition().y / 28 * 28 - 30 + y_offset);
							transportbeltworld[transportbeltitems].rotate(rotate);
						}
						if (rotate == 90)
						{
							transportbeltworld[transportbeltitems].setPosition(sf::Mouse::getPosition().x / 28 * 28 + 19 + x_offset, sf::Mouse::getPosition().y / 28 * 28 - 30 + y_offset);
							transportbeltworld[transportbeltitems].rotate(rotate);
						}
						if (rotate == 180)
						{
							transportbeltworld[transportbeltitems].setPosition(sf::Mouse::getPosition().x / 28 * 28 + 19 + x_offset, sf::Mouse::getPosition().y / 28 * 28 - 2 + y_offset);
							transportbeltworld[transportbeltitems].rotate(rotate);
						}
						if (rotate == 270)
						{
							transportbeltworld[transportbeltitems].setPosition(sf::Mouse::getPosition().x / 28 * 28 - 8 + x_offset, sf::Mouse::getPosition().y / 28 * 28 - 2 + y_offset);
							transportbeltworld[transportbeltitems].rotate(rotate);
						}
						
						transportdir[transportbeltitems] = transportbeltworld[transportbeltitems].getRotation();
					}
					transportbeltpos[transportbeltitems] = true;
					transportbeltdraw[transportbeltitems] = 1;
					if (transportbeltitems < 100)
					{
						transportbeltitems++;
						transportinv--;
					}
				}
				if (carresearched == true && coginv >= 50 && ironinv >= 500 && circutinv >= 100 && transportinv >= 50 && cursor.getGlobalBounds().intersects(researchcar.getGlobalBounds()))
				{
					coginv -= 50;
					ironinv -= 500;
					circutinv -= 100;
					carinv += 5;
				}

				if (ironinv >= 25 && copperinv >= 25 && circutinv >= 25 && cursor.getGlobalBounds().intersects(research.getGlobalBounds()))
				{
					circutinv -= 25;
					ironinv -= 25;
					copperinv -= 25;
					researchinv += 5;
				}
				if (coginv >= 5 && copperinv >= 5 && cursor.getGlobalBounds().intersects(Cscience1.getGlobalBounds()))
				{
					coginv -= 5;
					copperinv -= 5;
					science1inv += 5;
				}
				if (coginv >= 5 && ironinv >= 5 && cursor.getGlobalBounds().intersects(transportbelt.getGlobalBounds()))
				{
					coginv -= 5;
					ironinv -= 5;
					transportinv += 10;
				}
				if (cursor.getGlobalBounds().intersects(science1.getGlobalBounds()) && pack1use == false && science1inv >= researchitems && researchlabs == true)
				{
					pack1use = true;
				}
				else if (cursor.getGlobalBounds().intersects(science1.getGlobalBounds()) && pack1use == true && researchlabs == true)
				{
					pack1use = false;
				}
				for (int i = 1; i < 100; i++)
				{
					if (inventorys == false && pipebuild == false && researchbuild == false && cursor.getGlobalBounds().intersects(researchworld[i].getGlobalBounds()))
					{
						researchlabs = true;
					}
				}
				
			}

		}
		else
		{
			mousestate = 0;
		}
		for (int i = 1; i < 100; i++)
		{
			if (pipeworld[i].getPosition().x - 25 < Player.getPosition().x &&
				pipeworld[i].getPosition().x + 14 > Player.getPosition().x &&
				pipeworld[i].getPosition().y + 1 < Player.getPosition().y &&
				pipeworld[i].getPosition().y + 15 > Player.getPosition().y ||
				watertile[i].getPosition().x - 25 < Player.getPosition().x &&
				watertile[i].getPosition().x + 14 > Player.getPosition().x &&
				watertile[i].getPosition().y + 1 < Player.getPosition().y &&
				watertile[i].getPosition().y + 15 > Player.getPosition().y ||
				researchworld[i].getPosition().x - 25 < Player.getPosition().x &&
				researchworld[i].getPosition().x + 42 > Player.getPosition().x &&
				researchworld[i].getPosition().y + 1 < Player.getPosition().y &&
				researchworld[i].getPosition().y + 14 > Player.getPosition().y)
			{
				pipecol[i] = true;
				moveup = false;
				break;
			}
			else
			{
				moveup = true;
				pipecol[i] = false;
			}
		}
			for (int i = 1; i < 100; i++)
		{
			if (pipeworld[i].getPosition().x - 25 < Player.getPosition().x &&
				pipeworld[i].getPosition().x + 14 > Player.getPosition().x &&
				pipeworld[i].getPosition().y - 1 < Player.getPosition().y + 50 &&
				pipeworld[i].getPosition().y + 15 > Player.getPosition().y + 50 ||
				watertile[i].getPosition().x - 25 < Player.getPosition().x &&
				watertile[i].getPosition().x + 14 > Player.getPosition().x &&
				watertile[i].getPosition().y - 1 < Player.getPosition().y + 50 &&
				watertile[i].getPosition().y + 15 > Player.getPosition().y + 50 ||
				researchworld[i].getPosition().x - 25 < Player.getPosition().x &&
				researchworld[i].getPosition().x + 42 > Player.getPosition().x &&
				researchworld[i].getPosition().y - 51 < Player.getPosition().y &&
				researchworld[i].getPosition().y + 13 > Player.getPosition().y)
			{
				pipecol[i] = true;
				movedown = false;
				break;
			}
			else
			{
				movedown = true;
				pipecol[i] = false;
			}
		}
			for (int i = 1; i < 100; i++)
		{
			if (pipeworld[i].getPosition().x - 1 < Player.getPosition().x + 25 &&
				pipeworld[i].getPosition().x + 13 > Player.getPosition().x + 25 &&
				pipeworld[i].getPosition().y - 50 < Player.getPosition().y &&
				pipeworld[i].getPosition().y + 14 > Player.getPosition().y ||
				watertile[i].getPosition().x - 1 < Player.getPosition().x + 25 &&
				watertile[i].getPosition().x + 13 > Player.getPosition().x + 25 &&
				watertile[i].getPosition().y - 50 < Player.getPosition().y &&
				watertile[i].getPosition().y + 14 > Player.getPosition().y ||
				researchworld[i].getPosition().x - 26 < Player.getPosition().x &&
				researchworld[i].getPosition().x + 41 > Player.getPosition().x &&
				researchworld[i].getPosition().y - 50 < Player.getPosition().y &&
				researchworld[i].getPosition().y + 13 > Player.getPosition().y)
			{
				pipecol[i] = true;
				moveright = false;
				break;
			}
			else
			{
				moveright = true;
				pipecol[i] = false;
			}
		}
			for (int i = 1; i < 100; i++)
		{
			if (pipeworld[i].getPosition().x + 1 < Player.getPosition().x &&
				pipeworld[i].getPosition().x + 15 > Player.getPosition().x &&
				pipeworld[i].getPosition().y - 50 < Player.getPosition().y &&
				pipeworld[i].getPosition().y + 14 > Player.getPosition().y || 
				watertile[i].getPosition().x + 1 < Player.getPosition().x &&
				watertile[i].getPosition().x + 15 > Player.getPosition().x &&
				watertile[i].getPosition().y - 50 < Player.getPosition().y &&
				watertile[i].getPosition().y + 14 > Player.getPosition().y ||
				researchworld[i].getPosition().x + 1 < Player.getPosition().x &&
				researchworld[i].getPosition().x + 43 > Player.getPosition().x &&
				researchworld[i].getPosition().y - 50 < Player.getPosition().y &&
				researchworld[i].getPosition().y + 13 > Player.getPosition().y)
			{
				pipecol[i] = true;
				moveleft = false;
				break;
			}
			else
			{
				moveleft = true;
				pipecol[i] = false;
			}
		}
			for (int i = 1; i < 100; i++)
			{
				if (minerworld[0].getGlobalBounds().intersects(minerworld[i].getGlobalBounds()) ||
					cursor.getGlobalBounds().intersects(Player.getGlobalBounds()) || 
					pipeworld[0].getGlobalBounds().intersects(pipeworld[i].getGlobalBounds()) || 
					researchworld[0].getGlobalBounds().intersects(researchworld[i].getGlobalBounds()) || 
					transportbeltworld[0].getGlobalBounds().intersects(transportbeltworld[i].getGlobalBounds()))
				{
					onentity = true;
					buildcol[i] = true;
				}
				else if (buildcol[i] == true)
				{
					buildcol[i] = false;
					onentity = false;
				}
				
			}
			if (pipeinv < 1)
			{
				pipebuild = false;
				pipeworld[0].setPosition(0, 0);
			}
			if (carinv < 1)
			{
				carbuild = false;
				carworld[0].setPosition(500, 0);
			}
			if (researchinv < 1)
			{
				researchbuild = false;
				researchworld[0].setPosition(0, 0);
			}
			if (transportinv < 1)
			{
				transportbeltbuild = false;
				transportbeltworld[0].setPosition(0, 0);
			}
			if (minerinv < 1)
			{
				minerbuild = false;
				minerworld[0].setPosition(0, 0);
			}
			if (science1inv < researchitems)
			{
				pack1use = false;
			}
			if (beltresearching == true && pack1use == true || carresearching == true && pack1use == true)
			{
				
				researching = true;
				if (researchtimer == 2)
				{
					researchbar++;
					researchtimer = 0;
				}
				if (beltresearching == true && progressbars > 105)
				{
					pack1use = false;
					beltresearching = false;
					beltresearched = true;
					progressbars = 0;
					researching = false;
				}
				if (carresearching == true && progressbars > 105)
				{
					pack1use = false;
					carresearching = false;
					carresearched = true;
					progressbars = 0;
					researching = false;
				}
				researchtimer++;
			}
			for (int i = 1; i < 100; i++)
			{
				if (transportbeltworld[i].getPosition().x - 25 <= Player.getPosition().x &&
					transportbeltworld[i].getPosition().x + 28 >= Player.getPosition().x &&
					transportbeltworld[i].getPosition().y <= Player.getPosition().y + 48 &&
					transportbeltworld[i].getPosition().y + 28 >= Player.getPosition().y + 33 && transportdir[i] == 0)
				{
					Player.move(-0.4, 0);
				}
				if (transportbeltworld[i].getPosition().x - 50 <= Player.getPosition().x &&
					transportbeltworld[i].getPosition().x >= Player.getPosition().x &&
					transportbeltworld[i].getPosition().y <= Player.getPosition().y + 48 &&
					transportbeltworld[i].getPosition().y + 28 >= Player.getPosition().y + 33 && transportdir[i] == 90)
				{
					Player.move(0, -0.4);
				}
				if (transportbeltworld[i].getPosition().x - 50 <= Player.getPosition().x &&
					transportbeltworld[i].getPosition().x >= Player.getPosition().x &&
					transportbeltworld[i].getPosition().y - 28 <= Player.getPosition().y + 48 &&
					transportbeltworld[i].getPosition().y >= Player.getPosition().y + 33 && transportdir[i] == 180)
				{
					Player.move(0.4, 0);
				}
				if (transportbeltworld[i].getPosition().x - 25 <= Player.getPosition().x &&
					transportbeltworld[i].getPosition().x + 28 >= Player.getPosition().x &&
					transportbeltworld[i].getPosition().y - 28 <= Player.getPosition().y + 48 &&
					transportbeltworld[i].getPosition().y >= Player.getPosition().y + 33 && transportdir[i] == 270)
				{
					Player.move(0, 0.4);
				}
			}
			
		window.clear();
		window.draw(Map);
		for (int i = 0; i < 100; i++)
		{
			if (ironore[i] > 0)
			{
				window.draw(Iron[i]);
			}
			if (copperore[i] > 0)
			{
				window.draw(Copper[i]);
			}
			if (pipedraw[i] == 1)
			{
				pipeworld[i].setScale(0.8, 1);
				window.draw(pipeworld[i]);
			}
			if (researchdraw[i] == 1)
			{
				window.draw(researchworld[i]);
			}
			if (transportbeltdraw[i] == 1)
			{
				window.draw(transportbeltworld[i]);
			}
		}
		for (int i = 1; i < 10; i++)
		{
			if (cardraw[i] == 1)
			{
				window.draw(carworld[i]);
				cout << i << endl;
			}
		}
		for (int i = 1; i < 100; i++)
		{
			if (minerdraw[i] == 1)
			{
				window.draw(minerworld[i]);
			}
		}
		for (int i = 1; i < 100; i++)
		{
			window.draw(watertile[i]);
		}
		window.draw(Player);
		if (ironselected == true || copperselected == true || pipeselected == true && pipebuild == false)
		{
			window.draw(Select);
		}
		if (researchselected == true && researchbuild == false)
		{
			window.draw(bigselect);
		}
		for (int k = 1; k < mineritems; k++)
		{
			for (int i = 1; i < 100; i++)
			{
				if (minerworld[k].getGlobalBounds().intersects(Iron[i].getGlobalBounds()) && ironore[i] > 0)
				{
					minerirontimer++;
					if (minerirontimer > 35)
					{
						ironore[i]--;
						ironinv++;
						minerirontimer = 0;
					}
					break;
				}
				if (minerworld[k].getGlobalBounds().intersects(Copper[i].getGlobalBounds()) && copperore[i] > 0)
				{
					minercoppertimer++;
					if (minercoppertimer > 35)
					{
						copperore[i]--;
						copperinv++;
						minercoppertimer = 0;

					}
					break;
				}
			}
		}
		progressbar.setPosition(Player.getPosition().x + 700, Player.getPosition().y - 500);
		if (researching == true)
		{
			if (progressbars < 20 && progressbars >= 10)
			{
				progressbar.setTexture(Researchbar10);
			}
			if (progressbars < 30 && progressbars >= 20)
			{
				progressbar.setTexture(Researchbar20);
			}
			if (progressbars < 40 && progressbars >= 30)
			{
				progressbar.setTexture(Researchbar30);
			}
			if (progressbars < 50 && progressbars >= 40)
			{
				progressbar.setTexture(Researchbar40);
			}
			if (progressbars < 60 && progressbars >= 50)
			{
				progressbar.setTexture(Researchbar50);
			}
			if (progressbars < 70 && progressbars >= 60)
			{
				progressbar.setTexture(Researchbar60);
			}
			if (progressbars < 80 && progressbars >= 70)
			{
				progressbar.setTexture(Researchbar70);
			}
			if (progressbars < 90 && progressbars >= 80)
			{
				progressbar.setTexture(Researchbar80);
			}
			if (progressbars < 100 && progressbars >= 90)
			{
				progressbar.setTexture(Researchbar90);
			}
			if (progressbars < 110 && progressbars >= 100)
			{
				progressbar.setTexture(Researchbar100);
			}
			if (progressbars > 110)
			{
				researching = false;
				progressbars = 0;
			}
			if (researchbar == 101)
			{
				science1inv -= 1 * researchitems - 1;
				researchbar = 0;
				progressbars += 1 * researchitems - 1;
			}
			
		}
		else 
		{
			progressbar.setTexture(Researchbar0);
		}
		window.draw(progressbar);
		window.draw(cursor);
		
		if (inventorys == true || researchlabs == true || chooseresearchs == true)
		{
			if (inventorys == true)
			{
				Inventory.setPosition(Player.getPosition().x - 600, Player.getPosition().y - 300);
				window.draw(Inventory);
				cog.setPosition(Inventory.getPosition().x + 625, Inventory.getPosition().y + 69);
				copperwire.setPosition(Inventory.getPosition().x + 687, Inventory.getPosition().y + 69);
				circut.setPosition(Inventory.getPosition().x + 749, Inventory.getPosition().y + 69);
				pipe.setPosition(Inventory.getPosition().x + 811, Inventory.getPosition().y + 69);
				research.setPosition(Inventory.getPosition().x + 873, Inventory.getPosition().y + 69);
				Cscience1.setPosition(Inventory.getPosition().x + 935, Inventory.getPosition().y + 69);
				Cminer.setPosition(Inventory.getPosition().x + 997, Inventory.getPosition().y + 69);
				window.draw(Cscience1);
				window.draw(cog);
				window.draw(research);
				window.draw(pipe);
				window.draw(circut);
				window.draw(copperwire);
				window.draw(Cminer);
				if (beltresearched == true)
				{
					transportbelt.setPosition(Inventory.getPosition().x + 1059, Inventory.getPosition().y + 69);
					window.draw(transportbelt);
				}
				if (carresearched == true)
				{
					researchcar.setPosition(Inventory.getPosition().x + 1121, Inventory.getPosition().y + 69);
					researchcar.setScale(2, 2);
					window.draw(researchcar);
				}
			}
			if (researchlabs == true)
			{
				researchlab.setPosition(Player.getPosition().x - 600, Player.getPosition().y - 300);
				window.draw(researchlab);
				if (beltresearching == true && beltresearched == false)
				{
					researchbelt.setPosition(researchlab.getPosition().x + 1012, researchlab.getPosition().y + 69);
					researchbelt.setScale(3, 3);
					window.draw(researchbelt);
				}
				if (carresearching == true && carresearched == false)
				{
					researchcar.setPosition(researchlab.getPosition().x + 1012, researchlab.getPosition().y + 69);
					researchcar.setScale(3, 3);
					window.draw(researchcar);
				}
				if (pack1use == true)
				{
					science1.setPosition(researchlab.getPosition().x + 931, researchlab.getPosition().y + 69);
					window.draw(science1);
					if (science1inv >= 1)
					{
						science1text.setScale(1, 1);
						science1text.setPosition(science1.getPosition().x + 15, science1.getPosition().y + 3);
					}
					if (science1inv >= 10)
					{
						science1text.setScale(1, 1);
						science1text.setPosition(science1.getPosition().x + 7, science1.getPosition().y + 3);
					}
					if (science1inv >= 100)
					{
						science1text.setScale(0.8, 0.8);
						science1text.setPosition(science1.getPosition().x + 5, science1.getPosition().y + 10);
					}
					window.draw(science1text);
				}
				
				if (researchbar < 10)
				{
					researchbar0.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar0);
				}
				if (researchbar < 20 && researchbar >= 10)
				{
					researchbar10.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar10);
				}
				if (researchbar < 30 && researchbar >= 20)
				{
					researchbar20.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar20);
				}
				if (researchbar < 40 && researchbar >= 30)
				{
					researchbar30.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar30);
				}
				if (researchbar < 50 && researchbar >= 40)
				{
					researchbar40.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar40);
				}
				if (researchbar < 60 && researchbar >= 50)
				{
					researchbar50.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar50);
				}
				if (researchbar < 70 && researchbar >= 60)
				{
					researchbar60.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar60);
				}
				if (researchbar < 80 && researchbar >= 70)
				{
					researchbar70.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar70);
				}
				if (researchbar < 90 && researchbar >= 80)
				{
					researchbar80.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar80);
				}
				if (researchbar < 100 && researchbar >= 90)
				{
					researchbar90.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar90);
				}
				if (researchbar == 100)
				{
					researchbar100.setPosition(researchlab.getPosition().x + 738, researchlab.getPosition().y + 130);
					window.draw(researchbar100);
				}
				
				
			}
			if (chooseresearchs == true)
			{
				chooseresearch.setPosition(Player.getPosition().x - 600, Player.getPosition().y - 300);
				window.draw(chooseresearch);
				if (beltresearching == false && beltresearched == false)
				{
					researchbelt.setPosition(chooseresearch.getPosition().x + 43, chooseresearch.getPosition().y + 69);
					window.draw(researchbelt);
				}
				if (carresearching == false && carresearched == false)
				{
					researchcar.setPosition(chooseresearch.getPosition().x + 105, chooseresearch.getPosition().y + 69);
				
					window.draw(researchcar);
				}
				
			}

			if (pipeinv > 0 && chooseresearchs == false)//draw pipe in inventory
			{
				if (pipebuild == false)
				{
					pipeinve.setPosition(Inventory.getPosition().x + 353, Inventory.getPosition().y + 69);
					if (researchlabs == true)
					{
						pipeinve.setPosition(researchlab.getPosition().x + 353, researchlab.getPosition().y + 69);
					}
					window.draw(pipeinve);
				}
				
				
				if (pipeinv >= 1 && pipebuild == false)
				{
					pipetext.setScale(1, 1);
					if (pipebuild == false)
					{
						pipetext.setPosition(pipeinve.getPosition().x + 15, pipeinve.getPosition().y + 3);
					}
					
				}
				if (pipeinv >= 10 && pipebuild == false)
				{
					pipetext.setScale(1, 1);
					pipetext.setPosition(pipeinve.getPosition().x + 7, pipeinve.getPosition().y + 3);
				}
				if (pipeinv >= 100 && pipebuild == false)
				{
					pipetext.setScale(0.8, 0.8);
					pipetext.setPosition(pipeinve.getPosition().x + 5, pipeinve.getPosition().y + 10);
				}
				window.draw(pipetext);
			}

			if (science1inv > 0 && chooseresearchs == false && pack1use == false)//draw science1 in inventory
			{
				science1.setPosition(Inventory.getPosition().x + 477, Inventory.getPosition().y + 69);
				if (researchlabs == true)
				{
					science1.setPosition(researchlab.getPosition().x + 477, researchlab.getPosition().y + 69);
				}
				window.draw(science1);
				if (science1inv >= 1)
				{
					science1text.setScale(1, 1);
					science1text.setPosition(science1.getPosition().x + 15, science1.getPosition().y + 3);
				}
				if (science1inv >= 10)
				{
					science1text.setScale(1, 1);
					science1text.setPosition(science1.getPosition().x + 7, science1.getPosition().y + 3);
				}
				if (science1inv >= 100)
				{
					science1text.setScale(0.8, 0.8);
					science1text.setPosition(science1.getPosition().x + 5, science1.getPosition().y + 10);
				}
				window.draw(science1text);
			}

			if (coginv > 0 && chooseresearchs == false)//draw cog in inventory
			{
				coginve.setPosition(Inventory.getPosition().x + 167, Inventory.getPosition().y + 69);
				if (researchlabs == true)
				{
					coginve.setPosition(researchlab.getPosition().x + 167, researchlab.getPosition().y + 69);
				}
				window.draw(coginve);
				if (coginv >= 1)
				{
					cogtext.setScale(1, 1);
					cogtext.setPosition(coginve.getPosition().x + 15, coginve.getPosition().y + 3);
				}
				if (coginv >= 10)
				{
					cogtext.setScale(1, 1);
					cogtext.setPosition(coginve.getPosition().x + 7, coginve.getPosition().y + 3);
				}
				if (coginv >= 100)
				{
					cogtext.setScale(0.8, 0.8);
					cogtext.setPosition(coginve.getPosition().x + 5, coginve.getPosition().y + 10);
				}
				window.draw(cogtext);
			}

			if (circutinv > 0 && chooseresearchs == false)//draw circut in inventory
			{
				circutinve.setPosition(Inventory.getPosition().x + 291, Inventory.getPosition().y + 69);
				if (researchlabs == true)
				{
					circutinve.setPosition(researchlab.getPosition().x + 291, researchlab.getPosition().y + 69);
				}
				window.draw(circutinve);
				if (circutinv >= 1)
				{
					circuttext.setScale(1, 1);
					circuttext.setPosition(circutinve.getPosition().x + 15, circutinve.getPosition().y + 3);
				}
				if (circutinv >= 10)
				{
					circuttext.setScale(1, 1);
					circuttext.setPosition(circutinve.getPosition().x + 7, circutinve.getPosition().y + 3);
				}
				if (circutinv >= 100)
				{
					circuttext.setScale(0.8, 0.8);
					circuttext.setPosition(circutinve.getPosition().x + 5, circutinve.getPosition().y + 10);
				}
				window.draw(circuttext);
			}

			if (researchinv > 0 && chooseresearchs == false)//draw research in inventory
			{
				if (researchbuild == false)
				{
					researchinve.setPosition(Inventory.getPosition().x + 415, Inventory.getPosition().y + 69);
					if (researchlabs == true)
					{
						researchinve.setPosition(researchlab.getPosition().x + 415, researchlab.getPosition().y + 69);
					}
					window.draw(researchinve);
				}
				
				if (researchinv >= 1 && researchbuild == false)
				{
					researchtext.setScale(1, 1);
					researchtext.setPosition(researchinve.getPosition().x + 15, researchinve.getPosition().y + 3);
				}
				if (researchinv >= 10 && researchbuild == false)
				{
					researchtext.setScale(1, 1);
					researchtext.setPosition(researchinve.getPosition().x + 7, researchinve.getPosition().y + 3);
				}
				if (researchinv >= 100 && researchbuild == false)
				{
					researchtext.setScale(0.8, 0.8);
					researchtext.setPosition(researchinve.getPosition().x + 5, researchinve.getPosition().y + 10);
				}
				window.draw(researchtext);
			}

			if (transportinv > 0 && chooseresearchs == false)//draw transportbelt in inventory
			{
				if (transportbeltbuild == false)
				{
					transportbeltinve.setPosition(Inventory.getPosition().x + 43, Inventory.getPosition().y + 125);
					if (researchlabs == true)
					{
						transportbeltinve.setPosition(researchlab.getPosition().x + 539, researchlab.getPosition().y + 69);
					}
					window.draw(transportbeltinve);
				}

				if (transportinv >= 1 && transportbeltbuild == false)
				{
					transportbelttext.setScale(1, 1);
					transportbelttext.setPosition(transportbeltinve.getPosition().x + 15, transportbeltinve.getPosition().y + 3);
				}
				if (transportinv >= 10 && transportbeltbuild == false)
				{
					transportbelttext.setScale(1, 1);
					transportbelttext.setPosition(transportbeltinve.getPosition().x + 7, transportbeltinve.getPosition().y + 3);
				}
				if (transportinv >= 100 && transportbeltbuild == false)
				{
					transportbelttext.setScale(0.8, 0.8);
					transportbelttext.setPosition(transportbeltinve.getPosition().x + 5, transportbeltinve.getPosition().y + 10);
				}
				window.draw(transportbelttext);
			}
			if (carresearched == true && carinv > 0 && chooseresearchs == false)//draw car in inventory
			{
				if (carbuild == false)
				{
					carinve.setPosition(Inventory.getPosition().x + 105, Inventory.getPosition().y + 125);
					if (researchlabs == true)
					{
						carinve.setPosition(researchlab.getPosition().x + 539, researchlab.getPosition().y + 69);
					}
					window.draw(carinve);
				}

				if (carinv >= 1 && carbuild == false)
				{
					cartext.setScale(1, 1);
					cartext.setPosition(carinve.getPosition().x + 15, carinve.getPosition().y + 3);
				}
				if (carinv >= 10 && carbuild == false)
				{
					cartext.setScale(1, 1);
					cartext.setPosition(carinve.getPosition().x + 7, carinve.getPosition().y + 3);
				}
				if (carinv >= 100 && carbuild == false)
				{
					cartext.setScale(0.8, 0.8);
					cartext.setPosition(carinve.getPosition().x + 5, carinve.getPosition().y + 10);
				}
				window.draw(cartext);
			}

			if (minerinv > 0 && chooseresearchs == false)//draw miner in inventory
			{
				if (minerbuild == false)
				{
					minerinve.setPosition(Inventory.getPosition().x + 539, Inventory.getPosition().y + 69);
					if (researchlabs == true)
					{
						minerinve.setPosition(researchlab.getPosition().x + 539, researchlab.getPosition().y + 69);
					}
					window.draw(minerinve);
				}

				if (minerinv >= 1 && minerbuild == false)
				{
					minertext.setScale(1, 1);
					minertext.setPosition(minerinve.getPosition().x + 15, minerinve.getPosition().y + 3);
				}
				if (minerinv >= 10 && minerbuild == false)
				{
					minertext.setScale(1, 1);
					minertext.setPosition(minerinve.getPosition().x + 7, minerinve.getPosition().y + 3);
				}
				if (minerinv >= 100 && minerbuild == false)
				{
					minertext.setScale(0.8, 0.8);
					minertext.setPosition(minerinve.getPosition().x + 5, minerinve.getPosition().y + 10);
				}
				window.draw(minertext);
			}
			
			if (ironinv > 0 && chooseresearchs == false)//draw iron in inventory
			{
				ironinve.setPosition(Inventory.getPosition().x + 43, Inventory.getPosition().y + 69);
				if (researchlabs == true)
				{
					ironinve.setPosition(researchlab.getPosition().x + 43, researchlab.getPosition().y + 69);
				}
				window.draw(ironinve);
				if (ironinv >= 1)
				{
					irontext.setScale(1, 1);
					irontext.setPosition(ironinve.getPosition().x + 15, ironinve.getPosition().y + 3);
				}
				if (ironinv >= 10)
				{
					irontext.setScale(1, 1);
					irontext.setPosition(ironinve.getPosition().x + 7, ironinve.getPosition().y + 3);
				}
				if (ironinv >= 100)
				{
					irontext.setScale(0.8, 0.8);
					irontext.setPosition(ironinve.getPosition().x + 5, ironinve.getPosition().y + 10);
				}
				window.draw(irontext);
				
			}
			if (copperinv > 0 && chooseresearchs == false)//draw copper in inventory
			{
				copperinve.setPosition(Inventory.getPosition().x + 105, Inventory.getPosition().y + 69);
				if (researchlabs == true)
				{
					copperinve.setPosition(researchlab.getPosition().x + 105, researchlab.getPosition().y + 69);
				}
				window.draw(copperinve);
				if (copperinv >= 1)
				{
					coppertext.setScale(1, 1);
					coppertext.setPosition(copperinve.getPosition().x + 15, copperinve.getPosition().y + 3);
				}
				if (copperinv >= 10)
				{
					coppertext.setScale(1, 1);
					coppertext.setPosition(copperinve.getPosition().x + 7, copperinve.getPosition().y + 3);
				}
				if (copperinv >= 100)
				{
					coppertext.setScale(0.8, 0.8);
					coppertext.setPosition(copperinve.getPosition().x + 5, copperinve.getPosition().y + 10);
				}
				window.draw(coppertext);
			}
			if (copperwireinv > 0 && chooseresearchs == false) //draw copperwire in inventory
			{
				copperwireinve.setPosition(Inventory.getPosition().x + 229, Inventory.getPosition().y + 69);
				if (researchlabs == true)
				{
					copperwireinve.setPosition(researchlab.getPosition().x + 229, researchlab.getPosition().y + 69);
				}
				window.draw(copperwireinve);
				if (copperwireinv >= 1)
				{
					copperwiretext.setScale(1, 1);
					copperwiretext.setPosition(copperwireinve.getPosition().x + 15, copperwireinve.getPosition().y + 3);
				}
				if (copperwireinv >= 10)
				{
					copperwiretext.setScale(1, 1);
					copperwiretext.setPosition(copperwireinve.getPosition().x + 7, copperwireinve.getPosition().y + 3);
				}
				if (copperwireinv >= 100)
				{
					copperwiretext.setScale(0.8, 0.8);
					copperwiretext.setPosition(copperwireinve.getPosition().x + 5, copperwireinve.getPosition().y + 10);
				}
				window.draw(copperwiretext);
			}
		}
		if (pipebuild == true)
		{
			pipeworld[0].setPosition(mouse_pos.x / 14 * 14, mouse_pos.y / 14 * 14);
			window.draw(pipeworld[0]);
			pipeworld[0].setScale(0.8, 1);
			pipetext.setPosition(pipeworld[0].getPosition().x + 15, pipeworld[0].getPosition().y);
			window.draw(pipetext);
		}
		if (carbuild == true)
		{
			cout << caritems << endl;
			carworld[0].setPosition(mouse_pos.x / 14 * 14, mouse_pos.y / 14 * 14);
			cartext.setPosition(carworld[0].getPosition().x + 15, carworld[0].getPosition().y);
			if (rotate == 0)
			{
				carworld[0].setPosition(mouse_pos.x / 14 * 14, mouse_pos.y / 14 * 14);
				cartext.setPosition(carworld[0].getPosition().x + 15, carworld[0].getPosition().y);
			}
			if (rotate == 90)
			{
				carworld[0].setPosition(mouse_pos.x / 14 * 14, mouse_pos.y / 14 * 14);
				cartext.setPosition(carworld[0].getPosition().x + 15, carworld[0].getPosition().y);
			}
			if (rotate == 180)
			{
				carworld[0].setPosition(mouse_pos.x / 14 * 14, mouse_pos.y / 14 * 14);
				cartext.setPosition(carworld[0].getPosition().x + 15, carworld[0].getPosition().y);
			}
			if (rotate == 270)
			{
				carworld[0].setPosition(mouse_pos.x / 14 * 14, mouse_pos.y / 14 * 14);
				cartext.setPosition(carworld[0].getPosition().x + 15, carworld[0].getPosition().y);
			}

			window.draw(carworld[0]);
			window.draw(cartext);
		}
		if (researchbuild == true)
		{
			researchworld[0].setPosition(sf::Mouse::getPosition().x / 14 * 14 - 8 + x_offset, sf::Mouse::getPosition().y / 14 * 14 - 30 + y_offset);
			window.draw(researchworld[0]);
			researchtext.setPosition(researchworld[0].getPosition().x + 15, researchworld[0].getPosition().y);
			window.draw(researchtext);
		}
		if (minerbuild == true)
		{
			minerworld[0].setPosition(sf::Mouse::getPosition().x / 14 * 14 - 8 + x_offset, sf::Mouse::getPosition().y / 14 * 14 - 30 + y_offset);
			window.draw(minerworld[0]);
			minertext.setPosition(minerworld[0].getPosition().x + 15, minerworld[0].getPosition().y);
			window.draw(minertext);
		}
		if (transportbeltbuild == true)
		{
			if (rotate == 0)
			{
				transportbeltworld[0].setPosition(sf::Mouse::getPosition().x / 28 * 28 - 8 + x_offset, sf::Mouse::getPosition().y / 28 * 28 - 30 + y_offset);
				transportbelttext.setPosition(transportbeltworld[0].getPosition().x + 15, transportbeltworld[0].getPosition().y);
			}
			if (rotate == 90)
			{
				transportbeltworld[0].setPosition(sf::Mouse::getPosition().x / 28 * 28 + 19 + x_offset, sf::Mouse::getPosition().y / 28 * 28 - 30 + y_offset);
				transportbelttext.setPosition(transportbeltworld[0].getPosition().x - 12, transportbeltworld[0].getPosition().y);
			}
			if (rotate == 180)
			{
				transportbeltworld[0].setPosition(sf::Mouse::getPosition().x / 28 * 28 + 19 + x_offset, sf::Mouse::getPosition().y / 28 * 28 - 2 + y_offset);
				transportbelttext.setPosition(transportbeltworld[0].getPosition().x - 12, transportbeltworld[0].getPosition().y - 28);
			}
			if (rotate == 270)
			{
				transportbeltworld[0].setPosition(sf::Mouse::getPosition().x / 28 * 28 - 8 + x_offset, sf::Mouse::getPosition().y / 28 * 28 - 2 + y_offset);
				transportbelttext.setPosition(transportbeltworld[0].getPosition().x + 15, transportbeltworld[0].getPosition().y - 28);
			}
			window.draw(transportbeltworld[0]);
			
			window.draw(transportbelttext);
		}
		
		window.display();
		window.setView(view);
	
		
	}

	return 0;
}