#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <time.h>

#ifndef SCREENS_HPP_INCLUDED
#define SCREENS_HPP_INCLUDED
#endif // SCREENS_HPP_INCLUDED

#include "windows.h"

using namespace sf;

int N = 20, M = 15;
int size = 35;
int w = size * N;
int h = size * M;

int dir, num = 2;

struct Snake
{

	int x, y;

}  s[100]; //длина змеюки

struct Fruit
{

	int x, y;

} f; // яблочко 1
struct Fruit_1
{

	int x, y;

} f1; //яблочко 2
struct Fruit_2
{

	int x, y;

} f2; //яблочко 3

struct Barrier_X
{
public:

	int x, y;

} g;

struct Barrier
{

	int x, y;

} p;
struct Barrier_1
{

	int x, y;

} p1;
struct Barrier_2
{

	int x, y;

} p2;
struct Barrier_3
{

	int x, y;

} p3;
struct Barrier_4
{

	int x, y;

} p4;
struct Barrier_5
{

	int x, y;

} p5;
struct Barrier_6
{

	int x, y;

} p6;
struct Barrier_7
{

	int x, y;

} p7;
struct Barrier_8
{

	int x, y;

} p8;
struct Barrier_9
{

	int x, y;

} p9;
struct Barrier_10
{

	int x, y;

} p10;
struct Barrier_11
{

	int x, y;

} p11;
struct Barrier_12
{

	int x, y;

} p12;
struct Barrier_13
{

	int x, y;

} p13;
struct Barrier_14
{

	int x, y;

} p14;
struct Barrier_15
{

	int x, y;

} p15;
struct Barrier_16
{

	int x, y;

} p16;
struct Barrier_17
{

	int x, y;

} p17;
struct Barrier_18
{

	int x, y;

} p18;
struct Barrier_19
{

	int x, y;

} p19;

int menu_close() {

	srand(time(0));

	RenderWindow window(VideoMode(700, 525), "Snake");

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
	bool 	isOpen();
	int menuNum2 = 0;

	home.setPosition(260, 190);
	restart.setPosition(370, 310);
	exit.setPosition(300, 455);
	exitBackground.setPosition(0, 0);

	Music music;
	music.openFromFile("андертейл.ogg");
	music.play();

	Event e;
	while (window.pollEvent(e))
	{
		if (e.type == Event::Closed)
			window.close();
	}

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
			if (menuNum2 == 1) { music.stop(); window.close(); continue; isMenu2 = true; } /////////вызвать меню 1??
			if (menuNum2 == 2) { music.stop(); window.close(); continue; isMenu2 = true; }
			if (menuNum2 == 3) { music.stop(); window.close(); isMenu2 = false;}
		}

		window.draw(exitBackground);
		window.draw(home);
		window.draw(restart);
		window.draw(exit);

		window.display();
	}
	return 0;
}

void tick_1()
{
	for (int i = num; i > 0; --i)
	{
		s[i].x = s[i - 1].x; s[i].y = s[i - 1].y;
	}

	if (dir == 0) s[0].y += 1;
	if (dir == 1) s[0].x -= 1;
	if (dir == 2) s[0].x += 1;
	if (dir == 3) s[0].y -= 1;


	if ((s[0].x == f.x) && (s[0].y == f.y)) // ЯБЛОКО
	{
		num++; f.x = rand() % N; f.y = rand() % M;
	}

	if (s[0].x > N) s[0].x = 0;  if (s[0].x < 0) s[0].x = N;
	if (s[0].y > M) s[0].y = 0;  if (s[0].y < 0) s[0].y = M;

	for (int i = 1; i < num; i++)
		if (s[0].x == s[i].x && s[0].y == s[i].y)  num = 0;
}

