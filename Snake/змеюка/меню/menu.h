#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <time.h>
#include "menu.h"
#include "menu 2.h"
#include "windows.h"

void menu_open(RenderWindow& window)
{
	Texture l_1, l_1_1, l_2, l_2_2, l_3, l_3_3, exit_1, exit_2, Background;
	l_1.loadFromFile("кнопки [меню]/уровень 1 [не навелись 2].png");                // уровень 1 не навод
	l_2.loadFromFile("кнопки [меню]/уровень 2 [не навелись 2].png");                // уровень 2 не навод
	l_3.loadFromFile("кнопки [меню]/уровень 3 [не навелись 2].png");                // уровень 3 не навод
	exit_1.loadFromFile("кнопки [меню]/выход 2 [не наводимся].png");           //  выход

	Background.loadFromFile("кнопки [меню]/шапка с фоном.png");                // фон

	l_1_1.loadFromFile("кнопки [меню]/уровень 1 [навелись].png");                // уровень 1 не навод
	l_2_2.loadFromFile("кнопки [меню]/уровень 2 [навелись].png");                // уровень 2 не навод
	l_3_3.loadFromFile("кнопки [меню]/уровень 3 [навелись].png");                // уровень 3 не навод
	exit_2.loadFromFile("кнопки [меню]/выход [навелись].png");                // выход

	Sprite lvl1;
	Sprite lvl2;
	Sprite lvl3;
	Sprite exit;
	Sprite openBackground;

	bool isMenu = 1;
	int menuNum = 0;

	lvl1.setPosition(74, 140);
	lvl2.setPosition(257, 140);
	lvl3.setPosition(440, 140);
	exit.setPosition(300, 455);
	openBackground.setPosition(0, 0);

	Music music;
	music.openFromFile("андертейл.ogg");
	music.play();

	while (isMenu)
	{
		lvl1.setTexture(l_1);
		lvl2.setTexture(l_2);
		lvl3.setTexture(l_3);
		exit.setTexture(exit_1);
		openBackground.setTexture(Background);

		menuNum = 0;

		window.clear();

		if (IntRect(74, 140, 186, 304).contains(Mouse::getPosition(window))) { lvl1.setTexture(l_1_1); menuNum = 1; }
		if (IntRect(257, 140, 186, 304).contains(Mouse::getPosition(window))) { lvl2.setTexture(l_2_2); menuNum = 2; }
		if (IntRect(440, 140, 186, 304).contains(Mouse::getPosition(window))) { lvl3.setTexture(l_3_3); menuNum = 3; }
		if (IntRect(300, 455, 116, 33).contains(Mouse::getPosition(window))) { exit.setTexture(exit_2); menuNum = 4; }

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			if (menuNum == 1) { music.stop(); lvl_1(); window.display(); 	menu_close(window); isMenu = true; }
			if (menuNum == 2) { music.stop(); lvl_3(); window.display(); 	menu_close(window); isMenu = true; }
			if (menuNum == 3) { music.stop(); lvl_2(); window.display();	menu_close(window); isMenu = true; }
			if (menuNum == 4) { window.close(); isMenu = false; }
		}

		window.draw(openBackground);
		window.draw(lvl1);
		window.draw(lvl2);
		window.draw(lvl3);
		window.draw(exit);

		window.display();
	}
}