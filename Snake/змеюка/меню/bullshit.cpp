#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <time.h>

#include "windows.h"

using namespace sf;

int N = 20, M = 15;
int size = 35;
int w = size * N;
int h = size * M;

int dir, num = 1, num_2 = 2, num_3 = 3;

struct Snake
{

	int x, y;

}  s[100]; //����� ������

struct Fruit
{

	int x, y;

} f; // ������� 1
struct Fruit_1
{

	int x, y;

} f1; //������� 2
struct Fruit_2
{

	int x, y;

} f2; //������� 3

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


	if ((s[0].x == f.x) && (s[0].y == f.y)) // ������
	{
		num++; f.x = rand() % N; f.y = rand() % M;
	}

	if (s[0].x > N) s[0].x = 0;  if (s[0].x < 0) s[0].x = N;
	if (s[0].y > M) s[0].y = 0;  if (s[0].y < 0) s[0].y = M;

	for (int i = 1; i < num; i++)
		if (s[0].x == s[i].x && s[0].y == s[i].y)  num = i;
}

int lvl_1()
{
	srand(time(0));

	RenderWindow window(VideoMode(w, h), "Snake");

	Music music;
	music.openFromFile("��������� ���.ogg");
	music.play();

	Texture t1, t2, t3, t4;
	t1.loadFromFile("��������/images/������� 1_2_1.png"); // ���
	t2.loadFromFile("��������/images/������� 2.png"); // �������
	t3.loadFromFile("��������/images/����� 1_2.png"); // ������

	Sprite sprite1(t1);
	Sprite sprite2(t2);
	Sprite sprite3(t3);
	Sprite sprite4(t4);

	Clock clock;
	float timer = 0, speed = 0.07; //��������

	f.x = rand() % N; //����� �������
	f.y = rand() % M;

	while (window.isOpen()) //�������� ���� ������
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

		window.clear(); //�����

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
			window.close();
		}

		window.display();
	}

	return 0;
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


	if ((s[0].x == f.x) && (s[0].y == f.y)) // ������
	{
		num++; f.x = rand() % N; f.y = rand() % M;
	}

	if ((s[0].x == p.x) && (s[0].y == p.y)) // ��������
	{
		num--; p.x = rand() % N; p.y = rand() % M;
	}


	if ((s[0].x == p1.x) && (s[0].y == p1.y)) // ��������
	{
		num--; p1.x = rand() % N; p1.y = rand() % M;
	}


	if ((s[0].x == p2.x) && (s[0].y == p2.y)) // ��������
	{
		num--; p2.x = rand() % N; p2.y = rand() % M;
	}


	if ((s[0].x == p3.x) && (s[0].y == p3.y)) // ��������
	{
		num--; p3.x = rand() % N; p3.y = rand() % M;
	}


	if ((s[0].x == p4.x) && (s[0].y == p4.y)) // ��������
	{
		num--; p4.x = rand() % N; p4.y = rand() % M;
	}

	if ((s[0].x == g.x) && (s[0].y == g.y)) // ��������
	{
		num--; g.x = rand() % N; g.y = rand() % M;
	}

	if (s[0].x > N) s[0].x = 0;  if (s[0].x < 0) s[0].x = N;
	if (s[0].y > M) s[0].y = 0;  if (s[0].y < 0) s[0].y = M;

	for (int i = 1; i < num; i++)
		if (s[0].x == s[i].x && s[0].y == s[i].y)  num = i;
}