void lvl_1()
{
	srand(time(0));

	RenderWindow window(VideoMode(w, h), "Snake");
	
	Music music;
	music.openFromFile("бездомный бог.ogg");
	music.play();

	Texture t1, t2, t3, t4;
	t1.loadFromFile("текстуры/images/уровень 1_2_1.png"); // фон
	t2.loadFromFile("текстуры/images/яблочко 2.png"); // яблочко
	t3.loadFromFile("текстуры/images/белка 1_2.png"); // змеюка

	Sprite sprite1(t1);
	Sprite sprite2(t2);
	Sprite sprite3(t3);
	Sprite sprite4(t4);

	Clock clock;
	float timer = 0, speed = 0.07; //скорость

	f.x = rand() % N; //спавн яблочка
	f.y = rand() % M;

	while (window.isOpen()) //основной цикл вывода
	{
		float time = clock.getElapsedTime().asSeconds();
		clock.restart();
		timer += time;

		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Left)) dir = 1;
		if (Keyboard::isKeyPressed(Keyboard::Right)) dir = 2;
		if (Keyboard::isKeyPressed(Keyboard::Up)) dir = 3;
		if (Keyboard::isKeyPressed(Keyboard::Down)) dir = 0;

		if (Keyboard::isKeyPressed(Keyboard::A)) dir = 1;
		if (Keyboard::isKeyPressed(Keyboard::D)) dir = 2;
		if (Keyboard::isKeyPressed(Keyboard::W)) dir = 3;
		if (Keyboard::isKeyPressed(Keyboard::S)) dir = 0;

		if (timer > speed) { timer = 0; tick_1(); }

		window.clear(); //рисим

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				sprite1.setPosition(i * size, j * size);  window.draw(sprite1);
			}

		for (int i = 0; i < num; i++)
		{
			sprite3.setPosition(s[i].x * size, s[i].y * size);  window.draw(sprite3);
		}


		for (int m = 0; m < 10000; m++)
		{
			sprite2.setPosition(f.x * size, f.y * size);  window.draw(sprite2);
		}

		if (num == 0)
		{
			music.stop(); window.close(); menu_close();
		}

		window.display();
	}
	return;
}

void tick_2()
{

	for (int i = num; i > 0; --i)
	{
		s[i].x = s[i - 1].x; s[i].y = s[i - 1].y;
	}

	if (dir == 0) s[0].y += 1;
	if (dir == 1) s[0].x -= 1;
	if (dir == 2) s[0].x += 1;
	if (dir == 3) s[0].y -= 1;


	if ((s[0].x == f.x) && (s[0].y == f.y)) // ЯБЛОКО
	{
		num++; f.x = rand() % N; f.y = rand() % M;
	}

	if ((s[0].x == p.x) && (s[0].y == p.y)) // ПРЕГРАДА
	{
		num--; p.x = rand() % N; p.y = rand() % M;
	}


	if ((s[0].x == p1.x) && (s[0].y == p1.y)) // ПРЕГРАДА
	{
		num--; p1.x = rand() % N; p1.y = rand() % M;
	}


	if ((s[0].x == p2.x) && (s[0].y == p2.y)) // ПРЕГРАДА
	{
		num--; p2.x = rand() % N; p2.y = rand() % M;
	}


	if ((s[0].x == p3.x) && (s[0].y == p3.y)) // ПРЕГРАДА
	{
		num--; p3.x = rand() % N; p3.y = rand() % M;
	}


	if ((s[0].x == p4.x) && (s[0].y == p4.y)) // ПРЕГРАДА
	{
		num--; p4.x = rand() % N; p4.y = rand() % M;
	}

	if ((s[0].x == g.x) && (s[0].y == g.y)) // ПРЕГРАДА
	{
		num--; g.x = rand() % N; g.y = rand() % M;
	}

	if (s[0].x > N) s[0].x = 0;  if (s[0].x < 0) s[0].x = N;
	if (s[0].y > M) s[0].y = 0;  if (s[0].y < 0) s[0].y = M;

	for (int i = 1; i < num; i++)
		if (s[0].x == s[i].x && s[0].y == s[i].y)  num = i;
}

