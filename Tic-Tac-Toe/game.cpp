#include <iostream>
#include <cmath>
#include <string>
#include <locale>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <io.h>
#include <stdio.h>
#include <conio.h>
#include <fcntl.h>
#include <io.h>
#include <wchar.h>
#include <stdlib.h>
#include <ctime>
#include <xstring>
#include <fstream>     
#include "tchar.h"
#include <cstring>

using namespace std;

string name_1;
string name_2;
int _getch();

char board[9] = { '-','-', '-', '-', '-', '-', '-', '-', '-' };

bool victory(char winner)//условие выигрыша
{
	int matrix[][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} };
	for (int i = 0; i < 8; i++)
	{
		int count = 0;
		for (int j = 0; j <= 2; j++)
		{
			if (board[matrix[i][j]] == winner)
				count++;
			if (count == 3)
				return true;
		}
	}
	return false;
}

void header()
{
	_setmode(_fileno(stdout), _O_WTEXT); {
		wcout << LR"(
                                                     Поле гри)";

		wcout << LR"(
                                                  ┌───────────┐)" << endl;
		wcout << LR"(                                                  │ )" << board[0] << LR"( ╎ )" << board[1] << LR"( ╎ )" << board[2] << LR"( │)" << endl;
		wcout << LR"(                                                  │───╎───╎───│)" << endl;
		wcout << LR"(                                                  │ )" << board[3] << LR"( ╎ )" << board[4] << LR"( ╎ )" << board[5] << LR"( │)" << endl;
		wcout << LR"(                                                  │───╎───╎───│)" << endl;
		wcout << LR"(                                                  │ )" << board[6] << LR"( ╎ )" << board[7] << LR"( ╎ )" << board[8] << LR"( │)" << endl;
		wcout << LR"(                                                  │───╎───╎───│ 
                                                  └───────────┘)" << endl;
	}
}

void name_game()
{
	_setmode(_fileno(stdout), _O_WTEXT); 
	{
		wcout << "                 " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
		<< "                 " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "\n"
		<< "                 " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
		<< "                 " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
		<< "                 " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
		<< "                 " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << endl;
    }
	_setmode(_fileno(stdout), _O_TEXT);
}

void rules()
{
	_setmode(_fileno(stdout), _O_WTEXT);
	{
		wcout << "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "\n"
			<< "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << "\n"
			<< "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "\n"
			<< "                                    " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << endl;
	
		wcout << LR"(
                                                    [Правила]
	  ┌───────────┐
	  │ x ╎ 0 ╎ x │   1] У грі беруть участь два гравці;
	  │───╎───╎───│   2] Гравець №1 ходитиме хрестиками [x], гравець №2 – нулями [0].
	  │ 0 ╎ x ╎ x │   3] Суть – зібрати комбінацію з 3-х послідовних [х] або [0].
	  │───╎───╎───│   4] Переможе той, хто найперше збере комбінацію.
	  │ Ø ╎ Ø ╎ Ø │   5] Традиційно, першим ходить гравець, який грає за [x].
	  │───╎───╎───│
	  └───────────┘   [!] Важливо: враховуються комбінації за діагоналями, за вертикалями, за горизонталями.)" << endl;

	}

	_setmode(_fileno(stdout), _O_TEXT);

}

void game_type()
{
	_setmode(_fileno(stdout), _O_WTEXT);
	{
		wcout << "                    " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "\n"
			<< "                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                    " << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                    " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << endl;

		wcout << LR"(
                                                    [Тип гри]

                                       [1] — 1х1 проти знайомого;
                                       [2] — грати проти комп'ютера.)" << endl;
		wcout << LR"(
                                                  ┌───────────┐
                                                  │ 1 ╎ 2 ╎ 3 │   
                                                  │───╎───╎───│
                                                  │ 4 ╎ 5 ╎ 6 │  
                                                  │───╎───╎───│
                                                  │ 7 ╎ 8 ╎ 9 │   
                                                  │───╎───╎───│ 
                                                  └───────────┘)" << endl; 
	}
	_setmode(_fileno(stdout), _O_TEXT);
}

