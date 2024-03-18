#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <time.h>
#include "menu.h"
#include "menu 2.h"
#include "windows.h"

void menu_close(RenderWindow& window) {
	Texture home_1, restart_1, exit_1, home_2, restart_2, exit_2, Background_1;
	home_1.loadFromFile("кнопки [меню]/домой [не наводимся].png");                // домой
	restart_1.loadFromFile("кнопки [меню]/рестарт [не наводимся].png");           // начать заново
	exit_1.loadFromFile("кнопки [меню]/выход 2 [не наводимся].png");              // выход

	Background_1.loadFromFile("кнопки [меню]/фон со змеёй и шапкой.png");     // фон

	home_2.loadFromFile("кнопки [меню]/домой [навелись].png");                // домой
	restart_2.loadFromFile("кнопки [меню]/рестарт [навелись].png");           // начать заново
	exit_2.loadFromFile("кнопки [меню]/выход [навелись].png");              // выход

	Sprite home;
	Sprite restart;
	Sprite exit;
	Sprite exitBackground;

	bool isMenu2 = 1;
	int menuNum2 = 0;

	home.setPosition(260, 190);
	restart.setPosition(370, 310);
	exit.setPosition(300, 455);
	exitBackground.setPosition(0, 0);

	Music music;
	music.openFromFile("андертейл.ogg");
	music.play();

	while (isMenu2)
	{
		home.setTexture(home_1);
		restart.setTexture(restart_1);
		exit.setTexture(exit_1);
		exitBackground.setTexture(Background_1);

		menuNum2 = 0;

		window.clear();

		if (IntRect(260, 190, 111, 105).contains(Mouse::getPosition(window))) { home.setTexture(home_2); menuNum2 = 1; }
		if (IntRect(370, 310, 167, 84).contains(Mouse::getPosition(window))) { restart.setTexture(restart_2); menuNum2 = 2; }
		if (IntRect(300, 455, 116, 33).contains(Mouse::getPosition(window))) { exit.setTexture(exit_2); menuNum2 = 3; }

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			if (menuNum2 == 1) { music.stop(); menu_open(window); isMenu2 = true; }
			if (menuNum2 == 2) { music.stop(); window.close(); isMenu2 = false; }
			if (menuNum2 == 3) { music.stop(); window.close(); isMenu2 = false; }

		}

		window.draw(exitBackground);
		window.draw(home);
		window.draw(restart);
		window.draw(exit);

		window.display();
	}

}