void lvl_2()
{
	srand(time(0));

	RenderWindow window(VideoMode(w, h), "Snake");

	Music music;
	music.openFromFile("твоя апрельская ложь.ogg");
	music.play();

	Texture t1, t2, t3, t4, t5;
	t1.loadFromFile("текстуры/images/уровень 3_2_1.png"); // фон
	t2.loadFromFile("текстуры/images/долька мандаринки.png"); // яблочко
	t3.loadFromFile("текстуры/images/белка 3.png"); // змеюка
	t4.loadFromFile("текстуры/images/веточка 2.png"); // преграда
	t5.loadFromFile("текстуры/images/лже долька мандаринки.png"); // лже яблочко

	Sprite sprite1(t1);
	Sprite sprite2(t2);
	Sprite sprite3(t3);
	Sprite sprite4(t4);
	Sprite sprite5(t5);

	Clock clock;
	float timer = 0, speed = 0.01; //скорость

	p.x = rand() % N; //спавн преграды
	p.y = rand() % M;
	p1.x = rand() % N; //спавн преграды
	p1.y = rand() % M;
	p2.x = rand() % N; //спавн преграды
	p2.y = rand() % M;
	p3.x = rand() % N; //спавн преграды
	p3.y = rand() % M;
	p4.x = rand() % N; //спавн преграды
	p4.y = rand() % M;


	while (window.isOpen()) //основной цикл вывода
	{
		float time = clock.getElapsedTime().asSeconds();
		clock.restart();
		timer += time;

		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Left)) dir = 1;
		if (Keyboard::isKeyPressed(Keyboard::Right)) dir = 2;
		if (Keyboard::isKeyPressed(Keyboard::Up)) dir = 3;
		if (Keyboard::isKeyPressed(Keyboard::Down)) dir = 0;

		if (Keyboard::isKeyPressed(Keyboard::A)) dir = 1;
		if (Keyboard::isKeyPressed(Keyboard::D)) dir = 2;
		if (Keyboard::isKeyPressed(Keyboard::W)) dir = 3;
		if (Keyboard::isKeyPressed(Keyboard::S)) dir = 0;

		if (timer > speed) { timer = 0; tick_2(); }

		window.clear(); //рисим

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				sprite1.setPosition(i * size, j * size);  window.draw(sprite1);
			}

		for (int i = 0; i < num; i++)
		{
			sprite3.setPosition(s[i].x * size, s[i].y * size);  window.draw(sprite3);
		}


		for (int m = 0; m < 10; m++)
		{
			sprite2.setPosition(f.x * size, f.y * size);  window.draw(sprite2);
		}

		for (int i = 0; i < 10; i++)
		{
			sprite4.setPosition(p.x * size, p.y * size); window.draw(sprite4);
			sprite4.setPosition(p1.x * size, p1.y * size); window.draw(sprite4);
			sprite4.setPosition(p2.x * size, p2.y * size); window.draw(sprite4);
			sprite4.setPosition(p3.x * size, p3.y * size); window.draw(sprite4);
			sprite4.setPosition(p4.x * size, p4.y * size); window.draw(sprite4);
		}

		for (int i = 0; i < 6; i++)
		{
			Sleep(13);
			g.x = rand() % N; //спавн преграды
			g.y = rand() % M;
			sprite5.setPosition(g.x * size, g.y * size); window.draw(sprite5);
		}

		if (num == 0)
		{
			music.stop(); window.close(); menu_close();
		}

		window.display();
	}
	return;
}