void start()
{
	_setmode(_fileno(stdout), _O_WTEXT);
	{
		wcout << "                           " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                           " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                           " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                           " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "\n"
			<< "                           " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                           " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << endl;

		wcout << LR"(
                                                   Формат поля)";

		wcout << LR"(
                                                  ┌───────────┐
                                                  │ 1 ╎ 2 ╎ 3 │   
                                                  │───╎───╎───│
                                                  │ 4 ╎ 5 ╎ 6 │  
                                                  │───╎───╎───│
                                                  │ 7 ╎ 8 ╎ 9 │   
                                                  │───╎───╎───│ 
                                                  └───────────┘)" << endl;
	}
	_setmode(_fileno(stdout), _O_TEXT);
}

void error()
{
	_setmode(_fileno(stdout), _O_WTEXT);
	{
		wcout << "                                      " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << "\n"
			<< "                                      " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                                      " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "\n"
			<< "                                      " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                                      " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << "\n"
			<< "                                      " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << endl;
	}
	_setmode(_fileno(stdout), _O_TEXT);
}

void game_over()
{
	_setmode(_fileno(stdout), _O_WTEXT);
	{
		wcout << "\n" << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << "\n"
			<< "   " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "\n"
			<< "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "   " << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << "\n"
			<< "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << endl;
	}
	_setmode(_fileno(stdout), _O_TEXT);
}

int get_move()
{
	system("cls");

	start();

	header();

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	_setmode(_fileno(stdout), _O_TEXT);

	int move;

	cout << "              Будь ласка, оберіть клітинку [1 - 9]: ";
	
	cin >> move;

	while (move > 9 || move < 1 || board[move - 1] != '-')
	{
		{
			cout << "                                                     Помилка!\n"
				"                Оберіть вільну клітинку [1-9]: ";

			cin >> move;
		}
	}
	return move;
}

char play()
{
	int turn = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	_setmode(_fileno(stdout), _O_TEXT);

	while (!victory('X') && !victory('O') && turn < 9)
	{
		int move = get_move();
		if (turn % 2 == 0)
		{
			board[move - 1] = 'X';
			if (victory('X'))
			{
				cout << "\n                                                Перемога гравця [X]." << endl;
				cout << "                                                 Вітаємо, "; cout << name_1 << "!" << endl;
				return 'X';
			}
		}
		else
		{
			board[move - 1] = 'O';
			if (victory('O'))
			{
				cout << "\n                                                Перемога гравця [0]." << endl;
				cout << "                                                 Вітаємо, "; cout << name_2 << "!" << endl;
				return 'O';
			}
		}

		turn++;
	}
	cout << "                                                     Нічия!" << endl;

	return 'D';
}

int _tmain()
{
	system("Title TicTacToe");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	_setmode(_fileno(stdout), _O_TEXT);

	cout << "\n                                    Натисніть будь-яку клавішу, аби вийти з гри.\n";

	_getch();

	return 0;
}

int main()
{
	char operation;

	system("color f0"); /* фон та текст */

	name_game();

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\n                                                     Вітання !!\n" 
		"	                                Ласкаво просимо до гри «Tic-Tac-Toe».\n" 
		"                                Перед початком, рекомендуємо ознайомитися з правилами.\n\n" 
		"                            Будь ласка, натисніть [+], якщо бажаєте прослухати правила гри.\n"  << endl;

	_getch(); system("cls");

	rules();

	cout << "\n                                 Якщо ви хочете розпочати гру, натисніть [+].\n" << endl;

	_getch(); system("cls");

	game_type();

	cin >> operation;

	switch (operation)
	{
	case ('1'):
		cout << "Введіть ім'я [X]: "; cin >> name_1;
		cout << "Введіть ім'я [0]: "; cin >> name_2;

		system("cls");
		
		get_move();

		play();

		game_over();

		_tmain();

		break;
	case ('2'):
		cout << "Введіть ім'я [X]: "; cin >> name_1;
		cout << "Введіть ім'я [0]: "; cin >> name_2;

		system("cls");

		error();

		cout << "\n                                         Перепрошуємо, " << name_1 << " та " << name_2 << ".\n"
			"                                    Наразі ця частина гри знаходиться у розробці.\n"
			"\n                     І нам теж дуже цікаво, коли розробник навчиться програмувати не на колінках..." << endl;

		game_over();

		_tmain();

		break;
	default:
		cout << "                     Виникла технічна помилка. Будь ласка, спробуйте ще раз через деякий час. \n" << endl;

		system("pause");
	}
	return 0;
}