int lvl_2()
{
	srand(time(0));

	RenderWindow window(VideoMode(w, h), "Snake");

	Music music;
	music.openFromFile("���� ���������� ����.ogg");
	music.play();

	Texture t1, t2, t3, t4, t5;
	t1.loadFromFile("��������/images/������� 3_2_1.png"); // ���
	t2.loadFromFile("��������/images/������ ����������.png"); // �������
	t3.loadFromFile("��������/images/����� 3.png"); // ������
	t4.loadFromFile("��������/images/������� 2.png"); // ��������
	t5.loadFromFile("��������/images/��� ������ ����������.png"); // ��� �������

	Sprite sprite1(t1);
	Sprite sprite2(t2);
	Sprite sprite3(t3);
	Sprite sprite4(t4);
	Sprite sprite5(t5);

	Clock clock;
	float timer = 0, speed = 0.01; //��������

	p.x = rand() % N; //����� ��������
	p.y = rand() % M;
	p1.x = rand() % N; //����� ��������
	p1.y = rand() % M;
	p2.x = rand() % N; //����� ��������
	p2.y = rand() % M;
	p3.x = rand() % N; //����� ��������
	p3.y = rand() % M;
	p4.x = rand() % N; //����� ��������
	p4.y = rand() % M;


	while (window.isOpen()) //�������� ���� ������
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

		window.clear(); //�����

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
			g.x = rand() % N; //����� ��������
			g.y = rand() % M;
			sprite5.setPosition(g.x * size, g.y * size); window.draw(sprite5);
		}

		if (num == 0)
		{
			window.close();
		}

		window.display();
	}

	return 0;
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


	if ((s[0].x == f.x) && (s[0].y == f.y)) // ������
	{
		num++; f.x = rand() % N; f.y = rand() % M;
	}

	if ((s[0].x == f1.x) && (s[0].y == f1.y)) // ������
	{
		num++; f1.x = rand() % N; f1.y = rand() % M;
	}

	if ((s[0].x == f2.x) && (s[0].y == f2.y)) // ������
	{
		num++; f2.x = rand() % N; f2.y = rand() % M;
	}

	if ((s[0].x == p.x) && (s[0].y == p.y)) // ��������
	{
		num--; p.x = rand() % N; p.y = rand() % M;
	}

	if ((s[0].x == p1.x) && (s[0].y == p1.y)) // ��������
	{
		num--; p1.x = rand() % N; p1.y = rand() % M;
	}

	if ((s[0].x == p2.x) && (s[0].y == p2.y)) // ��������
	{
		num--; p2.x = rand() % N; p2.y = rand() % M;
	}

	if ((s[0].x == p3.x) && (s[0].y == p3.y)) // ��������
	{
		num--; p3.x = rand() % N; p3.y = rand() % M;
	}

	if ((s[0].x == p4.x) && (s[0].y == p4.y)) // ��������
	{
		num--; p4.x = rand() % N; p4.y = rand() % M;
	}

	if ((s[0].x == p5.x) && (s[0].y == p5.y)) // ��������
	{
		num--; p5.x = rand() % N; p5.y = rand() % M;
	}

	if ((s[0].x == p6.x) && (s[0].y == p6.y)) // ��������
	{
		num--; p6.x = rand() % N; p6.y = rand() % M;
	}

	if ((s[0].x == p7.x) && (s[0].y == p7.y)) // ��������
	{
		num--; p7.x = rand() % N; p7.y = rand() % M;
	}

	if ((s[0].x == p8.x) && (s[0].y == p8.y)) // ��������
	{
		num--; p8.x = rand() % N; p8.y = rand() % M;
	}

	if ((s[0].x == p9.x) && (s[0].y == p9.y)) // ��������
	{
		num--; p9.x = rand() % N; p9.y = rand() % M;
	}

	if ((s[0].x == p10.x) && (s[0].y == p10.y)) // ��������
	{
		num--; p10.x = rand() % N; p10.y = rand() % M;
	}

	if ((s[0].x == p11.x) && (s[0].y == p11.y)) // ��������
	{
		num--; p11.x = rand() % N; p11.y = rand() % M;
	}

	if ((s[0].x == p12.x) && (s[0].y == p12.y)) // ��������
	{
		num--; p12.x = rand() % N; p12.y = rand() % M;
	}

	if ((s[0].x == p13.x) && (s[0].y == p13.y)) // ��������
	{
		num--; p13.x = rand() % N; p13.y = rand() % M;
	}

	if ((s[0].x == p14.x) && (s[0].y == p14.y)) // ��������
	{
		num--; p14.x = rand() % N; p14.y = rand() % M;
	}

	if ((s[0].x == p15.x) && (s[0].y == p15.y)) // ��������
	{
		num--; p15.x = rand() % N; p15.y = rand() % M;
	}

	if ((s[0].x == p16.x) && (s[0].y == p16.y)) // ��������
	{
		num--; p16.x = rand() % N; p16.y = rand() % M;
	}

	if ((s[0].x == p17.x) && (s[0].y == p17.y)) // ��������
	{
		num--; p17.x = rand() % N; p17.y = rand() % M;
	}

	if ((s[0].x == p18.x) && (s[0].y == p18.y)) // ��������
	{
		num--; p18.x = rand() % N; p18.y = rand() % M;
	}

	if ((s[0].x == p19.x) && (s[0].y == p19.y)) // ��������
	{
		num--; p19.x = rand() % N; p19.y = rand() % M;
	}

	if (s[0].x > N) s[0].x = 0;  if (s[0].x < 0) s[0].x = N;
	if (s[0].y > M) s[0].y = 0;  if (s[0].y < 0) s[0].y = M;

	for (int i = 1; i < num; i++)
		if (s[0].x == s[i].x && s[0].y == s[i].y)  num = i;
}

