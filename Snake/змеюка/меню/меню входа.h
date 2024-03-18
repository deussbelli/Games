#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <time.h>
#include "windows.h"

using namespace sf;


void menu(RenderWindow& window) {
	Texture l_1, l_1_1, l_2, l_2_2, l_3, l_3_3, exit_1, exit_2, Background;
	l_1.loadFromFile("������ [����]/������� 1 [�� �������� 2].png");                // ������� 1 �� �����
	l_2.loadFromFile("������ [����]/������� 2 [�� �������� 2].png");                // ������� 2 �� �����
	l_3.loadFromFile("������ [����]/������� 3 [�� �������� 2].png");                // ������� 3 �� �����
	exit_1.loadFromFile("������ [����]/����� 2 [�� ���������].png");           //  �����

	Background.loadFromFile("������ [����]/����� � �����.png");                // ���

	l_1_1.loadFromFile("������ [����]/������� 1 [��������].png");                // ������� 1 �� �����
	l_2_2.loadFromFile("������ [����]/������� 2 [��������].png");                // ������� 2 �� �����
	l_3_3.loadFromFile("������ [����]/������� 3 [��������].png");                // ������� 3 �� �����
	exit_2.loadFromFile("������ [����]/����� [��������].png");                // �����

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

	//////////////////////////////����///////////////////
	while (isMenu)
	{
		lvl1.setTexture(l_1);
		lvl2.setTexture(l_2);
		lvl3.setTexture(l_3);
		exit.setTexture(exit_1);
		openBackground.setTexture(Background);

		menuNum = 0;

		window.clear();

		if (IntRect(74, 140, 74, 140).contains(Mouse::getPosition(window))) { lvl1.setTexture(l_1_1); menuNum = 1; }
		if (IntRect(257, 140, 257, 140).contains(Mouse::getPosition(window))) { lvl2.setTexture(l_2_2); menuNum = 2; }
		if (IntRect(440, 140, 440, 140).contains(Mouse::getPosition(window))) { lvl3.setTexture(l_3_3); menuNum = 3; }
		if (IntRect(300, 455, 300, 50).contains(Mouse::getPosition(window))) { exit.setTexture(exit_2); menuNum = 4; }

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			if (menuNum == 1) { window.close(); isMenu = false; }
			if (menuNum == 2) { window.close(); isMenu = false; }
			if (menuNum == 3) { window.close(); isMenu = false; }
			if (menuNum == 4) { window.close(); isMenu = false; }
		}

		window.draw(openBackground);
		window.draw(lvl1);
		window.draw(lvl2);
		window.draw(lvl3);
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