void tick_3()
{
	for (int i = num; i > 0; --i)
	{
		s[i].x = s[i - 1].x; s[i].y = s[i - 1].y;
	}

	if (dir == 0) s[0].y += 1;
	if (dir == 1) s[0].x -= 1;
	if (dir == 2) s[0].x += 1;
	if (dir == 3) s[0].y -= 1;


	if ((s[0].x == f.x) && (s[0].y == f.y)) // ЯБЛОКО
	{
		num++; f.x = rand() % N; f.y = rand() % M;
	}

	if ((s[0].x == f1.x) && (s[0].y == f1.y)) // ЯБЛОКО
	{
		num++; f1.x = rand() % N; f1.y = rand() % M;
	}

	if ((s[0].x == f2.x) && (s[0].y == f2.y)) // ЯБЛОКО
	{
		num++; f2.x = rand() % N; f2.y = rand() % M;
	}

	if ((s[0].x == p.x) && (s[0].y == p.y)) // ПРЕГРАДА
	{
		num--; p.x = rand() % N; p.y = rand() % M;
	}

	if ((s[0].x == p1.x) && (s[0].y == p1.y)) // ПРЕГРАДА
	{
		num--; p1.x = rand() % N; p1.y = rand() % M;
	}

	if ((s[0].x == p2.x) && (s[0].y == p2.y)) // ПРЕГРАДА
	{
		num--; p2.x = rand() % N; p2.y = rand() % M;
	}

	if ((s[0].x == p3.x) && (s[0].y == p3.y)) // ПРЕГРАДА
	{
		num--; p3.x = rand() % N; p3.y = rand() % M;
	}

	if ((s[0].x == p4.x) && (s[0].y == p4.y)) // ПРЕГРАДА
	{
		num--; p4.x = rand() % N; p4.y = rand() % M;
	}

	if ((s[0].x == p5.x) && (s[0].y == p5.y)) // ПРЕГРАДА
	{
		num--; p5.x = rand() % N; p5.y = rand() % M;
	}

	if ((s[0].x == p6.x) && (s[0].y == p6.y)) // ПРЕГРАДА
	{
		num--; p6.x = rand() % N; p6.y = rand() % M;
	}

	if ((s[0].x == p7.x) && (s[0].y == p7.y)) // ПРЕГРАДА
	{
		num--; p7.x = rand() % N; p7.y = rand() % M;
	}

	if ((s[0].x == p8.x) && (s[0].y == p8.y)) // ПРЕГРАДА
	{
		num--; p8.x = rand() % N; p8.y = rand() % M;
	}

	if ((s[0].x == p9.x) && (s[0].y == p9.y)) // ПРЕГРАДА
	{
		num--; p9.x = rand() % N; p9.y = rand() % M;
	}

	if ((s[0].x == p10.x) && (s[0].y == p10.y)) // ПРЕГРАДА
	{
		num--; p10.x = rand() % N; p10.y = rand() % M;
	}

	if ((s[0].x == p11.x) && (s[0].y == p11.y)) // ПРЕГРАДА
	{
		num--; p11.x = rand() % N; p11.y = rand() % M;
	}

	if ((s[0].x == p12.x) && (s[0].y == p12.y)) // ПРЕГРАДА
	{
		num--; p12.x = rand() % N; p12.y = rand() % M;
	}

	if ((s[0].x == p13.x) && (s[0].y == p13.y)) // ПРЕГРАДА
	{
		num--; p13.x = rand() % N; p13.y = rand() % M;
	}

	if ((s[0].x == p14.x) && (s[0].y == p14.y)) // ПРЕГРАДА
	{
		num--; p14.x = rand() % N; p14.y = rand() % M;
	}

	if ((s[0].x == p15.x) && (s[0].y == p15.y)) // ПРЕГРАДА
	{
		num--; p15.x = rand() % N; p15.y = rand() % M;
	}

	if ((s[0].x == p16.x) && (s[0].y == p16.y)) // ПРЕГРАДА
	{
		num--; p16.x = rand() % N; p16.y = rand() % M;
	}

	if ((s[0].x == p17.x) && (s[0].y == p17.y)) // ПРЕГРАДА
	{
		num--; p17.x = rand() % N; p17.y = rand() % M;
	}

	if ((s[0].x == p18.x) && (s[0].y == p18.y)) // ПРЕГРАДА
	{
		num--; p18.x = rand() % N; p18.y = rand() % M;
	}

	if ((s[0].x == p19.x) && (s[0].y == p19.y)) // ПРЕГРАДА
	{
		num--; p19.x = rand() % N; p19.y = rand() % M;
	}

	if (s[0].x > N) s[0].x = 0;  if (s[0].x < 0) s[0].x = N;
	if (s[0].y > M) s[0].y = 0;  if (s[0].y < 0) s[0].y = M;

	for (int i = 1; i < num; i++)
		if (s[0].x == s[i].x && s[0].y == s[i].y)  num = i;
}

 void lvl_3()
{
	srand(time(0));

	RenderWindow window(VideoMode(w, h), "Snake");

	Music music;
	music.openFromFile("АОТ.ogg");
	music.play();

	Texture t1, t2, t3, t4;
	t1.loadFromFile("текстуры/images/уровень 2_1_1.png"); // фон
	t2.loadFromFile("текстуры/images/морковь 2.png"); // яблочко
	t3.loadFromFile("текстуры/images/кроля 3.png"); // змеюка
	t4.loadFromFile("текстуры/images/трава 2.png"); // преграда

	Sprite sprite1(t1);
	Sprite sprite2(t2);
	Sprite sprite3(t3);
	Sprite sprite4(t4);

	Clock clock;
	float timer = 0, speed = 0.09; //скорость

	f.x = rand() % N; //спавн яблочка
	f.y = rand() % M;

	f1.x = rand() % N; //спавн яблочка
	f1.y = rand() % M;

	f2.x = rand() % N; //спавн яблочка
	f2.y = rand() % M;


	p.x = rand() % N + 1; //спавн преграды
	p.y = rand() % M + 1;

	p1.x = rand() % N + 1; //спавн преграды
	p1.y = rand() % M + 1;

	p2.x = rand() % N + 1; //спавн преграды
	p2.y = rand() % M + 1;

	p3.x = rand() % N + 1; //спавн преграды
	p3.y = rand() % M + 1;

	p4.x = rand() % N + 1; //спавн преграды
	p4.y = rand() % M + 1;

	p5.x = rand() % N + 1; //спавн преграды
	p5.y = rand() % M + 1;

	p6.x = rand() % N + 1; //спавн преграды
	p6.y = rand() % M + 1;

	p7.x = rand() % N + 1; //спавн преграды
	p7.y = rand() % M + 1;

	p8.x = rand() % N + 1; //спавн преграды
	p8.y = rand() % M + 1;

	p9.x = rand() % N + 1; //спавн преграды
	p9.y = rand() % M + 1;

	p10.x = rand() % N + 1; //спавн преграды
	p10.y = rand() % M + 1;

	p11.x = rand() % N + 1; //спавн преграды
	p11.y = rand() % M + 1;

	p12.x = rand() % N + 1; //спавн преграды
	p12.y = rand() % M + 1;

	p13.x = rand() % N + 1; //спавн преграды
	p13.y = rand() % M + 1;

	p14.x = rand() % N + 1; //спавн преграды
	p14.y = rand() % M + 1;

	p15.x = rand() % N + 1; //спавн преграды
	p15.y = rand() % M + 1;

	p16.x = rand() % N + 1; //спавн преграды
	p16.y = rand() % M + 1;

	p17.x = rand() % N + 1; //спавн преграды
	p17.y = rand() % M + 1;

	p18.x = rand() % N + 1; //спавн преграды
	p18.y = rand() % M + 1;

	p19.x = rand() % N + 1; //спавн преграды
	p19.y = rand() % M + 1;

	while (window.isOpen()) //основной цикл вывода
	{
		float time = clock.getElapsedTime().asSeconds();
		clock.restart();
		timer += time;

		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Left)) dir = 1;
		if (Keyboard::isKeyPressed(Keyboard::Right)) dir = 2;
		if (Keyboard::isKeyPressed(Keyboard::Up)) dir = 3;
		if (Keyboard::isKeyPressed(Keyboard::Down)) dir = 0;

		if (Keyboard::isKeyPressed(Keyboard::A)) dir = 1;
		if (Keyboard::isKeyPressed(Keyboard::D)) dir = 2;
		if (Keyboard::isKeyPressed(Keyboard::W)) dir = 3;
		if (Keyboard::isKeyPressed(Keyboard::S)) dir = 0;

		if (timer > speed) { timer = 0; tick_3(); }

		window.clear(); //рисим

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				sprite1.setPosition(i * size, j * size);  window.draw(sprite1);
			}

		for (int i = 0; i < num; i++)
		{
			sprite3.setPosition(s[i].x * size, s[i].y * size);  window.draw(sprite3);
		}

		for (int m = 0; m < 10; m++)
		{
			sprite2.setPosition(f.x * size, f.y * size);  window.draw(sprite2);
			sprite2.setPosition(f1.x * size, f1.y * size);  window.draw(sprite2);
			sprite2.setPosition(f2.x * size, f2.y * size);  window.draw(sprite2);
		}

		for (int i = 0; i < 1; i++)
		{
			sprite4.setPosition(p.x * size, p.y * size); window.draw(sprite4);
			sprite4.setPosition(p1.x * size, p1.y * size); window.draw(sprite4);
			sprite4.setPosition(p2.x * size, p2.y * size); window.draw(sprite4);
			sprite4.setPosition(p3.x * size, p3.y * size); window.draw(sprite4);
			sprite4.setPosition(p4.x * size, p4.y * size); window.draw(sprite4);
			sprite4.setPosition(p5.x * size, p5.y * size); window.draw(sprite4);
			sprite4.setPosition(p6.x * size, p6.y * size); window.draw(sprite4);
			sprite4.setPosition(p7.x * size, p7.y * size); window.draw(sprite4);
			sprite4.setPosition(p8.x * size, p8.y * size); window.draw(sprite4);
			sprite4.setPosition(p9.x * size, p9.y * size); window.draw(sprite4);
			sprite4.setPosition(p10.x * size, p10.y * size); window.draw(sprite4);
			sprite4.setPosition(p11.x * size, p11.y * size); window.draw(sprite4);
			sprite4.setPosition(p12.x * size, p12.y * size); window.draw(sprite4);
			sprite4.setPosition(p13.x * size, p13.y * size); window.draw(sprite4);
			sprite4.setPosition(p14.x * size, p14.y * size); window.draw(sprite4);
			sprite4.setPosition(p15.x * size, p15.y * size); window.draw(sprite4);
			sprite4.setPosition(p16.x * size, p16.y * size); window.draw(sprite4);
			sprite4.setPosition(p17.x * size, p17.y * size); window.draw(sprite4);
			sprite4.setPosition(p18.x * size, p18.y * size); window.draw(sprite4);
			sprite4.setPosition(p19.x * size, p19.y * size); window.draw(sprite4);
		}

		if (num == 0)
		{
			music.stop(); window.close(); menu_close();
		}

		window.display();
	}
	return;
}


int menu_open(RenderWindow& window) 
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

	Event e;
	while (window.pollEvent(e))
	{
		if (e.type == Event::Closed)
			window.close();
	}

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
			if (menuNum == 1) { music.stop(); window.display();  lvl_1(); isMenu = true; }
			if (menuNum == 2) { music.stop(); window.display();  lvl_3(); isMenu = true; }
			if (menuNum == 3) { music.stop(); window.display();  lvl_2(); isMenu = true; }
			if (menuNum == 4) { window.close(); return -1; isMenu = false; }
		}

			window.draw(openBackground);
			window.draw(lvl1);
			window.draw(lvl2);
			window.draw(lvl3);
			window.draw(exit);

			window.display();
		}
	return 0;
	}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	RenderWindow window(sf::VideoMode(700, 525), "Snake");

	menu_open(window);

	window.display();
	return 0;
}