int lvl_3()
{
	srand(time(0));

	RenderWindow window(VideoMode(w, h), "Snake");

	Music music;
	music.openFromFile("���.ogg");
	music.play();

	Texture t1, t2, t3, t4;
	t1.loadFromFile("��������/images/������� 2_1_1.png"); // ���
	t2.loadFromFile("��������/images/������� 2.png"); // �������
	t3.loadFromFile("��������/images/����� 3.png"); // ������
	t4.loadFromFile("��������/images/����� 2.png"); // ��������

	Sprite sprite1(t1);
	Sprite sprite2(t2);
	Sprite sprite3(t3);
	Sprite sprite4(t4);

	Clock clock;
	float timer = 0, speed = 0.09; //��������

	f.x = rand() % N; //����� �������
	f.y = rand() % M;

	f1.x = rand() % N; //����� �������
	f1.y = rand() % M;

	f2.x = rand() % N; //����� �������
	f2.y = rand() % M;


	p.x = rand() % N + 1; //����� ��������
	p.y = rand() % M + 1;

	p1.x = rand() % N + 1; //����� ��������
	p1.y = rand() % M + 1;

	p2.x = rand() % N + 1; //����� ��������
	p2.y = rand() % M + 1;

	p3.x = rand() % N + 1; //����� ��������
	p3.y = rand() % M + 1;

	p4.x = rand() % N + 1; //����� ��������
	p4.y = rand() % M + 1;

	p5.x = rand() % N + 1; //����� ��������
	p5.y = rand() % M + 1;

	p6.x = rand() % N + 1; //����� ��������
	p6.y = rand() % M + 1;

	p7.x = rand() % N + 1; //����� ��������
	p7.y = rand() % M + 1;

	p8.x = rand() % N + 1; //����� ��������
	p8.y = rand() % M + 1;

	p9.x = rand() % N + 1; //����� ��������
	p9.y = rand() % M + 1;

	p10.x = rand() % N + 1; //����� ��������
	p10.y = rand() % M + 1;

	p11.x = rand() % N + 1; //����� ��������
	p11.y = rand() % M + 1;

	p12.x = rand() % N + 1; //����� ��������
	p12.y = rand() % M + 1;

	p13.x = rand() % N + 1; //����� ��������
	p13.y = rand() % M + 1;

	p14.x = rand() % N + 1; //����� ��������
	p14.y = rand() % M + 1;

	p15.x = rand() % N + 1; //����� ��������
	p15.y = rand() % M + 1;

	p16.x = rand() % N + 1; //����� ��������
	p16.y = rand() % M + 1;

	p17.x = rand() % N + 1; //����� ��������
	p17.y = rand() % M + 1;

	p18.x = rand() % N + 1; //����� ��������
	p18.y = rand() % M + 1;

	p19.x = rand() % N + 1; //����� ��������
	p19.y = rand() % M + 1;

	while (window.isOpen()) //�������� ���� ������
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

		window.clear(); //�����

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
			window.close();
		}

		window.display();
	}

	return 0;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	RenderWindow window(sf::VideoMode(700, 525), "������");

	menu_open(window);

	window.display();
	return 0;
}