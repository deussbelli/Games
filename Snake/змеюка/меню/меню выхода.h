#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <time.h>
#include "windows.h"

using namespace sf;


void menu(RenderWindow& window) {
	Texture home_1, restart_1, exit_1, home_2, restart_2, exit_2, Background_1;
	home_1.loadFromFile("������ [����]/����� [�� ���������].png");                // �����
	restart_1.loadFromFile("������ [����]/������� [�� ���������].png");           // ������ ������
	exit_1.loadFromFile("������ [����]/����� 2 [�� ���������].png");              // �����

	Background_1.loadFromFile("������ [����]/��� �� ���� � ������.png");     // ���

	home_2.loadFromFile("������ [����]/����� [��������].png");                // �����
	restart_2.loadFromFile("������ [����]/������� [��������].png");           // ������ ������
	exit_2.loadFromFile("������ [����]/����� [��������].png");              // �����

	Sprite home;
	Sprite restart;
	Sprite exit;
	Sprite exitBackground;

	bool isMenu = 1;
	int menuNum = 0;

	home.setPosition(260, 190);
	restart.setPosition(370, 310);
	exit.setPosition(300, 455);
	exitBackground.setPosition(0, 0);

	//////////////////////////////����///////////////////
	while (isMenu)
	{
		home.setTexture(home_1);
		restart.setTexture(restart_1);
		exit.setTexture(exit_1);
		exitBackground.setTexture(Background_1);

		menuNum = 0;

		window.clear();

		if (IntRect(260, 190, 300, 50).contains(Mouse::getPosition(window))) { home.setTexture(home_2); menuNum = 1; }
		if (IntRect(370, 310, 300, 50).contains(Mouse::getPosition(window))) { restart.setTexture(restart_2); menuNum = 2; }
		if (IntRect(300, 455, 300, 50).contains(Mouse::getPosition(window))) { exit.setTexture(exit_2); menuNum = 3; }

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			if (menuNum == 1) { window.close(); isMenu = false; }
			if (menuNum == 2) { window.close(); isMenu = false; }
			if (menuNum == 3) { window.close(); isMenu = false; }

		}

		window.draw(exitBackground);
		window.draw(home);
		window.draw(restart);
		window.draw(exit);

		window.display();
	}
	////////////////////////////////////////////////////
}


int main()
{

	RenderWindow window(sf::VideoMode(700, 525), "������");
	menu(window);//����� ����

	system("pause");
	return 0;
}