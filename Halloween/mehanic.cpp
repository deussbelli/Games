#include <iostream>
#include <io.h>
#include <iomanip>

#include <time.h>
#include <tchar.h>

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>

#include <locale>

#include <cstring>
#include <cctype>
#include <cstdlib>
#include <conio.h>
#include <cmath>
#include <ctime>

#include <xstring>

#include <windows.h>
#include <wchar.h>

#include <process.h> 

#include <direct.h>

#include <fcntl.h>
#include <fstream>    
#include "MMSystem.h"

/*
▒▒▒▒▒▐▀▀▀█▄▒▒▒▒▒▒▒▒▒
▒▒▒▒█▀─────█▒▒▒▒▒▒▒▒
▒▒▒█────▄─▄─▌▒▒▒▒▒▒▒
▒▒▒▌───██─█▌▌▒▒▒▒▒▒▒
▒▒▒▌───█▌──▌▌▒▒▒▒▒▒▒
▒▒▒▌────────▌▒▒▒▒▒▒▒
▒▒█─────────▐▒▒▒▒▒▒▒
▒▐▌─▐───────▐▄▄▒▒▒▒▒
▒▐▌─▐────────▄▀▀█▒▒▒
▒█──▀▄──▄█▄▀▀▒▒▒▌▀▄▒
▐▌────██▀█░█▄▒▄▄█▀▀▌
▐▌──▌▐───▐░░▐▀░░░░░▌
▐▌──▌────▐░░▐░░░░░░▌
▐───▌────▐░░▐░░░░░░▌
▐───█────▐░░▐░░░░░░▌
▐───█────▐░░▐░░░░░░▌
▐───█─────▀█▐▄▄▄█▀▀▒
▀▄▄─▐───────▄█▒▒▒▒▒▒
▒▒▒▀█───█▄▀▀▀▒▒▒▒▒▒▒*/

//            \x1b[ТИП;ЦВЕТ ТЕКСТА;ЦВЕТ ФОНАm
// 
//            cout << "\x1B[8;37;47m \x1B[0;0;0m"; - разделитель
//            cout << "\x1B[1;37;42m G \x1B[0;0;0m"; - зелёный
//            cout << "\x1B[1;33;43m Y \x1B[0;0;0m"; - жёлтый
//            cout << "\x1B[1;31;41m R \x1B[0;0;0m"; - красный
//            cout << "\x1B[1;30;47m G \x1B[0;0;0m"; - серый
// 
//            \x1b[0m // сброс оформления//

#define RESET "\x1B[0m";
#define RED "\x1B[1;37;41m";
#define GREEN "\x1B[1;37;42m";
#define YELLOW "\x1B[1;33;43m";
#define YELLOW_2 "\x1B[0;30;43m";
#define GREY "\x1B[1;30;47m";
#define BLACK "\x1B[1;37;40m";

using namespace std;

string name;
int _getch();

char word[5];
char attempt_1[5];
char attempt_2[5];
char attempt_3[5];
char attempt_4[5];
char attempt_5[5];
char attempt_6[5];
char win  = 'n';

void matrix(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
            cout << " ";
           cout << GREY; cout << " ? ";  cout << RESET;
		}
		cout << endl;
		cout << endl;
	}

}

void c1()
{
		cout << GREEN;
}
void c2()
{
		cout << YELLOW;
}
void c3()
{
		cout << GREY;
}

void keyboard()
{
    cout << endl;
    cout << "                                    ";  
    cout << " ";
    cout << " Q ";
    cout << " ";
    cout << " W ";
    cout << " ";
    cout << " E ";
    cout << " ";
    cout << " R ";
    cout << " ";
    cout << " T ";
    cout << " ";
    cout << " Y ";
    cout << " ";
    cout << " U ";
    cout << " ";
    cout << " I ";
    cout << " ";
    cout << " O ";    
    cout << " ";
    cout << " P ";
    cout << " ";
    cout << endl << endl;
    cout << "                                      ";
    cout << " ";
    cout << " A ";
    cout << " ";
    cout << " S ";
    cout << " "; 
    cout << " D ";
    cout << " ";
    cout << " F ";
    cout << " ";
    cout << " G ";
    cout << " ";
    cout << " H ";
    cout << " ";
    cout << " J ";
    cout << " ";
    cout << " K ";
    cout << " ";
    cout << " L ";
    cout << " ";
    cout << endl << endl;
    cout << "                                          ";
    cout << " ";
    cout << " Z ";
    cout << " ";
    cout << " X ";
    cout << " ";
    cout << " C ";
    cout << " ";
    cout << " V ";
    cout << " ";
    cout << " B ";
    cout << " ";
    cout << " N ";
    cout << " ";
    cout << " M ";
    cout << " ";
}

void attempt_1c()
{
  
    for (int i = 0; i < 5; i++)
    {
        attempt_1[i] = toupper(attempt_1[i]);
    }

   
    if (attempt_1[0] == word[0] && attempt_1[1] == word[1] && attempt_1[2] == word[2] && attempt_1[3] == word[3] && attempt_1[4] == word[4])
    {
        
        for (int i = 0; i < 5; i++)
        {
   
            if (attempt_1[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_1[i] << " ";
                cout << RESET;
            }
        }
        cout << endl << endl;
        cout << "                                              "; matrix(5);
        cout << endl;
        cout << "                                                   "; cout << GREEN;  cout << "[ Вітаємо ]"; cout << RESET; cout << endl;
        cout << "\n                                                      " << name << "!\n" << endl;
        cout << "                           "; cout << "[ Загадане слово ]:";
        c1();
        for (int i = 0; i < 5; i++)
        {
            c1();
            cout << " " << attempt_1[i] << " ";
            cout << RESET;
        }
        win = 'y';
    }
    else
    {
        
        for (int i = 0; i < 5; i++)
        {
            if (attempt_1[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_1[i] << " ";
                cout << RESET;
            }
            else if (attempt_1[i] != word[i] && (attempt_1[i] == word[0] || attempt_1[i] == word[1] || attempt_1[i] == word[2] || attempt_1[i] == word[3] || attempt_1[i] == word[4]))
            {
                cout << " ";
                c2();
                cout << " " << attempt_1[i] << " ";
                cout << RESET;
            }
            else
            {
                cout << " ";
                c3();
                cout << " " << attempt_1[i] << " ";
                cout << RESET;
            }
        }

    }
    cout << endl << endl;
}

void attempt_2c()
{
  
    for (int i = 0; i < 5; i++)
    {
        attempt_2[i] = toupper(attempt_2[i]);
    }

    
    if (attempt_2[0] == word[0] && attempt_2[1] == word[1] && attempt_2[2] == word[2] && attempt_2[3] == word[3] && attempt_2[4] == word[4])
    {
        
        for (int i = 0; i < 5; i++)
        {
            
            if (attempt_2[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_2[i] << " ";
                cout << RESET;
            }
        }
        cout << endl << endl;
        cout << "                                              "; matrix(4);
        cout << endl;
        cout << "                                                   "; cout << GREEN;  cout << "[ Вітаємо ]"; cout << RESET; cout << endl;
        cout << "\n                                                      " << name << "!\n" << endl;
        cout << "                           "; cout << "[ Загадане слово ]:";
        for (int i = 0; i < 5; i++)
        {
            cout << " ";
            c1();
            cout << " " << attempt_2[i] << " ";
            cout << RESET;
        }
        win = 'y';
    }
    else
    {
        
        for (int i = 0; i < 5; i++)
        {
            if (attempt_2[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_2[i] << " ";
                cout << RESET;
            }
            else if (attempt_2[i] != word[i] && (attempt_2[i] == word[0] || attempt_2[i] == word[1] || attempt_2[i] == word[2] || attempt_2[i] == word[3] || attempt_2[i] == word[4]))
            {
                cout << " ";
                c2();
                cout << " " << attempt_2[i] << " ";
                cout << RESET;
            }
            else
            {
                cout << " ";
                c3();
                cout << " " << attempt_2[i] << " ";
                cout << RESET;
            }
        }
    }
    cout << endl << endl;
}

void attempt_3c()
{
  
    for (int i = 0; i < 5; i++)
    {
        attempt_3[i] = toupper(attempt_3[i]);
    }

    
    if (attempt_3[0] == word[0] && attempt_3[1] == word[1] && attempt_3[2] == word[2] && attempt_3[3] == word[3] && attempt_3[4] == word[4])
    {
        
        for (int i = 0; i < 5; i++)
        {
            
            if (attempt_3[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_3[i] << " ";
                cout << RESET;
            }
        }
        cout << endl << endl;
        cout << "                                              "; matrix(3);
        cout << endl;
        cout << "                                                   "; cout << GREEN;  cout << "[ Вітаємо ]"; cout << RESET; cout << endl;
        cout << "\n                                                      " << name << "!\n" << endl;
        cout << "                           "; cout << "[ Загадане слово ]:";
        for (int i = 0; i < 5; i++)
        {
            cout << " ";
            c1();
            cout << " " << attempt_3[i] << " ";
            cout << RESET;
        }
        win = 'y';
    }
    else
    {
        
        for (int i = 0; i < 5; i++)
        {
            if (attempt_3[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_3[i] << " ";
                cout << RESET;
            }
            else if (attempt_3[i] != word[i] && (attempt_3[i] == word[0] || attempt_3[i] == word[1] || attempt_3[i] == word[2] || attempt_3[i] == word[3] || attempt_3[i] == word[4]))
            {
                cout << " ";
                c2();
                cout << " " << attempt_3[i] << " ";
                cout << RESET;
            }
            else
            {
                cout << " ";
                c3();
                cout << " " << attempt_3[i] << " ";
                cout << RESET;
            }
        }
    }
    cout << endl << endl;
}

void attempt_4c()
{
  
    for (int i = 0; i < 5; i++)
    {
        attempt_4[i] = toupper(attempt_4[i]);
    }

    
    if (attempt_4[0] == word[0] && attempt_4[1] == word[1] && attempt_4[2] == word[2] && attempt_4[3] == word[3] && attempt_4[4] == word[4])
    {
        
        for (int i = 0; i < 5; i++)
        {
            
            if (attempt_4[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_4[i] << " ";
                cout << RESET;
            }
        }
        cout << endl << endl;
        cout << "                                              ";   matrix(2);
        cout << endl;
        cout << "                                                   "; cout << GREEN;  cout << "[ Вітаємо ]"; cout << RESET; cout << endl;
        cout << "\n                                                      " << name << "!\n" << endl;
        cout << "                           "; cout << "[ Загадане слово ]:";
        for (int i = 0; i < 5; i++)
        {
            cout << " ";
            c1();
            cout << " " << attempt_4[i] << " ";
            cout << RESET;
        }
        win = 'y';
    }
    else
    {
        
        for (int i = 0; i < 5; i++)
        {
            if (attempt_4[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_4[i] << " ";
                cout << RESET;
            }
            else if (attempt_4[i] != word[i] && (attempt_4[i] == word[0] || attempt_4[i] == word[1] || attempt_4[i] == word[2] || attempt_4[i] == word[3] || attempt_4[i] == word[4]))
            {
                cout << " ";
                c2();
                cout << " " << attempt_4[i] << " ";
                cout << RESET;
            }
            else
            {
                cout << " ";
                c3();
                cout << " " << attempt_4[i] << " ";
                cout << RESET;
            }
        }
    }
    cout << endl << endl;
}

void attempt_5c()
{
  
    for (int i = 0; i < 5; i++)
    {
        attempt_5[i] = toupper(attempt_5[i]);
    }

    
    if (attempt_5[0] == word[0] && attempt_5[1] == word[1] && attempt_5[2] == word[2] && attempt_5[3] == word[3] && attempt_5[4] == word[4])
    {
        
        for (int i = 0; i < 5; i++)
        {
            
            if (attempt_5[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_5[i] << " ";
                cout << RESET;
            }
        }
        cout << endl << endl;
        cout << "                                              "; matrix(1);
        cout << endl;
        cout << "                                                   "; cout << GREEN;  cout << "[ Вітаємо ]"; cout << RESET; cout << endl;
        cout << "\n                                                      " << name << "!\n" << endl;
        cout << "                           "; cout << "[ Загадане слово ]:";
        for (int i = 0; i < 5; i++)
        {
            cout << " ";
            c1();
            cout << " " << attempt_5[i] << " ";
            cout << RESET;
        }
        win = 'y';
    }
    else
    {
       
        for (int i = 0; i < 5; i++)
        {
            if (attempt_5[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_5[i] << " ";
                cout << RESET;
            }
            else if (attempt_5[i] != word[i] && (attempt_5[i] == word[0] || attempt_5[i] == word[1] || attempt_5[i] == word[2] || attempt_5[i] == word[3] || attempt_5[i] == word[4]))
            {
                cout << " ";
                c2();
                cout << " " << attempt_5[i] << " ";
                cout << RESET;
            }
            else
            {
                cout << " ";
                c3();
                cout << " " << attempt_5[i] << " ";
                cout << RESET;
            }
        }
    }
    cout << endl << endl;
}

void attempt_6c()
{
  
    for (int i = 0; i < 5; i++)
    {
        attempt_6[i] = toupper(attempt_6[i]);
    }

    
    if (attempt_6[0] == word[0] && attempt_6[1] == word[1] && attempt_6[2] == word[2] && attempt_6[3] == word[3] && attempt_6[4] == word[4])
    {
        
        for (int i = 0; i < 5; i++)
        {
           
            if (attempt_6[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_6[i] << " ";
                cout << RESET;
            }
        }
        cout << endl << endl;
        cout << "\n                                                   "; cout << GREEN;  cout << "[ Вітаємо ]"; cout << RESET; cout << endl;
        cout << "\n                                                      " << name << "!\n" << endl;
        cout << "                           "; cout << "[ Загадане слово ]:";
        for (int i = 0; i < 5; i++)
        {
            cout << " ";
            c1();
            cout << " " << attempt_6[i] << " ";
            cout << RESET;
        }
        win = 'y';
    }
    else
    {
        
        for (int i = 0; i < 5; i++)
        {
            if (attempt_6[i] == word[i])
            {
                cout << " ";
                c1();
                cout << " " << attempt_6[i] << " ";
                cout << RESET;
            }
            else if (attempt_6[i] != word[i] && (attempt_6[i] == word[0] || attempt_6[i] == word[1] || attempt_6[i] == word[2] || attempt_6[i] == word[3] || attempt_6[i] == word[4]))
            {
                cout << " ";
                c2();
                cout << " " << attempt_6[i] << " ";
                cout << RESET;
            }
            else
            {
                cout << " ";
                c3();
                cout << " " << attempt_6[i] << " ";
                cout << RESET;
            }
        }
        cout << endl << endl;
        cout << "\n                                                 "; cout << YELLOW_2;  cout << "[ Ви програли ]"; cout << RESET; cout << endl;
        cout << "\n                                                      " << name << " :[\n" << endl;
        cout << "                           "; cout << "[ Загадане слово ]:";
        for (int i = 0; i < 5; i++)
        {
            cout << " ";
            c1();
            cout << " " << word[i] << " ";
            cout << RESET;
        }
    }
    cout << endl << endl;
}

void A_B_C()
{
    cout << "                                    ";
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'Q') || (attempt_1[1] == word[1] && attempt_1[1] == 'Q') || (attempt_1[2] == word[2] && attempt_1[2] == 'Q') || (attempt_1[3] == word[3] && attempt_1[3] == 'Q') || (attempt_1[4] == word[4] && attempt_1[4] == 'Q') || (attempt_2[0] == word[0] && attempt_2[0] == 'Q') || (attempt_2[1] == word[1] && attempt_2[1] == 'Q') || (attempt_2[2] == word[2] && attempt_2[2] == 'Q') || (attempt_2[3] == word[3] && attempt_2[3] == 'Q') || (attempt_2[4] == word[4] && attempt_2[4] == 'Q') || (attempt_3[0] == word[0] && attempt_3[0] == 'Q') || (attempt_3[1] == word[1] && attempt_3[1] == 'Q') || (attempt_3[2] == word[2] && attempt_3[2] == 'Q') || (attempt_3[3] == word[3] && attempt_3[3] == 'Q') || (attempt_3[4] == word[4] && attempt_3[4] == 'Q') || (attempt_4[0] == word[0] && attempt_4[0] == 'Q') || (attempt_4[1] == word[1] && attempt_4[1] == 'Q') || (attempt_4[2] == word[2] && attempt_4[2] == 'Q') || (attempt_4[3] == word[3] && attempt_4[3] == 'Q') || (attempt_4[4] == word[4] && attempt_4[4] == 'Q') || (attempt_5[0] == word[0] && attempt_5[0] == 'Q') || (attempt_5[1] == word[1] && attempt_5[1] == 'Q') || (attempt_5[2] == word[2] && attempt_5[2] == 'Q') || (attempt_5[3] == word[3] && attempt_5[3] == 'Q') || (attempt_5[4] == word[4] && attempt_5[4] == 'Q') || (attempt_6[0] == word[0] && attempt_6[0] == 'Q') || (attempt_6[1] == word[1] && attempt_6[1] == 'Q') || (attempt_6[2] == word[2] && attempt_6[2] == 'Q') || (attempt_6[3] == word[3] && attempt_6[3] == 'Q') || (attempt_6[4] == word[4] && attempt_6[4] == 'Q'))
    {
        cout << " ";
        c1();
        cout << " Q ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'Q') || (attempt_1[0] == word[2] && word[2] == 'Q') || (attempt_1[0] == word[3] && word[3] == 'Q') || (attempt_1[0] == word[4] && word[4] == 'Q') || (attempt_1[1] == word[0] && word[0] == 'Q') || (attempt_1[1] == word[2] && word[2] == 'Q') || (attempt_1[1] == word[3] && word[3] == 'Q') || (attempt_1[1] == word[4] && word[4] == 'Q') || (attempt_1[2] == word[1] && word[1] == 'Q') || (attempt_1[2] == word[0] && word[0] == 'Q') || (attempt_1[2] == word[3] && word[3] == 'Q') || (attempt_1[2] == word[4] && word[4] == 'Q') || (attempt_1[3] == word[1] && word[1] == 'Q') || (attempt_1[3] == word[0] && word[0] == 'Q') || (attempt_1[3] == word[2] && word[2] == 'Q') || (attempt_1[3] == word[4] && word[4] == 'Q') || (attempt_1[4] == word[1] && word[1] == 'Q') || (attempt_1[4] == word[0] && word[0] == 'Q') || (attempt_1[4] == word[3] && word[3] == 'Q') || (attempt_1[4] == word[2] && word[2] == 'Q') || (attempt_2[0] == word[1] && word[1] == 'Q') || (attempt_2[0] == word[2] && word[2] == 'Q') || (attempt_2[0] == word[3] && word[3] == 'Q') || (attempt_2[0] == word[4] && word[4] == 'Q') || (attempt_2[1] == word[0] && word[0] == 'Q') || (attempt_2[1] == word[2] && word[2] == 'Q') || (attempt_2[1] == word[3] && word[3] == 'Q') || (attempt_2[1] == word[4] && word[4] == 'Q') || (attempt_2[2] == word[1] && word[1] == 'Q') || (attempt_2[2] == word[0] && word[0] == 'Q') || (attempt_2[2] == word[3] && word[3] == 'Q') || (attempt_2[2] == word[4] && word[4] == 'Q') || (attempt_2[3] == word[1] && word[1] == 'Q') || (attempt_2[3] == word[0] && word[0] == 'Q') || (attempt_2[3] == word[2] && word[2] == 'Q') || (attempt_2[3] == word[4] && word[4] == 'Q') || (attempt_2[4] == word[1] && word[1] == 'Q') || (attempt_2[4] == word[0] && word[0] == 'Q') || (attempt_2[4] == word[3] && word[3] == 'Q') || (attempt_2[4] == word[2] && word[2] == 'Q') || (attempt_3[0] == word[1] && word[1] == 'Q') || (attempt_3[0] == word[2] && word[2] == 'Q') || (attempt_3[0] == word[3] && word[3] == 'Q') || (attempt_3[0] == word[4] && word[4] == 'Q') || (attempt_3[1] == word[0] && word[0] == 'Q') || (attempt_3[1] == word[2] && word[2] == 'Q') || (attempt_3[1] == word[3] && word[3] == 'Q') || (attempt_3[1] == word[4] && word[4] == 'Q') || (attempt_3[2] == word[1] && word[1] == 'Q') || (attempt_3[2] == word[0] && word[0] == 'Q') || (attempt_3[2] == word[3] && word[3] == 'Q') || (attempt_3[2] == word[4] && word[4] == 'Q') || (attempt_3[3] == word[1] && word[1] == 'Q') || (attempt_3[3] == word[0] && word[0] == 'Q') || (attempt_3[3] == word[2] && word[2] == 'Q') || (attempt_3[3] == word[4] && word[4] == 'Q') || (attempt_3[4] == word[1] && word[1] == 'Q') || (attempt_3[4] == word[0] && word[0] == 'Q') || (attempt_3[4] == word[3] && word[3] == 'Q') || (attempt_3[4] == word[2] && word[2] == 'Q') || (attempt_4[0] == word[1] && word[1] == 'Q') || (attempt_4[0] == word[2] && word[2] == 'Q') || (attempt_4[0] == word[3] && word[3] == 'Q') || (attempt_4[0] == word[4] && word[4] == 'Q') || (attempt_4[1] == word[0] && word[0] == 'Q') || (attempt_4[1] == word[2] && word[2] == 'Q') || (attempt_4[1] == word[3] && word[3] == 'Q') || (attempt_4[1] == word[4] && word[4] == 'Q') || (attempt_4[2] == word[1] && word[1] == 'Q') || (attempt_4[2] == word[0] && word[0] == 'Q') || (attempt_4[2] == word[3] && word[3] == 'Q') || (attempt_4[2] == word[4] && word[4] == 'Q') || (attempt_4[3] == word[1] && word[1] == 'Q') || (attempt_4[3] == word[0] && word[0] == 'Q') || (attempt_4[3] == word[2] && word[2] == 'Q') || (attempt_4[3] == word[4] && word[4] == 'Q') || (attempt_4[4] == word[1] && word[1] == 'Q') || (attempt_4[4] == word[0] && word[0] == 'Q') || (attempt_4[4] == word[3] && word[3] == 'Q') || (attempt_4[4] == word[2] && word[2] == 'Q') || (attempt_5[0] == word[1] && word[1] == 'Q') || (attempt_5[0] == word[2] && word[2] == 'Q') || (attempt_5[0] == word[3] && word[3] == 'Q') || (attempt_5[0] == word[4] && word[4] == 'Q') || (attempt_5[1] == word[0] && word[0] == 'Q') || (attempt_5[1] == word[2] && word[2] == 'Q') || (attempt_5[1] == word[3] && word[3] == 'Q') || (attempt_5[1] == word[4] && word[4] == 'Q') || (attempt_5[2] == word[1] && word[1] == 'Q') || (attempt_5[2] == word[0] && word[0] == 'Q') || (attempt_5[2] == word[3] && word[3] == 'Q') || (attempt_5[2] == word[4] && word[4] == 'Q') || (attempt_5[3] == word[1] && word[1] == 'Q') || (attempt_5[3] == word[0] && word[0] == 'Q') || (attempt_5[3] == word[2] && word[2] == 'Q') || (attempt_5[3] == word[4] && word[4] == 'Q') || (attempt_5[4] == word[1] && word[1] == 'Q') || (attempt_5[4] == word[0] && word[0] == 'Q') || (attempt_5[4] == word[3] && word[3] == 'Q') || (attempt_5[4] == word[2] && word[2] == 'Q') || (attempt_6[0] == word[1] && word[1] == 'Q') || (attempt_6[0] == word[2] && word[2] == 'Q') || (attempt_6[0] == word[3] && word[3] == 'Q') || (attempt_6[0] == word[4] && word[4] == 'Q') || (attempt_6[1] == word[0] && word[0] == 'Q') || (attempt_6[1] == word[2] && word[2] == 'Q') || (attempt_6[1] == word[3] && word[3] == 'Q') || (attempt_6[1] == word[4] && word[4] == 'Q') || (attempt_6[2] == word[1] && word[1] == 'Q') || (attempt_6[2] == word[0] && word[0] == 'Q') || (attempt_6[2] == word[3] && word[3] == 'Q') || (attempt_6[2] == word[4] && word[4] == 'Q') || (attempt_6[3] == word[1] && word[1] == 'Q') || (attempt_6[3] == word[0] && word[0] == 'Q') || (attempt_6[3] == word[2] && word[2] == 'Q') || (attempt_6[3] == word[4] && word[4] == 'Q') || (attempt_6[4] == word[1] && word[1] == 'Q') || (attempt_6[4] == word[0] && word[0] == 'Q') || (attempt_6[4] == word[3] && word[3] == 'Q') || (attempt_6[4] == word[2] && word[2] == 'Q'))
    {
        cout << " ";
        c2();
        cout << " Q ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'Q') || (attempt_1[0] != word[2] && attempt_1[0] == 'Q') || (attempt_1[0] != word[3] && attempt_1[0] == 'Q') || (attempt_1[0] != word[4] && attempt_1[0] == 'Q') || (attempt_1[1] != word[0] && attempt_1[1] == 'Q') || (attempt_1[1] != word[2] && attempt_1[1] == 'Q') || (attempt_1[1] != word[3] && attempt_1[1] == 'Q') || (attempt_1[1] != word[4] && attempt_1[1] == 'Q') || (attempt_1[2] != word[1] && attempt_1[2] == 'Q') || (attempt_1[2] != word[0] && attempt_1[2] == 'Q') || (attempt_1[2] != word[3] && attempt_1[2] == 'Q') || (attempt_1[2] != word[4] && attempt_1[2] == 'Q') || (attempt_1[3] != word[1] && attempt_1[3] == 'Q') || (attempt_1[3] != word[2] && attempt_1[3] == 'Q') || (attempt_1[3] != word[0] && attempt_1[3] == 'Q') || (attempt_1[3] != word[4] && attempt_1[3] == 'Q') || (attempt_1[4] != word[1] && attempt_1[4] == 'Q') || (attempt_1[4] != word[2] && attempt_1[4] == 'Q') || (attempt_1[4] != word[3] && attempt_1[4] == 'Q') || (attempt_1[4] != word[0] && attempt_1[4] == 'Q') || (attempt_2[0] != word[1] && attempt_2[0] == 'Q') || (attempt_2[0] != word[2] && attempt_2[0] == 'Q') || (attempt_2[0] != word[3] && attempt_2[0] == 'Q') || (attempt_2[0] != word[4] && attempt_2[0] == 'Q') || (attempt_2[1] != word[0] && attempt_2[1] == 'Q') || (attempt_2[1] != word[2] && attempt_2[1] == 'Q') || (attempt_2[1] != word[3] && attempt_2[1] == 'Q') || (attempt_2[1] != word[4] && attempt_2[1] == 'Q') || (attempt_2[2] != word[1] && attempt_2[2] == 'Q') || (attempt_2[2] != word[0] && attempt_2[2] == 'Q') || (attempt_2[2] != word[3] && attempt_2[2] == 'Q') || (attempt_2[2] != word[4] && attempt_2[2] == 'Q') || (attempt_2[3] != word[1] && attempt_2[3] == 'Q') || (attempt_2[3] != word[2] && attempt_2[3] == 'Q') || (attempt_2[3] != word[0] && attempt_2[3] == 'Q') || (attempt_2[3] != word[4] && attempt_2[3] == 'Q') || (attempt_2[4] != word[1] && attempt_2[4] == 'Q') || (attempt_2[4] != word[2] && attempt_2[4] == 'Q') || (attempt_2[4] != word[3] && attempt_2[4] == 'Q') || (attempt_2[4] != word[0] && attempt_2[4] == 'Q') || (attempt_3[0] != word[1] && attempt_3[0] == 'Q') || (attempt_3[0] != word[2] && attempt_3[0] == 'Q') || (attempt_3[0] != word[3] && attempt_3[0] == 'Q') || (attempt_3[0] != word[4] && attempt_3[0] == 'Q') || (attempt_3[1] != word[0] && attempt_3[1] == 'Q') || (attempt_3[1] != word[2] && attempt_3[1] == 'Q') || (attempt_3[1] != word[3] && attempt_3[1] == 'Q') || (attempt_3[1] != word[4] && attempt_3[1] == 'Q') || (attempt_3[2] != word[1] && attempt_3[2] == 'Q') || (attempt_3[2] != word[0] && attempt_3[2] == 'Q') || (attempt_3[2] != word[3] && attempt_3[2] == 'Q') || (attempt_3[2] != word[4] && attempt_3[2] == 'Q') || (attempt_3[3] != word[1] && attempt_3[3] == 'Q') || (attempt_3[3] != word[2] && attempt_3[3] == 'Q') || (attempt_3[3] != word[0] && attempt_3[3] == 'Q') || (attempt_3[3] != word[4] && attempt_3[3] == 'Q') || (attempt_3[4] != word[1] && attempt_3[4] == 'Q') || (attempt_3[4] != word[2] && attempt_3[4] == 'Q') || (attempt_3[4] != word[3] && attempt_3[4] == 'Q') || (attempt_3[4] != word[0] && attempt_3[4] == 'Q') || (attempt_4[0] != word[1] && attempt_4[0] == 'Q') || (attempt_4[0] != word[2] && attempt_4[0] == 'Q') || (attempt_4[0] != word[3] && attempt_4[0] == 'Q') || (attempt_4[0] != word[4] && attempt_4[0] == 'Q') || (attempt_4[1] != word[0] && attempt_4[1] == 'Q') || (attempt_4[1] != word[2] && attempt_4[1] == 'Q') || (attempt_4[1] != word[3] && attempt_4[1] == 'Q') || (attempt_4[1] != word[4] && attempt_4[1] == 'Q') || (attempt_4[2] != word[1] && attempt_4[2] == 'Q') || (attempt_4[2] != word[0] && attempt_4[2] == 'Q') || (attempt_4[2] != word[3] && attempt_4[2] == 'Q') || (attempt_4[2] != word[4] && attempt_4[2] == 'Q') || (attempt_4[3] != word[1] && attempt_4[3] == 'Q') || (attempt_4[3] != word[2] && attempt_4[3] == 'Q') || (attempt_4[3] != word[0] && attempt_4[3] == 'Q') || (attempt_4[3] != word[4] && attempt_4[3] == 'Q') || (attempt_4[4] != word[1] && attempt_4[4] == 'Q') || (attempt_4[4] != word[2] && attempt_4[4] == 'Q') || (attempt_4[4] != word[3] && attempt_4[4] == 'Q') || (attempt_4[4] != word[0] && attempt_4[4] == 'Q') || (attempt_5[0] != word[1] && attempt_5[0] == 'Q') || (attempt_5[0] != word[2] && attempt_5[0] == 'Q') || (attempt_5[0] != word[3] && attempt_5[0] == 'Q') || (attempt_5[0] != word[4] && attempt_5[0] == 'Q') || (attempt_5[1] != word[0] && attempt_5[1] == 'Q') || (attempt_5[1] != word[2] && attempt_5[1] == 'Q') || (attempt_5[1] != word[3] && attempt_5[1] == 'Q') || (attempt_5[1] != word[4] && attempt_5[1] == 'Q') || (attempt_5[2] != word[1] && attempt_5[2] == 'Q') || (attempt_5[2] != word[0] && attempt_5[2] == 'Q') || (attempt_5[2] != word[3] && attempt_5[2] == 'Q') || (attempt_5[2] != word[4] && attempt_5[2] == 'Q') || (attempt_5[3] != word[1] && attempt_5[3] == 'Q') || (attempt_5[3] != word[2] && attempt_5[3] == 'Q') || (attempt_5[3] != word[0] && attempt_5[3] == 'Q') || (attempt_5[3] != word[4] && attempt_5[3] == 'Q') || (attempt_5[4] != word[1] && attempt_5[4] == 'Q') || (attempt_5[4] != word[2] && attempt_5[4] == 'Q') || (attempt_5[4] != word[3] && attempt_5[4] == 'Q') || (attempt_5[4] != word[0] && attempt_5[4] == 'Q') || (attempt_6[0] != word[1] && attempt_6[0] == 'Q') || (attempt_6[0] != word[2] && attempt_6[0] == 'Q') || (attempt_6[0] != word[3] && attempt_6[0] == 'Q') || (attempt_6[0] != word[4] && attempt_6[0] == 'Q') || (attempt_6[1] != word[0] && attempt_6[1] == 'Q') || (attempt_6[1] != word[2] && attempt_6[1] == 'Q') || (attempt_6[1] != word[3] && attempt_6[1] == 'Q') || (attempt_6[1] != word[4] && attempt_6[1] == 'Q') || (attempt_6[2] != word[1] && attempt_6[2] == 'Q') || (attempt_6[2] != word[0] && attempt_6[2] == 'Q') || (attempt_6[2] != word[3] && attempt_6[2] == 'Q') || (attempt_6[2] != word[4] && attempt_6[2] == 'Q') || (attempt_6[3] != word[1] && attempt_6[3] == 'Q') || (attempt_6[3] != word[2] && attempt_6[3] == 'Q') || (attempt_6[3] != word[0] && attempt_6[3] == 'Q') || (attempt_6[3] != word[4] && attempt_6[3] == 'Q') || (attempt_6[4] != word[1] && attempt_6[4] == 'Q') || (attempt_6[4] != word[2] && attempt_6[4] == 'Q') || (attempt_6[4] != word[3] && attempt_6[4] == 'Q') || (attempt_6[4] != word[0] && attempt_6[4] == 'Q'))
    {
        cout << " ";
        c3();
        cout << " Q ";
        cout << RESET;
      }
    else
    {
        cout << " ";
        cout << " Q ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'W') || (attempt_1[1] == word[1] && attempt_1[1] == 'W') || (attempt_1[2] == word[2] && attempt_1[2] == 'W') || (attempt_1[3] == word[3] && attempt_1[3] == 'W') || (attempt_1[4] == word[4] && attempt_1[4] == 'W') || (attempt_2[0] == word[0] && attempt_2[0] == 'W') || (attempt_2[1] == word[1] && attempt_2[1] == 'W') || (attempt_2[2] == word[2] && attempt_2[2] == 'W') || (attempt_2[3] == word[3] && attempt_2[3] == 'W') || (attempt_2[4] == word[4] && attempt_2[4] == 'W') || (attempt_3[0] == word[0] && attempt_3[0] == 'W') || (attempt_3[1] == word[1] && attempt_3[1] == 'W') || (attempt_3[2] == word[2] && attempt_3[2] == 'W') || (attempt_3[3] == word[3] && attempt_3[3] == 'W') || (attempt_3[4] == word[4] && attempt_3[4] == 'W') || (attempt_4[0] == word[0] && attempt_4[0] == 'W') || (attempt_4[1] == word[1] && attempt_4[1] == 'W') || (attempt_4[2] == word[2] && attempt_4[2] == 'W') || (attempt_4[3] == word[3] && attempt_4[3] == 'W') || (attempt_4[4] == word[4] && attempt_4[4] == 'W') || (attempt_5[0] == word[0] && attempt_5[0] == 'W') || (attempt_5[1] == word[1] && attempt_5[1] == 'W') || (attempt_5[2] == word[2] && attempt_5[2] == 'W') || (attempt_5[3] == word[3] && attempt_5[3] == 'W') || (attempt_5[4] == word[4] && attempt_5[4] == 'W') || (attempt_6[0] == word[0] && attempt_6[0] == 'W') || (attempt_6[1] == word[1] && attempt_6[1] == 'W') || (attempt_6[2] == word[2] && attempt_6[2] == 'W') || (attempt_6[3] == word[3] && attempt_6[3] == 'W') || (attempt_6[4] == word[4] && attempt_6[4] == 'W'))
    {
        cout << " ";
        c1();
        cout << " W ";
        cout << RESET; 
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'W') || (attempt_1[0] == word[2] && word[2] == 'W') || (attempt_1[0] == word[3] && word[3] == 'W') || (attempt_1[0] == word[4] && word[4] == 'W') || (attempt_1[1] == word[0] && word[0] == 'W') || (attempt_1[1] == word[2] && word[2] == 'W') || (attempt_1[1] == word[3] && word[3] == 'W') || (attempt_1[1] == word[4] && word[4] == 'W') || (attempt_1[2] == word[1] && word[1] == 'W') || (attempt_1[2] == word[0] && word[0] == 'W') || (attempt_1[2] == word[3] && word[3] == 'W') || (attempt_1[2] == word[4] && word[4] == 'W') || (attempt_1[3] == word[1] && word[1] == 'W') || (attempt_1[3] == word[0] && word[0] == 'W') || (attempt_1[3] == word[2] && word[2] == 'W') || (attempt_1[3] == word[4] && word[4] == 'W') || (attempt_1[4] == word[1] && word[1] == 'W') || (attempt_1[4] == word[0] && word[0] == 'W') || (attempt_1[4] == word[3] && word[3] == 'W') || (attempt_1[4] == word[2] && word[2] == 'W') || (attempt_2[0] == word[1] && word[1] == 'W') || (attempt_2[0] == word[2] && word[2] == 'W') || (attempt_2[0] == word[3] && word[3] == 'W') || (attempt_2[0] == word[4] && word[4] == 'W') || (attempt_2[1] == word[0] && word[0] == 'W') || (attempt_2[1] == word[2] && word[2] == 'W') || (attempt_2[1] == word[3] && word[3] == 'W') || (attempt_2[1] == word[4] && word[4] == 'W') || (attempt_2[2] == word[1] && word[1] == 'W') || (attempt_2[2] == word[0] && word[0] == 'W') || (attempt_2[2] == word[3] && word[3] == 'W') || (attempt_2[2] == word[4] && word[4] == 'W') || (attempt_2[3] == word[1] && word[1] == 'W') || (attempt_2[3] == word[0] && word[0] == 'W') || (attempt_2[3] == word[2] && word[2] == 'W') || (attempt_2[3] == word[4] && word[4] == 'W') || (attempt_2[4] == word[1] && word[1] == 'W') || (attempt_2[4] == word[0] && word[0] == 'W') || (attempt_2[4] == word[3] && word[3] == 'W') || (attempt_2[4] == word[2] && word[2] == 'W') || (attempt_3[0] == word[1] && word[1] == 'W') || (attempt_3[0] == word[2] && word[2] == 'W') || (attempt_3[0] == word[3] && word[3] == 'W') || (attempt_3[0] == word[4] && word[4] == 'W') || (attempt_3[1] == word[0] && word[0] == 'W') || (attempt_3[1] == word[2] && word[2] == 'W') || (attempt_3[1] == word[3] && word[3] == 'W') || (attempt_3[1] == word[4] && word[4] == 'W') || (attempt_3[2] == word[1] && word[1] == 'W') || (attempt_3[2] == word[0] && word[0] == 'W') || (attempt_3[2] == word[3] && word[3] == 'W') || (attempt_3[2] == word[4] && word[4] == 'W') || (attempt_3[3] == word[1] && word[1] == 'W') || (attempt_3[3] == word[0] && word[0] == 'W') || (attempt_3[3] == word[2] && word[2] == 'W') || (attempt_3[3] == word[4] && word[4] == 'W') || (attempt_3[4] == word[1] && word[1] == 'W') || (attempt_3[4] == word[0] && word[0] == 'W') || (attempt_3[4] == word[3] && word[3] == 'W') || (attempt_3[4] == word[2] && word[2] == 'W') || (attempt_4[0] == word[1] && word[1] == 'W') || (attempt_4[0] == word[2] && word[2] == 'W') || (attempt_4[0] == word[3] && word[3] == 'W') || (attempt_4[0] == word[4] && word[4] == 'W') || (attempt_4[1] == word[0] && word[0] == 'W') || (attempt_4[1] == word[2] && word[2] == 'W') || (attempt_4[1] == word[3] && word[3] == 'W') || (attempt_4[1] == word[4] && word[4] == 'W') || (attempt_4[2] == word[1] && word[1] == 'W') || (attempt_4[2] == word[0] && word[0] == 'W') || (attempt_4[2] == word[3] && word[3] == 'W') || (attempt_4[2] == word[4] && word[4] == 'W') || (attempt_4[3] == word[1] && word[1] == 'W') || (attempt_4[3] == word[0] && word[0] == 'W') || (attempt_4[3] == word[2] && word[2] == 'W') || (attempt_4[3] == word[4] && word[4] == 'W') || (attempt_4[4] == word[1] && word[1] == 'W') || (attempt_4[4] == word[0] && word[0] == 'W') || (attempt_4[4] == word[3] && word[3] == 'W') || (attempt_4[4] == word[2] && word[2] == 'W') || (attempt_5[0] == word[1] && word[1] == 'W') || (attempt_5[0] == word[2] && word[2] == 'W') || (attempt_5[0] == word[3] && word[3] == 'W') || (attempt_5[0] == word[4] && word[4] == 'W') || (attempt_5[1] == word[0] && word[0] == 'W') || (attempt_5[1] == word[2] && word[2] == 'W') || (attempt_5[1] == word[3] && word[3] == 'W') || (attempt_5[1] == word[4] && word[4] == 'W') || (attempt_5[2] == word[1] && word[1] == 'W') || (attempt_5[2] == word[0] && word[0] == 'W') || (attempt_5[2] == word[3] && word[3] == 'W') || (attempt_5[2] == word[4] && word[4] == 'W') || (attempt_5[3] == word[1] && word[1] == 'W') || (attempt_5[3] == word[0] && word[0] == 'W') || (attempt_5[3] == word[2] && word[2] == 'W') || (attempt_5[3] == word[4] && word[4] == 'W') || (attempt_5[4] == word[1] && word[1] == 'W') || (attempt_5[4] == word[0] && word[0] == 'W') || (attempt_5[4] == word[3] && word[3] == 'W') || (attempt_5[4] == word[2] && word[2] == 'W') || (attempt_6[0] == word[1] && word[1] == 'W') || (attempt_6[0] == word[2] && word[2] == 'W') || (attempt_6[0] == word[3] && word[3] == 'W') || (attempt_6[0] == word[4] && word[4] == 'W') || (attempt_6[1] == word[0] && word[0] == 'W') || (attempt_6[1] == word[2] && word[2] == 'W') || (attempt_6[1] == word[3] && word[3] == 'W') || (attempt_6[1] == word[4] && word[4] == 'W') || (attempt_6[2] == word[1] && word[1] == 'W') || (attempt_6[2] == word[0] && word[0] == 'W') || (attempt_6[2] == word[3] && word[3] == 'W') || (attempt_6[2] == word[4] && word[4] == 'W') || (attempt_6[3] == word[1] && word[1] == 'W') || (attempt_6[3] == word[0] && word[0] == 'W') || (attempt_6[3] == word[2] && word[2] == 'W') || (attempt_6[3] == word[4] && word[4] == 'W') || (attempt_6[4] == word[1] && word[1] == 'W') || (attempt_6[4] == word[0] && word[0] == 'W') || (attempt_6[4] == word[3] && word[3] == 'W') || (attempt_6[4] == word[2] && word[2] == 'W'))
    {
        cout << " ";
        c2();
        cout << " W ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'W') || (attempt_1[0] != word[2] && attempt_1[0] == 'W') || (attempt_1[0] != word[3] && attempt_1[0] == 'W') || (attempt_1[0] != word[4] && attempt_1[0] == 'W') || (attempt_1[1] != word[0] && attempt_1[1] == 'W') || (attempt_1[1] != word[2] && attempt_1[1] == 'W') || (attempt_1[1] != word[3] && attempt_1[1] == 'W') || (attempt_1[1] != word[4] && attempt_1[1] == 'W') || (attempt_1[2] != word[1] && attempt_1[2] == 'W') || (attempt_1[2] != word[0] && attempt_1[2] == 'W') || (attempt_1[2] != word[3] && attempt_1[2] == 'W') || (attempt_1[2] != word[4] && attempt_1[2] == 'W') || (attempt_1[3] != word[1] && attempt_1[3] == 'W') || (attempt_1[3] != word[2] && attempt_1[3] == 'W') || (attempt_1[3] != word[0] && attempt_1[3] == 'W') || (attempt_1[3] != word[4] && attempt_1[3] == 'W') || (attempt_1[4] != word[1] && attempt_1[4] == 'W') || (attempt_1[4] != word[2] && attempt_1[4] == 'W') || (attempt_1[4] != word[3] && attempt_1[4] == 'W') || (attempt_1[4] != word[0] && attempt_1[4] == 'W') || (attempt_2[0] != word[1] && attempt_2[0] == 'W') || (attempt_2[0] != word[2] && attempt_2[0] == 'W') || (attempt_2[0] != word[3] && attempt_2[0] == 'W') || (attempt_2[0] != word[4] && attempt_2[0] == 'W') || (attempt_2[1] != word[0] && attempt_2[1] == 'W') || (attempt_2[1] != word[2] && attempt_2[1] == 'W') || (attempt_2[1] != word[3] && attempt_2[1] == 'W') || (attempt_2[1] != word[4] && attempt_2[1] == 'W') || (attempt_2[2] != word[1] && attempt_2[2] == 'W') || (attempt_2[2] != word[0] && attempt_2[2] == 'W') || (attempt_2[2] != word[3] && attempt_2[2] == 'W') || (attempt_2[2] != word[4] && attempt_2[2] == 'W') || (attempt_2[3] != word[1] && attempt_2[3] == 'W') || (attempt_2[3] != word[2] && attempt_2[3] == 'W') || (attempt_2[3] != word[0] && attempt_2[3] == 'W') || (attempt_2[3] != word[4] && attempt_2[3] == 'W') || (attempt_2[4] != word[1] && attempt_2[4] == 'W') || (attempt_2[4] != word[2] && attempt_2[4] == 'W') || (attempt_2[4] != word[3] && attempt_2[4] == 'W') || (attempt_2[4] != word[0] && attempt_2[4] == 'W') || (attempt_3[0] != word[1] && attempt_3[0] == 'W') || (attempt_3[0] != word[2] && attempt_3[0] == 'W') || (attempt_3[0] != word[3] && attempt_3[0] == 'W') || (attempt_3[0] != word[4] && attempt_3[0] == 'W') || (attempt_3[1] != word[0] && attempt_3[1] == 'W') || (attempt_3[1] != word[2] && attempt_3[1] == 'W') || (attempt_3[1] != word[3] && attempt_3[1] == 'W') || (attempt_3[1] != word[4] && attempt_3[1] == 'W') || (attempt_3[2] != word[1] && attempt_3[2] == 'W') || (attempt_3[2] != word[0] && attempt_3[2] == 'W') || (attempt_3[2] != word[3] && attempt_3[2] == 'W') || (attempt_3[2] != word[4] && attempt_3[2] == 'W') || (attempt_3[3] != word[1] && attempt_3[3] == 'W') || (attempt_3[3] != word[2] && attempt_3[3] == 'W') || (attempt_3[3] != word[0] && attempt_3[3] == 'W') || (attempt_3[3] != word[4] && attempt_3[3] == 'W') || (attempt_3[4] != word[1] && attempt_3[4] == 'W') || (attempt_3[4] != word[2] && attempt_3[4] == 'W') || (attempt_3[4] != word[3] && attempt_3[4] == 'W') || (attempt_3[4] != word[0] && attempt_3[4] == 'W') || (attempt_4[0] != word[1] && attempt_4[0] == 'W') || (attempt_4[0] != word[2] && attempt_4[0] == 'W') || (attempt_4[0] != word[3] && attempt_4[0] == 'W') || (attempt_4[0] != word[4] && attempt_4[0] == 'W') || (attempt_4[1] != word[0] && attempt_4[1] == 'W') || (attempt_4[1] != word[2] && attempt_4[1] == 'W') || (attempt_4[1] != word[3] && attempt_4[1] == 'W') || (attempt_4[1] != word[4] && attempt_4[1] == 'W') || (attempt_4[2] != word[1] && attempt_4[2] == 'W') || (attempt_4[2] != word[0] && attempt_4[2] == 'W') || (attempt_4[2] != word[3] && attempt_4[2] == 'W') || (attempt_4[2] != word[4] && attempt_4[2] == 'W') || (attempt_4[3] != word[1] && attempt_4[3] == 'W') || (attempt_4[3] != word[2] && attempt_4[3] == 'W') || (attempt_4[3] != word[0] && attempt_4[3] == 'W') || (attempt_4[3] != word[4] && attempt_4[3] == 'W') || (attempt_4[4] != word[1] && attempt_4[4] == 'W') || (attempt_4[4] != word[2] && attempt_4[4] == 'W') || (attempt_4[4] != word[3] && attempt_4[4] == 'W') || (attempt_4[4] != word[0] && attempt_4[4] == 'W') || (attempt_5[0] != word[1] && attempt_5[0] == 'W') || (attempt_5[0] != word[2] && attempt_5[0] == 'W') || (attempt_5[0] != word[3] && attempt_5[0] == 'W') || (attempt_5[0] != word[4] && attempt_5[0] == 'W') || (attempt_5[1] != word[0] && attempt_5[1] == 'W') || (attempt_5[1] != word[2] && attempt_5[1] == 'W') || (attempt_5[1] != word[3] && attempt_5[1] == 'W') || (attempt_5[1] != word[4] && attempt_5[1] == 'W') || (attempt_5[2] != word[1] && attempt_5[2] == 'W') || (attempt_5[2] != word[0] && attempt_5[2] == 'W') || (attempt_5[2] != word[3] && attempt_5[2] == 'W') || (attempt_5[2] != word[4] && attempt_5[2] == 'W') || (attempt_5[3] != word[1] && attempt_5[3] == 'W') || (attempt_5[3] != word[2] && attempt_5[3] == 'W') || (attempt_5[3] != word[0] && attempt_5[3] == 'W') || (attempt_5[3] != word[4] && attempt_5[3] == 'W') || (attempt_5[4] != word[1] && attempt_5[4] == 'W') || (attempt_5[4] != word[2] && attempt_5[4] == 'W') || (attempt_5[4] != word[3] && attempt_5[4] == 'W') || (attempt_5[4] != word[0] && attempt_5[4] == 'W') || (attempt_6[0] != word[1] && attempt_6[0] == 'W') || (attempt_6[0] != word[2] && attempt_6[0] == 'W') || (attempt_6[0] != word[3] && attempt_6[0] == 'W') || (attempt_6[0] != word[4] && attempt_6[0] == 'W') || (attempt_6[1] != word[0] && attempt_6[1] == 'W') || (attempt_6[1] != word[2] && attempt_6[1] == 'W') || (attempt_6[1] != word[3] && attempt_6[1] == 'W') || (attempt_6[1] != word[4] && attempt_6[1] == 'W') || (attempt_6[2] != word[1] && attempt_6[2] == 'W') || (attempt_6[2] != word[0] && attempt_6[2] == 'W') || (attempt_6[2] != word[3] && attempt_6[2] == 'W') || (attempt_6[2] != word[4] && attempt_6[2] == 'W') || (attempt_6[3] != word[1] && attempt_6[3] == 'W') || (attempt_6[3] != word[2] && attempt_6[3] == 'W') || (attempt_6[3] != word[0] && attempt_6[3] == 'W') || (attempt_6[3] != word[4] && attempt_6[3] == 'W') || (attempt_6[4] != word[1] && attempt_6[4] == 'W') || (attempt_6[4] != word[2] && attempt_6[4] == 'W') || (attempt_6[4] != word[3] && attempt_6[4] == 'W') || (attempt_6[4] != word[0] && attempt_6[4] == 'W'))
    {

        cout << " ";
        c3();
        cout << " W ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " W ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'E') || (attempt_1[1] == word[1] && attempt_1[1] == 'E') || (attempt_1[2] == word[2] && attempt_1[2] == 'E') || (attempt_1[3] == word[3] && attempt_1[3] == 'E') || (attempt_1[4] == word[4] && attempt_1[4] == 'E') || (attempt_2[0] == word[0] && attempt_2[0] == 'E') || (attempt_2[1] == word[1] && attempt_2[1] == 'E') || (attempt_2[2] == word[2] && attempt_2[2] == 'E') || (attempt_2[3] == word[3] && attempt_2[3] == 'E') || (attempt_2[4] == word[4] && attempt_2[4] == 'E') || (attempt_3[0] == word[0] && attempt_3[0] == 'E') || (attempt_3[1] == word[1] && attempt_3[1] == 'E') || (attempt_3[2] == word[2] && attempt_3[2] == 'E') || (attempt_3[3] == word[3] && attempt_3[3] == 'E') || (attempt_3[4] == word[4] && attempt_3[4] == 'E') || (attempt_4[0] == word[0] && attempt_4[0] == 'E') || (attempt_4[1] == word[1] && attempt_4[1] == 'E') || (attempt_4[2] == word[2] && attempt_4[2] == 'E') || (attempt_4[3] == word[3] && attempt_4[3] == 'E') || (attempt_4[4] == word[4] && attempt_4[4] == 'E') || (attempt_5[0] == word[0] && attempt_5[0] == 'E') || (attempt_5[1] == word[1] && attempt_5[1] == 'E') || (attempt_5[2] == word[2] && attempt_5[2] == 'E') || (attempt_5[3] == word[3] && attempt_5[3] == 'E') || (attempt_5[4] == word[4] && attempt_5[4] == 'E') || (attempt_6[0] == word[0] && attempt_6[0] == 'E') || (attempt_6[1] == word[1] && attempt_6[1] == 'E') || (attempt_6[2] == word[2] && attempt_6[2] == 'E') || (attempt_6[3] == word[3] && attempt_6[3] == 'E') || (attempt_6[4] == word[4] && attempt_6[4] == 'E'))
    {
        cout << " ";
        c1();
        cout << " E ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'E') || (attempt_1[0] == word[2] && word[2] == 'E') || (attempt_1[0] == word[3] && word[3] == 'E') || (attempt_1[0] == word[4] && word[4] == 'E') || (attempt_1[1] == word[0] && word[0] == 'E') || (attempt_1[1] == word[2] && word[2] == 'E') || (attempt_1[1] == word[3] && word[3] == 'E') || (attempt_1[1] == word[4] && word[4] == 'E') || (attempt_1[2] == word[1] && word[1] == 'E') || (attempt_1[2] == word[0] && word[0] == 'E') || (attempt_1[2] == word[3] && word[3] == 'E') || (attempt_1[2] == word[4] && word[4] == 'E') || (attempt_1[3] == word[1] && word[1] == 'E') || (attempt_1[3] == word[0] && word[0] == 'E') || (attempt_1[3] == word[2] && word[2] == 'E') || (attempt_1[3] == word[4] && word[4] == 'E') || (attempt_1[4] == word[1] && word[1] == 'E') || (attempt_1[4] == word[0] && word[0] == 'E') || (attempt_1[4] == word[3] && word[3] == 'E') || (attempt_1[4] == word[2] && word[2] == 'E') || (attempt_2[0] == word[1] && word[1] == 'E') || (attempt_2[0] == word[2] && word[2] == 'E') || (attempt_2[0] == word[3] && word[3] == 'E') || (attempt_2[0] == word[4] && word[4] == 'E') || (attempt_2[1] == word[0] && word[0] == 'E') || (attempt_2[1] == word[2] && word[2] == 'E') || (attempt_2[1] == word[3] && word[3] == 'E') || (attempt_2[1] == word[4] && word[4] == 'E') || (attempt_2[2] == word[1] && word[1] == 'E') || (attempt_2[2] == word[0] && word[0] == 'E') || (attempt_2[2] == word[3] && word[3] == 'E') || (attempt_2[2] == word[4] && word[4] == 'E') || (attempt_2[3] == word[1] && word[1] == 'E') || (attempt_2[3] == word[0] && word[0] == 'E') || (attempt_2[3] == word[2] && word[2] == 'E') || (attempt_2[3] == word[4] && word[4] == 'E') || (attempt_2[4] == word[1] && word[1] == 'E') || (attempt_2[4] == word[0] && word[0] == 'E') || (attempt_2[4] == word[3] && word[3] == 'E') || (attempt_2[4] == word[2] && word[2] == 'E') || (attempt_3[0] == word[1] && word[1] == 'E') || (attempt_3[0] == word[2] && word[2] == 'E') || (attempt_3[0] == word[3] && word[3] == 'E') || (attempt_3[0] == word[4] && word[4] == 'E') || (attempt_3[1] == word[0] && word[0] == 'E') || (attempt_3[1] == word[2] && word[2] == 'E') || (attempt_3[1] == word[3] && word[3] == 'E') || (attempt_3[1] == word[4] && word[4] == 'E') || (attempt_3[2] == word[1] && word[1] == 'E') || (attempt_3[2] == word[0] && word[0] == 'E') || (attempt_3[2] == word[3] && word[3] == 'E') || (attempt_3[2] == word[4] && word[4] == 'E') || (attempt_3[3] == word[1] && word[1] == 'E') || (attempt_3[3] == word[0] && word[0] == 'E') || (attempt_3[3] == word[2] && word[2] == 'E') || (attempt_3[3] == word[4] && word[4] == 'E') || (attempt_3[4] == word[1] && word[1] == 'E') || (attempt_3[4] == word[0] && word[0] == 'E') || (attempt_3[4] == word[3] && word[3] == 'E') || (attempt_3[4] == word[2] && word[2] == 'E') || (attempt_4[0] == word[1] && word[1] == 'E') || (attempt_4[0] == word[2] && word[2] == 'E') || (attempt_4[0] == word[3] && word[3] == 'E') || (attempt_4[0] == word[4] && word[4] == 'E') || (attempt_4[1] == word[0] && word[0] == 'E') || (attempt_4[1] == word[2] && word[2] == 'E') || (attempt_4[1] == word[3] && word[3] == 'E') || (attempt_4[1] == word[4] && word[4] == 'E') || (attempt_4[2] == word[1] && word[1] == 'E') || (attempt_4[2] == word[0] && word[0] == 'E') || (attempt_4[2] == word[3] && word[3] == 'E') || (attempt_4[2] == word[4] && word[4] == 'E') || (attempt_4[3] == word[1] && word[1] == 'E') || (attempt_4[3] == word[0] && word[0] == 'E') || (attempt_4[3] == word[2] && word[2] == 'E') || (attempt_4[3] == word[4] && word[4] == 'E') || (attempt_4[4] == word[1] && word[1] == 'E') || (attempt_4[4] == word[0] && word[0] == 'E') || (attempt_4[4] == word[3] && word[3] == 'E') || (attempt_4[4] == word[2] && word[2] == 'E') || (attempt_5[0] == word[1] && word[1] == 'E') || (attempt_5[0] == word[2] && word[2] == 'E') || (attempt_5[0] == word[3] && word[3] == 'E') || (attempt_5[0] == word[4] && word[4] == 'E') || (attempt_5[1] == word[0] && word[0] == 'E') || (attempt_5[1] == word[2] && word[2] == 'E') || (attempt_5[1] == word[3] && word[3] == 'E') || (attempt_5[1] == word[4] && word[4] == 'E') || (attempt_5[2] == word[1] && word[1] == 'E') || (attempt_5[2] == word[0] && word[0] == 'E') || (attempt_5[2] == word[3] && word[3] == 'E') || (attempt_5[2] == word[4] && word[4] == 'E') || (attempt_5[3] == word[1] && word[1] == 'E') || (attempt_5[3] == word[0] && word[0] == 'E') || (attempt_5[3] == word[2] && word[2] == 'E') || (attempt_5[3] == word[4] && word[4] == 'E') || (attempt_5[4] == word[1] && word[1] == 'E') || (attempt_5[4] == word[0] && word[0] == 'E') || (attempt_5[4] == word[3] && word[3] == 'E') || (attempt_5[4] == word[2] && word[2] == 'E') || (attempt_6[0] == word[1] && word[1] == 'E') || (attempt_6[0] == word[2] && word[2] == 'E') || (attempt_6[0] == word[3] && word[3] == 'E') || (attempt_6[0] == word[4] && word[4] == 'E') || (attempt_6[1] == word[0] && word[0] == 'E') || (attempt_6[1] == word[2] && word[2] == 'E') || (attempt_6[1] == word[3] && word[3] == 'E') || (attempt_6[1] == word[4] && word[4] == 'E') || (attempt_6[2] == word[1] && word[1] == 'E') || (attempt_6[2] == word[0] && word[0] == 'E') || (attempt_6[2] == word[3] && word[3] == 'E') || (attempt_6[2] == word[4] && word[4] == 'E') || (attempt_6[3] == word[1] && word[1] == 'E') || (attempt_6[3] == word[0] && word[0] == 'E') || (attempt_6[3] == word[2] && word[2] == 'E') || (attempt_6[3] == word[4] && word[4] == 'E') || (attempt_6[4] == word[1] && word[1] == 'E') || (attempt_6[4] == word[0] && word[0] == 'E') || (attempt_6[4] == word[3] && word[3] == 'E') || (attempt_6[4] == word[2] && word[2] == 'E'))
    {
        cout << " ";
        c2();
        cout << " E ";
        cout << RESET;
      }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'E') || (attempt_1[0] != word[2] && attempt_1[0] == 'E') || (attempt_1[0] != word[3] && attempt_1[0] == 'E') || (attempt_1[0] != word[4] && attempt_1[0] == 'E') || (attempt_1[1] != word[0] && attempt_1[1] == 'E') || (attempt_1[1] != word[2] && attempt_1[1] == 'E') || (attempt_1[1] != word[3] && attempt_1[1] == 'E') || (attempt_1[1] != word[4] && attempt_1[1] == 'E') || (attempt_1[2] != word[1] && attempt_1[2] == 'E') || (attempt_1[2] != word[0] && attempt_1[2] == 'E') || (attempt_1[2] != word[3] && attempt_1[2] == 'E') || (attempt_1[2] != word[4] && attempt_1[2] == 'E') || (attempt_1[3] != word[1] && attempt_1[3] == 'E') || (attempt_1[3] != word[2] && attempt_1[3] == 'E') || (attempt_1[3] != word[0] && attempt_1[3] == 'E') || (attempt_1[3] != word[4] && attempt_1[3] == 'E') || (attempt_1[4] != word[1] && attempt_1[4] == 'E') || (attempt_1[4] != word[2] && attempt_1[4] == 'E') || (attempt_1[4] != word[3] && attempt_1[4] == 'E') || (attempt_1[4] != word[0] && attempt_1[4] == 'E') || (attempt_2[0] != word[1] && attempt_2[0] == 'E') || (attempt_2[0] != word[2] && attempt_2[0] == 'E') || (attempt_2[0] != word[3] && attempt_2[0] == 'E') || (attempt_2[0] != word[4] && attempt_2[0] == 'E') || (attempt_2[1] != word[0] && attempt_2[1] == 'E') || (attempt_2[1] != word[2] && attempt_2[1] == 'E') || (attempt_2[1] != word[3] && attempt_2[1] == 'E') || (attempt_2[1] != word[4] && attempt_2[1] == 'E') || (attempt_2[2] != word[1] && attempt_2[2] == 'E') || (attempt_2[2] != word[0] && attempt_2[2] == 'E') || (attempt_2[2] != word[3] && attempt_2[2] == 'E') || (attempt_2[2] != word[4] && attempt_2[2] == 'E') || (attempt_2[3] != word[1] && attempt_2[3] == 'E') || (attempt_2[3] != word[2] && attempt_2[3] == 'E') || (attempt_2[3] != word[0] && attempt_2[3] == 'E') || (attempt_2[3] != word[4] && attempt_2[3] == 'E') || (attempt_2[4] != word[1] && attempt_2[4] == 'E') || (attempt_2[4] != word[2] && attempt_2[4] == 'E') || (attempt_2[4] != word[3] && attempt_2[4] == 'E') || (attempt_2[4] != word[0] && attempt_2[4] == 'E') || (attempt_3[0] != word[1] && attempt_3[0] == 'E') || (attempt_3[0] != word[2] && attempt_3[0] == 'E') || (attempt_3[0] != word[3] && attempt_3[0] == 'E') || (attempt_3[0] != word[4] && attempt_3[0] == 'E') || (attempt_3[1] != word[0] && attempt_3[1] == 'E') || (attempt_3[1] != word[2] && attempt_3[1] == 'E') || (attempt_3[1] != word[3] && attempt_3[1] == 'E') || (attempt_3[1] != word[4] && attempt_3[1] == 'E') || (attempt_3[2] != word[1] && attempt_3[2] == 'E') || (attempt_3[2] != word[0] && attempt_3[2] == 'E') || (attempt_3[2] != word[3] && attempt_3[2] == 'E') || (attempt_3[2] != word[4] && attempt_3[2] == 'E') || (attempt_3[3] != word[1] && attempt_3[3] == 'E') || (attempt_3[3] != word[2] && attempt_3[3] == 'E') || (attempt_3[3] != word[0] && attempt_3[3] == 'E') || (attempt_3[3] != word[4] && attempt_3[3] == 'E') || (attempt_3[4] != word[1] && attempt_3[4] == 'E') || (attempt_3[4] != word[2] && attempt_3[4] == 'E') || (attempt_3[4] != word[3] && attempt_3[4] == 'E') || (attempt_3[4] != word[0] && attempt_3[4] == 'E') || (attempt_4[0] != word[1] && attempt_4[0] == 'E') || (attempt_4[0] != word[2] && attempt_4[0] == 'E') || (attempt_4[0] != word[3] && attempt_4[0] == 'E') || (attempt_4[0] != word[4] && attempt_4[0] == 'E') || (attempt_4[1] != word[0] && attempt_4[1] == 'E') || (attempt_4[1] != word[2] && attempt_4[1] == 'E') || (attempt_4[1] != word[3] && attempt_4[1] == 'E') || (attempt_4[1] != word[4] && attempt_4[1] == 'E') || (attempt_4[2] != word[1] && attempt_4[2] == 'E') || (attempt_4[2] != word[0] && attempt_4[2] == 'E') || (attempt_4[2] != word[3] && attempt_4[2] == 'E') || (attempt_4[2] != word[4] && attempt_4[2] == 'E') || (attempt_4[3] != word[1] && attempt_4[3] == 'E') || (attempt_4[3] != word[2] && attempt_4[3] == 'E') || (attempt_4[3] != word[0] && attempt_4[3] == 'E') || (attempt_4[3] != word[4] && attempt_4[3] == 'E') || (attempt_4[4] != word[1] && attempt_4[4] == 'E') || (attempt_4[4] != word[2] && attempt_4[4] == 'E') || (attempt_4[4] != word[3] && attempt_4[4] == 'E') || (attempt_4[4] != word[0] && attempt_4[4] == 'E') || (attempt_5[0] != word[1] && attempt_5[0] == 'E') || (attempt_5[0] != word[2] && attempt_5[0] == 'E') || (attempt_5[0] != word[3] && attempt_5[0] == 'E') || (attempt_5[0] != word[4] && attempt_5[0] == 'E') || (attempt_5[1] != word[0] && attempt_5[1] == 'E') || (attempt_5[1] != word[2] && attempt_5[1] == 'E') || (attempt_5[1] != word[3] && attempt_5[1] == 'E') || (attempt_5[1] != word[4] && attempt_5[1] == 'E') || (attempt_5[2] != word[1] && attempt_5[2] == 'E') || (attempt_5[2] != word[0] && attempt_5[2] == 'E') || (attempt_5[2] != word[3] && attempt_5[2] == 'E') || (attempt_5[2] != word[4] && attempt_5[2] == 'E') || (attempt_5[3] != word[1] && attempt_5[3] == 'E') || (attempt_5[3] != word[2] && attempt_5[3] == 'E') || (attempt_5[3] != word[0] && attempt_5[3] == 'E') || (attempt_5[3] != word[4] && attempt_5[3] == 'E') || (attempt_5[4] != word[1] && attempt_5[4] == 'E') || (attempt_5[4] != word[2] && attempt_5[4] == 'E') || (attempt_5[4] != word[3] && attempt_5[4] == 'E') || (attempt_5[4] != word[0] && attempt_5[4] == 'E') || (attempt_6[0] != word[1] && attempt_6[0] == 'E') || (attempt_6[0] != word[2] && attempt_6[0] == 'E') || (attempt_6[0] != word[3] && attempt_6[0] == 'E') || (attempt_6[0] != word[4] && attempt_6[0] == 'E') || (attempt_6[1] != word[0] && attempt_6[1] == 'E') || (attempt_6[1] != word[2] && attempt_6[1] == 'E') || (attempt_6[1] != word[3] && attempt_6[1] == 'E') || (attempt_6[1] != word[4] && attempt_6[1] == 'E') || (attempt_6[2] != word[1] && attempt_6[2] == 'E') || (attempt_6[2] != word[0] && attempt_6[2] == 'E') || (attempt_6[2] != word[3] && attempt_6[2] == 'E') || (attempt_6[2] != word[4] && attempt_6[2] == 'E') || (attempt_6[3] != word[1] && attempt_6[3] == 'E') || (attempt_6[3] != word[2] && attempt_6[3] == 'E') || (attempt_6[3] != word[0] && attempt_6[3] == 'E') || (attempt_6[3] != word[4] && attempt_6[3] == 'E') || (attempt_6[4] != word[1] && attempt_6[4] == 'E') || (attempt_6[4] != word[2] && attempt_6[4] == 'E') || (attempt_6[4] != word[3] && attempt_6[4] == 'E') || (attempt_6[4] != word[0] && attempt_6[4] == 'E'))
    {
        cout << " "; 
        c3();
        cout << " E ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " E ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'R') || (attempt_1[1] == word[1] && attempt_1[1] == 'R') || (attempt_1[2] == word[2] && attempt_1[2] == 'R') || (attempt_1[3] == word[3] && attempt_1[3] == 'R') || (attempt_1[4] == word[4] && attempt_1[4] == 'R') || (attempt_2[0] == word[0] && attempt_2[0] == 'R') || (attempt_2[1] == word[1] && attempt_2[1] == 'R') || (attempt_2[2] == word[2] && attempt_2[2] == 'R') || (attempt_2[3] == word[3] && attempt_2[3] == 'R') || (attempt_2[4] == word[4] && attempt_2[4] == 'R') || (attempt_3[0] == word[0] && attempt_3[0] == 'R') || (attempt_3[1] == word[1] && attempt_3[1] == 'R') || (attempt_3[2] == word[2] && attempt_3[2] == 'R') || (attempt_3[3] == word[3] && attempt_3[3] == 'R') || (attempt_3[4] == word[4] && attempt_3[4] == 'R') || (attempt_4[0] == word[0] && attempt_4[0] == 'R') || (attempt_4[1] == word[1] && attempt_4[1] == 'R') || (attempt_4[2] == word[2] && attempt_4[2] == 'R') || (attempt_4[3] == word[3] && attempt_4[3] == 'R') || (attempt_4[4] == word[4] && attempt_4[4] == 'R') || (attempt_5[0] == word[0] && attempt_5[0] == 'R') || (attempt_5[1] == word[1] && attempt_5[1] == 'R') || (attempt_5[2] == word[2] && attempt_5[2] == 'R') || (attempt_5[3] == word[3] && attempt_5[3] == 'R') || (attempt_5[4] == word[4] && attempt_5[4] == 'R') || (attempt_6[0] == word[0] && attempt_6[0] == 'R') || (attempt_6[1] == word[1] && attempt_6[1] == 'R') || (attempt_6[2] == word[2] && attempt_6[2] == 'R') || (attempt_6[3] == word[3] && attempt_6[3] == 'R') || (attempt_6[4] == word[4] && attempt_6[4] == 'R'))
    {
        cout << " ";
        c1();
        cout << " R ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'R') || (attempt_1[0] == word[2] && word[2] == 'R') || (attempt_1[0] == word[3] && word[3] == 'R') || (attempt_1[0] == word[4] && word[4] == 'R') || (attempt_1[1] == word[0] && word[0] == 'R') || (attempt_1[1] == word[2] && word[2] == 'R') || (attempt_1[1] == word[3] && word[3] == 'R') || (attempt_1[1] == word[4] && word[4] == 'R') || (attempt_1[2] == word[1] && word[1] == 'R') || (attempt_1[2] == word[0] && word[0] == 'R') || (attempt_1[2] == word[3] && word[3] == 'R') || (attempt_1[2] == word[4] && word[4] == 'R') || (attempt_1[3] == word[1] && word[1] == 'R') || (attempt_1[3] == word[0] && word[0] == 'R') || (attempt_1[3] == word[2] && word[2] == 'R') || (attempt_1[3] == word[4] && word[4] == 'R') || (attempt_1[4] == word[1] && word[1] == 'R') || (attempt_1[4] == word[0] && word[0] == 'R') || (attempt_1[4] == word[3] && word[3] == 'R') || (attempt_1[4] == word[2] && word[2] == 'R') || (attempt_2[0] == word[1] && word[1] == 'R') || (attempt_2[0] == word[2] && word[2] == 'R') || (attempt_2[0] == word[3] && word[3] == 'R') || (attempt_2[0] == word[4] && word[4] == 'R') || (attempt_2[1] == word[0] && word[0] == 'R') || (attempt_2[1] == word[2] && word[2] == 'R') || (attempt_2[1] == word[3] && word[3] == 'R') || (attempt_2[1] == word[4] && word[4] == 'R') || (attempt_2[2] == word[1] && word[1] == 'R') || (attempt_2[2] == word[0] && word[0] == 'R') || (attempt_2[2] == word[3] && word[3] == 'R') || (attempt_2[2] == word[4] && word[4] == 'R') || (attempt_2[3] == word[1] && word[1] == 'R') || (attempt_2[3] == word[0] && word[0] == 'R') || (attempt_2[3] == word[2] && word[2] == 'R') || (attempt_2[3] == word[4] && word[4] == 'R') || (attempt_2[4] == word[1] && word[1] == 'R') || (attempt_2[4] == word[0] && word[0] == 'R') || (attempt_2[4] == word[3] && word[3] == 'R') || (attempt_2[4] == word[2] && word[2] == 'R') || (attempt_3[0] == word[1] && word[1] == 'R') || (attempt_3[0] == word[2] && word[2] == 'R') || (attempt_3[0] == word[3] && word[3] == 'R') || (attempt_3[0] == word[4] && word[4] == 'R') || (attempt_3[1] == word[0] && word[0] == 'R') || (attempt_3[1] == word[2] && word[2] == 'R') || (attempt_3[1] == word[3] && word[3] == 'R') || (attempt_3[1] == word[4] && word[4] == 'R') || (attempt_3[2] == word[1] && word[1] == 'R') || (attempt_3[2] == word[0] && word[0] == 'R') || (attempt_3[2] == word[3] && word[3] == 'R') || (attempt_3[2] == word[4] && word[4] == 'R') || (attempt_3[3] == word[1] && word[1] == 'R') || (attempt_3[3] == word[0] && word[0] == 'R') || (attempt_3[3] == word[2] && word[2] == 'R') || (attempt_3[3] == word[4] && word[4] == 'R') || (attempt_3[4] == word[1] && word[1] == 'R') || (attempt_3[4] == word[0] && word[0] == 'R') || (attempt_3[4] == word[3] && word[3] == 'R') || (attempt_3[4] == word[2] && word[2] == 'R') || (attempt_4[0] == word[1] && word[1] == 'R') || (attempt_4[0] == word[2] && word[2] == 'R') || (attempt_4[0] == word[3] && word[3] == 'R') || (attempt_4[0] == word[4] && word[4] == 'R') || (attempt_4[1] == word[0] && word[0] == 'R') || (attempt_4[1] == word[2] && word[2] == 'R') || (attempt_4[1] == word[3] && word[3] == 'R') || (attempt_4[1] == word[4] && word[4] == 'R') || (attempt_4[2] == word[1] && word[1] == 'R') || (attempt_4[2] == word[0] && word[0] == 'R') || (attempt_4[2] == word[3] && word[3] == 'R') || (attempt_4[2] == word[4] && word[4] == 'R') || (attempt_4[3] == word[1] && word[1] == 'R') || (attempt_4[3] == word[0] && word[0] == 'R') || (attempt_4[3] == word[2] && word[2] == 'R') || (attempt_4[3] == word[4] && word[4] == 'R') || (attempt_4[4] == word[1] && word[1] == 'R') || (attempt_4[4] == word[0] && word[0] == 'R') || (attempt_4[4] == word[3] && word[3] == 'R') || (attempt_4[4] == word[2] && word[2] == 'R') || (attempt_5[0] == word[1] && word[1] == 'R') || (attempt_5[0] == word[2] && word[2] == 'R') || (attempt_5[0] == word[3] && word[3] == 'R') || (attempt_5[0] == word[4] && word[4] == 'R') || (attempt_5[1] == word[0] && word[0] == 'R') || (attempt_5[1] == word[2] && word[2] == 'R') || (attempt_5[1] == word[3] && word[3] == 'R') || (attempt_5[1] == word[4] && word[4] == 'R') || (attempt_5[2] == word[1] && word[1] == 'R') || (attempt_5[2] == word[0] && word[0] == 'R') || (attempt_5[2] == word[3] && word[3] == 'R') || (attempt_5[2] == word[4] && word[4] == 'R') || (attempt_5[3] == word[1] && word[1] == 'R') || (attempt_5[3] == word[0] && word[0] == 'R') || (attempt_5[3] == word[2] && word[2] == 'R') || (attempt_5[3] == word[4] && word[4] == 'R') || (attempt_5[4] == word[1] && word[1] == 'R') || (attempt_5[4] == word[0] && word[0] == 'R') || (attempt_5[4] == word[3] && word[3] == 'R') || (attempt_5[4] == word[2] && word[2] == 'R') || (attempt_6[0] == word[1] && word[1] == 'R') || (attempt_6[0] == word[2] && word[2] == 'R') || (attempt_6[0] == word[3] && word[3] == 'R') || (attempt_6[0] == word[4] && word[4] == 'R') || (attempt_6[1] == word[0] && word[0] == 'R') || (attempt_6[1] == word[2] && word[2] == 'R') || (attempt_6[1] == word[3] && word[3] == 'R') || (attempt_6[1] == word[4] && word[4] == 'R') || (attempt_6[2] == word[1] && word[1] == 'R') || (attempt_6[2] == word[0] && word[0] == 'R') || (attempt_6[2] == word[3] && word[3] == 'R') || (attempt_6[2] == word[4] && word[4] == 'R') || (attempt_6[3] == word[1] && word[1] == 'R') || (attempt_6[3] == word[0] && word[0] == 'R') || (attempt_6[3] == word[2] && word[2] == 'R') || (attempt_6[3] == word[4] && word[4] == 'R') || (attempt_6[4] == word[1] && word[1] == 'R') || (attempt_6[4] == word[0] && word[0] == 'R') || (attempt_6[4] == word[3] && word[3] == 'R') || (attempt_6[4] == word[2] && word[2] == 'R'))
    {
        cout << " ";
        c2();
        cout << " R ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'R') || (attempt_1[0] != word[2] && attempt_1[0] == 'R') || (attempt_1[0] != word[3] && attempt_1[0] == 'R') || (attempt_1[0] != word[4] && attempt_1[0] == 'R') || (attempt_1[1] != word[0] && attempt_1[1] == 'R') || (attempt_1[1] != word[2] && attempt_1[1] == 'R') || (attempt_1[1] != word[3] && attempt_1[1] == 'R') || (attempt_1[1] != word[4] && attempt_1[1] == 'R') || (attempt_1[2] != word[1] && attempt_1[2] == 'R') || (attempt_1[2] != word[0] && attempt_1[2] == 'R') || (attempt_1[2] != word[3] && attempt_1[2] == 'R') || (attempt_1[2] != word[4] && attempt_1[2] == 'R') || (attempt_1[3] != word[1] && attempt_1[3] == 'R') || (attempt_1[3] != word[2] && attempt_1[3] == 'R') || (attempt_1[3] != word[0] && attempt_1[3] == 'R') || (attempt_1[3] != word[4] && attempt_1[3] == 'R') || (attempt_1[4] != word[1] && attempt_1[4] == 'R') || (attempt_1[4] != word[2] && attempt_1[4] == 'R') || (attempt_1[4] != word[3] && attempt_1[4] == 'R') || (attempt_1[4] != word[0] && attempt_1[4] == 'R') || (attempt_2[0] != word[1] && attempt_2[0] == 'R') || (attempt_2[0] != word[2] && attempt_2[0] == 'R') || (attempt_2[0] != word[3] && attempt_2[0] == 'R') || (attempt_2[0] != word[4] && attempt_2[0] == 'R') || (attempt_2[1] != word[0] && attempt_2[1] == 'R') || (attempt_2[1] != word[2] && attempt_2[1] == 'R') || (attempt_2[1] != word[3] && attempt_2[1] == 'R') || (attempt_2[1] != word[4] && attempt_2[1] == 'R') || (attempt_2[2] != word[1] && attempt_2[2] == 'R') || (attempt_2[2] != word[0] && attempt_2[2] == 'R') || (attempt_2[2] != word[3] && attempt_2[2] == 'R') || (attempt_2[2] != word[4] && attempt_2[2] == 'R') || (attempt_2[3] != word[1] && attempt_2[3] == 'R') || (attempt_2[3] != word[2] && attempt_2[3] == 'R') || (attempt_2[3] != word[0] && attempt_2[3] == 'R') || (attempt_2[3] != word[4] && attempt_2[3] == 'R') || (attempt_2[4] != word[1] && attempt_2[4] == 'R') || (attempt_2[4] != word[2] && attempt_2[4] == 'R') || (attempt_2[4] != word[3] && attempt_2[4] == 'R') || (attempt_2[4] != word[0] && attempt_2[4] == 'R') || (attempt_3[0] != word[1] && attempt_3[0] == 'R') || (attempt_3[0] != word[2] && attempt_3[0] == 'R') || (attempt_3[0] != word[3] && attempt_3[0] == 'R') || (attempt_3[0] != word[4] && attempt_3[0] == 'R') || (attempt_3[1] != word[0] && attempt_3[1] == 'R') || (attempt_3[1] != word[2] && attempt_3[1] == 'R') || (attempt_3[1] != word[3] && attempt_3[1] == 'R') || (attempt_3[1] != word[4] && attempt_3[1] == 'R') || (attempt_3[2] != word[1] && attempt_3[2] == 'R') || (attempt_3[2] != word[0] && attempt_3[2] == 'R') || (attempt_3[2] != word[3] && attempt_3[2] == 'R') || (attempt_3[2] != word[4] && attempt_3[2] == 'R') || (attempt_3[3] != word[1] && attempt_3[3] == 'R') || (attempt_3[3] != word[2] && attempt_3[3] == 'R') || (attempt_3[3] != word[0] && attempt_3[3] == 'R') || (attempt_3[3] != word[4] && attempt_3[3] == 'R') || (attempt_3[4] != word[1] && attempt_3[4] == 'R') || (attempt_3[4] != word[2] && attempt_3[4] == 'R') || (attempt_3[4] != word[3] && attempt_3[4] == 'R') || (attempt_3[4] != word[0] && attempt_3[4] == 'R') || (attempt_4[0] != word[1] && attempt_4[0] == 'R') || (attempt_4[0] != word[2] && attempt_4[0] == 'R') || (attempt_4[0] != word[3] && attempt_4[0] == 'R') || (attempt_4[0] != word[4] && attempt_4[0] == 'R') || (attempt_4[1] != word[0] && attempt_4[1] == 'R') || (attempt_4[1] != word[2] && attempt_4[1] == 'R') || (attempt_4[1] != word[3] && attempt_4[1] == 'R') || (attempt_4[1] != word[4] && attempt_4[1] == 'R') || (attempt_4[2] != word[1] && attempt_4[2] == 'R') || (attempt_4[2] != word[0] && attempt_4[2] == 'R') || (attempt_4[2] != word[3] && attempt_4[2] == 'R') || (attempt_4[2] != word[4] && attempt_4[2] == 'R') || (attempt_4[3] != word[1] && attempt_4[3] == 'R') || (attempt_4[3] != word[2] && attempt_4[3] == 'R') || (attempt_4[3] != word[0] && attempt_4[3] == 'R') || (attempt_4[3] != word[4] && attempt_4[3] == 'R') || (attempt_4[4] != word[1] && attempt_4[4] == 'R') || (attempt_4[4] != word[2] && attempt_4[4] == 'R') || (attempt_4[4] != word[3] && attempt_4[4] == 'R') || (attempt_4[4] != word[0] && attempt_4[4] == 'R') || (attempt_5[0] != word[1] && attempt_5[0] == 'R') || (attempt_5[0] != word[2] && attempt_5[0] == 'R') || (attempt_5[0] != word[3] && attempt_5[0] == 'R') || (attempt_5[0] != word[4] && attempt_5[0] == 'R') || (attempt_5[1] != word[0] && attempt_5[1] == 'R') || (attempt_5[1] != word[2] && attempt_5[1] == 'R') || (attempt_5[1] != word[3] && attempt_5[1] == 'R') || (attempt_5[1] != word[4] && attempt_5[1] == 'R') || (attempt_5[2] != word[1] && attempt_5[2] == 'R') || (attempt_5[2] != word[0] && attempt_5[2] == 'R') || (attempt_5[2] != word[3] && attempt_5[2] == 'R') || (attempt_5[2] != word[4] && attempt_5[2] == 'R') || (attempt_5[3] != word[1] && attempt_5[3] == 'R') || (attempt_5[3] != word[2] && attempt_5[3] == 'R') || (attempt_5[3] != word[0] && attempt_5[3] == 'R') || (attempt_5[3] != word[4] && attempt_5[3] == 'R') || (attempt_5[4] != word[1] && attempt_5[4] == 'R') || (attempt_5[4] != word[2] && attempt_5[4] == 'R') || (attempt_5[4] != word[3] && attempt_5[4] == 'R') || (attempt_5[4] != word[0] && attempt_5[4] == 'R') || (attempt_6[0] != word[1] && attempt_6[0] == 'R') || (attempt_6[0] != word[2] && attempt_6[0] == 'R') || (attempt_6[0] != word[3] && attempt_6[0] == 'R') || (attempt_6[0] != word[4] && attempt_6[0] == 'R') || (attempt_6[1] != word[0] && attempt_6[1] == 'R') || (attempt_6[1] != word[2] && attempt_6[1] == 'R') || (attempt_6[1] != word[3] && attempt_6[1] == 'R') || (attempt_6[1] != word[4] && attempt_6[1] == 'R') || (attempt_6[2] != word[1] && attempt_6[2] == 'R') || (attempt_6[2] != word[0] && attempt_6[2] == 'R') || (attempt_6[2] != word[3] && attempt_6[2] == 'R') || (attempt_6[2] != word[4] && attempt_6[2] == 'R') || (attempt_6[3] != word[1] && attempt_6[3] == 'R') || (attempt_6[3] != word[2] && attempt_6[3] == 'R') || (attempt_6[3] != word[0] && attempt_6[3] == 'R') || (attempt_6[3] != word[4] && attempt_6[3] == 'R') || (attempt_6[4] != word[1] && attempt_6[4] == 'R') || (attempt_6[4] != word[2] && attempt_6[4] == 'R') || (attempt_6[4] != word[3] && attempt_6[4] == 'R') || (attempt_6[4] != word[0] && attempt_6[4] == 'R'))
    {
        cout << " ";
        c3();
        cout << " R ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " R ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'T') || (attempt_1[1] == word[1] && attempt_1[1] == 'T') || (attempt_1[2] == word[2] && attempt_1[2] == 'T') || (attempt_1[3] == word[3] && attempt_1[3] == 'T') || (attempt_1[4] == word[4] && attempt_1[4] == 'T') || (attempt_2[0] == word[0] && attempt_2[0] == 'T') || (attempt_2[1] == word[1] && attempt_2[1] == 'T') || (attempt_2[2] == word[2] && attempt_2[2] == 'T') || (attempt_2[3] == word[3] && attempt_2[3] == 'T') || (attempt_2[4] == word[4] && attempt_2[4] == 'T') || (attempt_3[0] == word[0] && attempt_3[0] == 'T') || (attempt_3[1] == word[1] && attempt_3[1] == 'T') || (attempt_3[2] == word[2] && attempt_3[2] == 'T') || (attempt_3[3] == word[3] && attempt_3[3] == 'T') || (attempt_3[4] == word[4] && attempt_3[4] == 'T') || (attempt_4[0] == word[0] && attempt_4[0] == 'T') || (attempt_4[1] == word[1] && attempt_4[1] == 'T') || (attempt_4[2] == word[2] && attempt_4[2] == 'T') || (attempt_4[3] == word[3] && attempt_4[3] == 'T') || (attempt_4[4] == word[4] && attempt_4[4] == 'T') || (attempt_5[0] == word[0] && attempt_5[0] == 'T') || (attempt_5[1] == word[1] && attempt_5[1] == 'T') || (attempt_5[2] == word[2] && attempt_5[2] == 'T') || (attempt_5[3] == word[3] && attempt_5[3] == 'T') || (attempt_5[4] == word[4] && attempt_5[4] == 'T') || (attempt_6[0] == word[0] && attempt_6[0] == 'T') || (attempt_6[1] == word[1] && attempt_6[1] == 'T') || (attempt_6[2] == word[2] && attempt_6[2] == 'T') || (attempt_6[3] == word[3] && attempt_6[3] == 'T') || (attempt_6[4] == word[4] && attempt_6[4] == 'T'))
    {
        cout << " ";
        c1();
        cout << " T ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'T') || (attempt_1[0] == word[2] && word[2] == 'T') || (attempt_1[0] == word[3] && word[3] == 'T') || (attempt_1[0] == word[4] && word[4] == 'T') || (attempt_1[1] == word[0] && word[0] == 'T') || (attempt_1[1] == word[2] && word[2] == 'T') || (attempt_1[1] == word[3] && word[3] == 'T') || (attempt_1[1] == word[4] && word[4] == 'T') || (attempt_1[2] == word[1] && word[1] == 'T') || (attempt_1[2] == word[0] && word[0] == 'T') || (attempt_1[2] == word[3] && word[3] == 'T') || (attempt_1[2] == word[4] && word[4] == 'T') || (attempt_1[3] == word[1] && word[1] == 'T') || (attempt_1[3] == word[0] && word[0] == 'T') || (attempt_1[3] == word[2] && word[2] == 'T') || (attempt_1[3] == word[4] && word[4] == 'T') || (attempt_1[4] == word[1] && word[1] == 'T') || (attempt_1[4] == word[0] && word[0] == 'T') || (attempt_1[4] == word[3] && word[3] == 'T') || (attempt_1[4] == word[2] && word[2] == 'T') || (attempt_2[0] == word[1] && word[1] == 'T') || (attempt_2[0] == word[2] && word[2] == 'T') || (attempt_2[0] == word[3] && word[3] == 'T') || (attempt_2[0] == word[4] && word[4] == 'T') || (attempt_2[1] == word[0] && word[0] == 'T') || (attempt_2[1] == word[2] && word[2] == 'T') || (attempt_2[1] == word[3] && word[3] == 'T') || (attempt_2[1] == word[4] && word[4] == 'T') || (attempt_2[2] == word[1] && word[1] == 'T') || (attempt_2[2] == word[0] && word[0] == 'T') || (attempt_2[2] == word[3] && word[3] == 'T') || (attempt_2[2] == word[4] && word[4] == 'T') || (attempt_2[3] == word[1] && word[1] == 'T') || (attempt_2[3] == word[0] && word[0] == 'T') || (attempt_2[3] == word[2] && word[2] == 'T') || (attempt_2[3] == word[4] && word[4] == 'T') || (attempt_2[4] == word[1] && word[1] == 'T') || (attempt_2[4] == word[0] && word[0] == 'T') || (attempt_2[4] == word[3] && word[3] == 'T') || (attempt_2[4] == word[2] && word[2] == 'T') || (attempt_3[0] == word[1] && word[1] == 'T') || (attempt_3[0] == word[2] && word[2] == 'T') || (attempt_3[0] == word[3] && word[3] == 'T') || (attempt_3[0] == word[4] && word[4] == 'T') || (attempt_3[1] == word[0] && word[0] == 'T') || (attempt_3[1] == word[2] && word[2] == 'T') || (attempt_3[1] == word[3] && word[3] == 'T') || (attempt_3[1] == word[4] && word[4] == 'T') || (attempt_3[2] == word[1] && word[1] == 'T') || (attempt_3[2] == word[0] && word[0] == 'T') || (attempt_3[2] == word[3] && word[3] == 'T') || (attempt_3[2] == word[4] && word[4] == 'T') || (attempt_3[3] == word[1] && word[1] == 'T') || (attempt_3[3] == word[0] && word[0] == 'T') || (attempt_3[3] == word[2] && word[2] == 'T') || (attempt_3[3] == word[4] && word[4] == 'T') || (attempt_3[4] == word[1] && word[1] == 'T') || (attempt_3[4] == word[0] && word[0] == 'T') || (attempt_3[4] == word[3] && word[3] == 'T') || (attempt_3[4] == word[2] && word[2] == 'T') || (attempt_4[0] == word[1] && word[1] == 'T') || (attempt_4[0] == word[2] && word[2] == 'T') || (attempt_4[0] == word[3] && word[3] == 'T') || (attempt_4[0] == word[4] && word[4] == 'T') || (attempt_4[1] == word[0] && word[0] == 'T') || (attempt_4[1] == word[2] && word[2] == 'T') || (attempt_4[1] == word[3] && word[3] == 'T') || (attempt_4[1] == word[4] && word[4] == 'T') || (attempt_4[2] == word[1] && word[1] == 'T') || (attempt_4[2] == word[0] && word[0] == 'T') || (attempt_4[2] == word[3] && word[3] == 'T') || (attempt_4[2] == word[4] && word[4] == 'T') || (attempt_4[3] == word[1] && word[1] == 'T') || (attempt_4[3] == word[0] && word[0] == 'T') || (attempt_4[3] == word[2] && word[2] == 'T') || (attempt_4[3] == word[4] && word[4] == 'T') || (attempt_4[4] == word[1] && word[1] == 'T') || (attempt_4[4] == word[0] && word[0] == 'T') || (attempt_4[4] == word[3] && word[3] == 'T') || (attempt_4[4] == word[2] && word[2] == 'T') || (attempt_5[0] == word[1] && word[1] == 'T') || (attempt_5[0] == word[2] && word[2] == 'T') || (attempt_5[0] == word[3] && word[3] == 'T') || (attempt_5[0] == word[4] && word[4] == 'T') || (attempt_5[1] == word[0] && word[0] == 'T') || (attempt_5[1] == word[2] && word[2] == 'T') || (attempt_5[1] == word[3] && word[3] == 'T') || (attempt_5[1] == word[4] && word[4] == 'T') || (attempt_5[2] == word[1] && word[1] == 'T') || (attempt_5[2] == word[0] && word[0] == 'T') || (attempt_5[2] == word[3] && word[3] == 'T') || (attempt_5[2] == word[4] && word[4] == 'T') || (attempt_5[3] == word[1] && word[1] == 'T') || (attempt_5[3] == word[0] && word[0] == 'T') || (attempt_5[3] == word[2] && word[2] == 'T') || (attempt_5[3] == word[4] && word[4] == 'T') || (attempt_5[4] == word[1] && word[1] == 'T') || (attempt_5[4] == word[0] && word[0] == 'T') || (attempt_5[4] == word[3] && word[3] == 'T') || (attempt_5[4] == word[2] && word[2] == 'T') || (attempt_6[0] == word[1] && word[1] == 'T') || (attempt_6[0] == word[2] && word[2] == 'T') || (attempt_6[0] == word[3] && word[3] == 'T') || (attempt_6[0] == word[4] && word[4] == 'T') || (attempt_6[1] == word[0] && word[0] == 'T') || (attempt_6[1] == word[2] && word[2] == 'T') || (attempt_6[1] == word[3] && word[3] == 'T') || (attempt_6[1] == word[4] && word[4] == 'T') || (attempt_6[2] == word[1] && word[1] == 'T') || (attempt_6[2] == word[0] && word[0] == 'T') || (attempt_6[2] == word[3] && word[3] == 'T') || (attempt_6[2] == word[4] && word[4] == 'T') || (attempt_6[3] == word[1] && word[1] == 'T') || (attempt_6[3] == word[0] && word[0] == 'T') || (attempt_6[3] == word[2] && word[2] == 'T') || (attempt_6[3] == word[4] && word[4] == 'T') || (attempt_6[4] == word[1] && word[1] == 'T') || (attempt_6[4] == word[0] && word[0] == 'T') || (attempt_6[4] == word[3] && word[3] == 'T') || (attempt_6[4] == word[2] && word[2] == 'T'))
    {
        cout << " ";
        c2();
        cout << " T ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'T') || (attempt_1[0] != word[2] && attempt_1[0] == 'T') || (attempt_1[0] != word[3] && attempt_1[0] == 'T') || (attempt_1[0] != word[4] && attempt_1[0] == 'T') || (attempt_1[1] != word[0] && attempt_1[1] == 'T') || (attempt_1[1] != word[2] && attempt_1[1] == 'T') || (attempt_1[1] != word[3] && attempt_1[1] == 'T') || (attempt_1[1] != word[4] && attempt_1[1] == 'T') || (attempt_1[2] != word[1] && attempt_1[2] == 'T') || (attempt_1[2] != word[0] && attempt_1[2] == 'T') || (attempt_1[2] != word[3] && attempt_1[2] == 'T') || (attempt_1[2] != word[4] && attempt_1[2] == 'T') || (attempt_1[3] != word[1] && attempt_1[3] == 'T') || (attempt_1[3] != word[2] && attempt_1[3] == 'T') || (attempt_1[3] != word[0] && attempt_1[3] == 'T') || (attempt_1[3] != word[4] && attempt_1[3] == 'T') || (attempt_1[4] != word[1] && attempt_1[4] == 'T') || (attempt_1[4] != word[2] && attempt_1[4] == 'T') || (attempt_1[4] != word[3] && attempt_1[4] == 'T') || (attempt_1[4] != word[0] && attempt_1[4] == 'T') || (attempt_2[0] != word[1] && attempt_2[0] == 'T') || (attempt_2[0] != word[2] && attempt_2[0] == 'T') || (attempt_2[0] != word[3] && attempt_2[0] == 'T') || (attempt_2[0] != word[4] && attempt_2[0] == 'T') || (attempt_2[1] != word[0] && attempt_2[1] == 'T') || (attempt_2[1] != word[2] && attempt_2[1] == 'T') || (attempt_2[1] != word[3] && attempt_2[1] == 'T') || (attempt_2[1] != word[4] && attempt_2[1] == 'T') || (attempt_2[2] != word[1] && attempt_2[2] == 'T') || (attempt_2[2] != word[0] && attempt_2[2] == 'T') || (attempt_2[2] != word[3] && attempt_2[2] == 'T') || (attempt_2[2] != word[4] && attempt_2[2] == 'T') || (attempt_2[3] != word[1] && attempt_2[3] == 'T') || (attempt_2[3] != word[2] && attempt_2[3] == 'T') || (attempt_2[3] != word[0] && attempt_2[3] == 'T') || (attempt_2[3] != word[4] && attempt_2[3] == 'T') || (attempt_2[4] != word[1] && attempt_2[4] == 'T') || (attempt_2[4] != word[2] && attempt_2[4] == 'T') || (attempt_2[4] != word[3] && attempt_2[4] == 'T') || (attempt_2[4] != word[0] && attempt_2[4] == 'T') || (attempt_3[0] != word[1] && attempt_3[0] == 'T') || (attempt_3[0] != word[2] && attempt_3[0] == 'T') || (attempt_3[0] != word[3] && attempt_3[0] == 'T') || (attempt_3[0] != word[4] && attempt_3[0] == 'T') || (attempt_3[1] != word[0] && attempt_3[1] == 'T') || (attempt_3[1] != word[2] && attempt_3[1] == 'T') || (attempt_3[1] != word[3] && attempt_3[1] == 'T') || (attempt_3[1] != word[4] && attempt_3[1] == 'T') || (attempt_3[2] != word[1] && attempt_3[2] == 'T') || (attempt_3[2] != word[0] && attempt_3[2] == 'T') || (attempt_3[2] != word[3] && attempt_3[2] == 'T') || (attempt_3[2] != word[4] && attempt_3[2] == 'T') || (attempt_3[3] != word[1] && attempt_3[3] == 'T') || (attempt_3[3] != word[2] && attempt_3[3] == 'T') || (attempt_3[3] != word[0] && attempt_3[3] == 'T') || (attempt_3[3] != word[4] && attempt_3[3] == 'T') || (attempt_3[4] != word[1] && attempt_3[4] == 'T') || (attempt_3[4] != word[2] && attempt_3[4] == 'T') || (attempt_3[4] != word[3] && attempt_3[4] == 'T') || (attempt_3[4] != word[0] && attempt_3[4] == 'T') || (attempt_4[0] != word[1] && attempt_4[0] == 'T') || (attempt_4[0] != word[2] && attempt_4[0] == 'T') || (attempt_4[0] != word[3] && attempt_4[0] == 'T') || (attempt_4[0] != word[4] && attempt_4[0] == 'T') || (attempt_4[1] != word[0] && attempt_4[1] == 'T') || (attempt_4[1] != word[2] && attempt_4[1] == 'T') || (attempt_4[1] != word[3] && attempt_4[1] == 'T') || (attempt_4[1] != word[4] && attempt_4[1] == 'T') || (attempt_4[2] != word[1] && attempt_4[2] == 'T') || (attempt_4[2] != word[0] && attempt_4[2] == 'T') || (attempt_4[2] != word[3] && attempt_4[2] == 'T') || (attempt_4[2] != word[4] && attempt_4[2] == 'T') || (attempt_4[3] != word[1] && attempt_4[3] == 'T') || (attempt_4[3] != word[2] && attempt_4[3] == 'T') || (attempt_4[3] != word[0] && attempt_4[3] == 'T') || (attempt_4[3] != word[4] && attempt_4[3] == 'T') || (attempt_4[4] != word[1] && attempt_4[4] == 'T') || (attempt_4[4] != word[2] && attempt_4[4] == 'T') || (attempt_4[4] != word[3] && attempt_4[4] == 'T') || (attempt_4[4] != word[0] && attempt_4[4] == 'T') || (attempt_5[0] != word[1] && attempt_5[0] == 'T') || (attempt_5[0] != word[2] && attempt_5[0] == 'T') || (attempt_5[0] != word[3] && attempt_5[0] == 'T') || (attempt_5[0] != word[4] && attempt_5[0] == 'T') || (attempt_5[1] != word[0] && attempt_5[1] == 'T') || (attempt_5[1] != word[2] && attempt_5[1] == 'T') || (attempt_5[1] != word[3] && attempt_5[1] == 'T') || (attempt_5[1] != word[4] && attempt_5[1] == 'T') || (attempt_5[2] != word[1] && attempt_5[2] == 'T') || (attempt_5[2] != word[0] && attempt_5[2] == 'T') || (attempt_5[2] != word[3] && attempt_5[2] == 'T') || (attempt_5[2] != word[4] && attempt_5[2] == 'T') || (attempt_5[3] != word[1] && attempt_5[3] == 'T') || (attempt_5[3] != word[2] && attempt_5[3] == 'T') || (attempt_5[3] != word[0] && attempt_5[3] == 'T') || (attempt_5[3] != word[4] && attempt_5[3] == 'T') || (attempt_5[4] != word[1] && attempt_5[4] == 'T') || (attempt_5[4] != word[2] && attempt_5[4] == 'T') || (attempt_5[4] != word[3] && attempt_5[4] == 'T') || (attempt_5[4] != word[0] && attempt_5[4] == 'T') || (attempt_6[0] != word[1] && attempt_6[0] == 'T') || (attempt_6[0] != word[2] && attempt_6[0] == 'T') || (attempt_6[0] != word[3] && attempt_6[0] == 'T') || (attempt_6[0] != word[4] && attempt_6[0] == 'T') || (attempt_6[1] != word[0] && attempt_6[1] == 'T') || (attempt_6[1] != word[2] && attempt_6[1] == 'T') || (attempt_6[1] != word[3] && attempt_6[1] == 'T') || (attempt_6[1] != word[4] && attempt_6[1] == 'T') || (attempt_6[2] != word[1] && attempt_6[2] == 'T') || (attempt_6[2] != word[0] && attempt_6[2] == 'T') || (attempt_6[2] != word[3] && attempt_6[2] == 'T') || (attempt_6[2] != word[4] && attempt_6[2] == 'T') || (attempt_6[3] != word[1] && attempt_6[3] == 'T') || (attempt_6[3] != word[2] && attempt_6[3] == 'T') || (attempt_6[3] != word[0] && attempt_6[3] == 'T') || (attempt_6[3] != word[4] && attempt_6[3] == 'T') || (attempt_6[4] != word[1] && attempt_6[4] == 'T') || (attempt_6[4] != word[2] && attempt_6[4] == 'T') || (attempt_6[4] != word[3] && attempt_6[4] == 'T') || (attempt_6[4] != word[0] && attempt_6[4] == 'T'))
    {
        cout << " ";
        c3();
        cout << " T ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " T ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'Y') || (attempt_1[1] == word[1] && attempt_1[1] == 'Y') || (attempt_1[2] == word[2] && attempt_1[2] == 'Y') || (attempt_1[3] == word[3] && attempt_1[3] == 'Y') || (attempt_1[4] == word[4] && attempt_1[4] == 'Y') || (attempt_2[0] == word[0] && attempt_2[0] == 'Y') || (attempt_2[1] == word[1] && attempt_2[1] == 'Y') || (attempt_2[2] == word[2] && attempt_2[2] == 'Y') || (attempt_2[3] == word[3] && attempt_2[3] == 'Y') || (attempt_2[4] == word[4] && attempt_2[4] == 'Y') || (attempt_3[0] == word[0] && attempt_3[0] == 'Y') || (attempt_3[1] == word[1] && attempt_3[1] == 'Y') || (attempt_3[2] == word[2] && attempt_3[2] == 'Y') || (attempt_3[3] == word[3] && attempt_3[3] == 'Y') || (attempt_3[4] == word[4] && attempt_3[4] == 'Y') || (attempt_4[0] == word[0] && attempt_4[0] == 'Y') || (attempt_4[1] == word[1] && attempt_4[1] == 'Y') || (attempt_4[2] == word[2] && attempt_4[2] == 'Y') || (attempt_4[3] == word[3] && attempt_4[3] == 'Y') || (attempt_4[4] == word[4] && attempt_4[4] == 'Y') || (attempt_5[0] == word[0] && attempt_5[0] == 'Y') || (attempt_5[1] == word[1] && attempt_5[1] == 'Y') || (attempt_5[2] == word[2] && attempt_5[2] == 'Y') || (attempt_5[3] == word[3] && attempt_5[3] == 'Y') || (attempt_5[4] == word[4] && attempt_5[4] == 'Y') || (attempt_6[0] == word[0] && attempt_6[0] == 'Y') || (attempt_6[1] == word[1] && attempt_6[1] == 'Y') || (attempt_6[2] == word[2] && attempt_6[2] == 'Y') || (attempt_6[3] == word[3] && attempt_6[3] == 'Y') || (attempt_6[4] == word[4] && attempt_6[4] == 'Y'))
    {
        cout << " ";
        c1();
        cout << " Y ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'Y') || (attempt_1[0] == word[2] && word[2] == 'Y') || (attempt_1[0] == word[3] && word[3] == 'Y') || (attempt_1[0] == word[4] && word[4] == 'Y') || (attempt_1[1] == word[0] && word[0] == 'Y') || (attempt_1[1] == word[2] && word[2] == 'Y') || (attempt_1[1] == word[3] && word[3] == 'Y') || (attempt_1[1] == word[4] && word[4] == 'Y') || (attempt_1[2] == word[1] && word[1] == 'Y') || (attempt_1[2] == word[0] && word[0] == 'Y') || (attempt_1[2] == word[3] && word[3] == 'Y') || (attempt_1[2] == word[4] && word[4] == 'Y') || (attempt_1[3] == word[1] && word[1] == 'Y') || (attempt_1[3] == word[0] && word[0] == 'Y') || (attempt_1[3] == word[2] && word[2] == 'Y') || (attempt_1[3] == word[4] && word[4] == 'Y') || (attempt_1[4] == word[1] && word[1] == 'Y') || (attempt_1[4] == word[0] && word[0] == 'Y') || (attempt_1[4] == word[3] && word[3] == 'Y') || (attempt_1[4] == word[2] && word[2] == 'Y') || (attempt_2[0] == word[1] && word[1] == 'Y') || (attempt_2[0] == word[2] && word[2] == 'Y') || (attempt_2[0] == word[3] && word[3] == 'Y') || (attempt_2[0] == word[4] && word[4] == 'Y') || (attempt_2[1] == word[0] && word[0] == 'Y') || (attempt_2[1] == word[2] && word[2] == 'Y') || (attempt_2[1] == word[3] && word[3] == 'Y') || (attempt_2[1] == word[4] && word[4] == 'Y') || (attempt_2[2] == word[1] && word[1] == 'Y') || (attempt_2[2] == word[0] && word[0] == 'Y') || (attempt_2[2] == word[3] && word[3] == 'Y') || (attempt_2[2] == word[4] && word[4] == 'Y') || (attempt_2[3] == word[1] && word[1] == 'Y') || (attempt_2[3] == word[0] && word[0] == 'Y') || (attempt_2[3] == word[2] && word[2] == 'Y') || (attempt_2[3] == word[4] && word[4] == 'Y') || (attempt_2[4] == word[1] && word[1] == 'Y') || (attempt_2[4] == word[0] && word[0] == 'Y') || (attempt_2[4] == word[3] && word[3] == 'Y') || (attempt_2[4] == word[2] && word[2] == 'Y') || (attempt_3[0] == word[1] && word[1] == 'Y') || (attempt_3[0] == word[2] && word[2] == 'Y') || (attempt_3[0] == word[3] && word[3] == 'Y') || (attempt_3[0] == word[4] && word[4] == 'Y') || (attempt_3[1] == word[0] && word[0] == 'Y') || (attempt_3[1] == word[2] && word[2] == 'Y') || (attempt_3[1] == word[3] && word[3] == 'Y') || (attempt_3[1] == word[4] && word[4] == 'Y') || (attempt_3[2] == word[1] && word[1] == 'Y') || (attempt_3[2] == word[0] && word[0] == 'Y') || (attempt_3[2] == word[3] && word[3] == 'Y') || (attempt_3[2] == word[4] && word[4] == 'Y') || (attempt_3[3] == word[1] && word[1] == 'Y') || (attempt_3[3] == word[0] && word[0] == 'Y') || (attempt_3[3] == word[2] && word[2] == 'Y') || (attempt_3[3] == word[4] && word[4] == 'Y') || (attempt_3[4] == word[1] && word[1] == 'Y') || (attempt_3[4] == word[0] && word[0] == 'Y') || (attempt_3[4] == word[3] && word[3] == 'Y') || (attempt_3[4] == word[2] && word[2] == 'Y') || (attempt_4[0] == word[1] && word[1] == 'Y') || (attempt_4[0] == word[2] && word[2] == 'Y') || (attempt_4[0] == word[3] && word[3] == 'Y') || (attempt_4[0] == word[4] && word[4] == 'Y') || (attempt_4[1] == word[0] && word[0] == 'Y') || (attempt_4[1] == word[2] && word[2] == 'Y') || (attempt_4[1] == word[3] && word[3] == 'Y') || (attempt_4[1] == word[4] && word[4] == 'Y') || (attempt_4[2] == word[1] && word[1] == 'Y') || (attempt_4[2] == word[0] && word[0] == 'Y') || (attempt_4[2] == word[3] && word[3] == 'Y') || (attempt_4[2] == word[4] && word[4] == 'Y') || (attempt_4[3] == word[1] && word[1] == 'Y') || (attempt_4[3] == word[0] && word[0] == 'Y') || (attempt_4[3] == word[2] && word[2] == 'Y') || (attempt_4[3] == word[4] && word[4] == 'Y') || (attempt_4[4] == word[1] && word[1] == 'Y') || (attempt_4[4] == word[0] && word[0] == 'Y') || (attempt_4[4] == word[3] && word[3] == 'Y') || (attempt_4[4] == word[2] && word[2] == 'Y') || (attempt_5[0] == word[1] && word[1] == 'Y') || (attempt_5[0] == word[2] && word[2] == 'Y') || (attempt_5[0] == word[3] && word[3] == 'Y') || (attempt_5[0] == word[4] && word[4] == 'Y') || (attempt_5[1] == word[0] && word[0] == 'Y') || (attempt_5[1] == word[2] && word[2] == 'Y') || (attempt_5[1] == word[3] && word[3] == 'Y') || (attempt_5[1] == word[4] && word[4] == 'Y') || (attempt_5[2] == word[1] && word[1] == 'Y') || (attempt_5[2] == word[0] && word[0] == 'Y') || (attempt_5[2] == word[3] && word[3] == 'Y') || (attempt_5[2] == word[4] && word[4] == 'Y') || (attempt_5[3] == word[1] && word[1] == 'Y') || (attempt_5[3] == word[0] && word[0] == 'Y') || (attempt_5[3] == word[2] && word[2] == 'Y') || (attempt_5[3] == word[4] && word[4] == 'Y') || (attempt_5[4] == word[1] && word[1] == 'Y') || (attempt_5[4] == word[0] && word[0] == 'Y') || (attempt_5[4] == word[3] && word[3] == 'Y') || (attempt_5[4] == word[2] && word[2] == 'Y') || (attempt_6[0] == word[1] && word[1] == 'Y') || (attempt_6[0] == word[2] && word[2] == 'Y') || (attempt_6[0] == word[3] && word[3] == 'Y') || (attempt_6[0] == word[4] && word[4] == 'Y') || (attempt_6[1] == word[0] && word[0] == 'Y') || (attempt_6[1] == word[2] && word[2] == 'Y') || (attempt_6[1] == word[3] && word[3] == 'Y') || (attempt_6[1] == word[4] && word[4] == 'Y') || (attempt_6[2] == word[1] && word[1] == 'Y') || (attempt_6[2] == word[0] && word[0] == 'Y') || (attempt_6[2] == word[3] && word[3] == 'Y') || (attempt_6[2] == word[4] && word[4] == 'Y') || (attempt_6[3] == word[1] && word[1] == 'Y') || (attempt_6[3] == word[0] && word[0] == 'Y') || (attempt_6[3] == word[2] && word[2] == 'Y') || (attempt_6[3] == word[4] && word[4] == 'Y') || (attempt_6[4] == word[1] && word[1] == 'Y') || (attempt_6[4] == word[0] && word[0] == 'Y') || (attempt_6[4] == word[3] && word[3] == 'Y') || (attempt_6[4] == word[2] && word[2] == 'Y'))
    {
        cout << " "; 
        c2();
        cout << " Y ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'Y') || (attempt_1[0] != word[2] && attempt_1[0] == 'Y') || (attempt_1[0] != word[3] && attempt_1[0] == 'Y') || (attempt_1[0] != word[4] && attempt_1[0] == 'Y') || (attempt_1[1] != word[0] && attempt_1[1] == 'Y') || (attempt_1[1] != word[2] && attempt_1[1] == 'Y') || (attempt_1[1] != word[3] && attempt_1[1] == 'Y') || (attempt_1[1] != word[4] && attempt_1[1] == 'Y') || (attempt_1[2] != word[1] && attempt_1[2] == 'Y') || (attempt_1[2] != word[0] && attempt_1[2] == 'Y') || (attempt_1[2] != word[3] && attempt_1[2] == 'Y') || (attempt_1[2] != word[4] && attempt_1[2] == 'Y') || (attempt_1[3] != word[1] && attempt_1[3] == 'Y') || (attempt_1[3] != word[2] && attempt_1[3] == 'Y') || (attempt_1[3] != word[0] && attempt_1[3] == 'Y') || (attempt_1[3] != word[4] && attempt_1[3] == 'Y') || (attempt_1[4] != word[1] && attempt_1[4] == 'Y') || (attempt_1[4] != word[2] && attempt_1[4] == 'Y') || (attempt_1[4] != word[3] && attempt_1[4] == 'Y') || (attempt_1[4] != word[0] && attempt_1[4] == 'Y') || (attempt_2[0] != word[1] && attempt_2[0] == 'Y') || (attempt_2[0] != word[2] && attempt_2[0] == 'Y') || (attempt_2[0] != word[3] && attempt_2[0] == 'Y') || (attempt_2[0] != word[4] && attempt_2[0] == 'Y') || (attempt_2[1] != word[0] && attempt_2[1] == 'Y') || (attempt_2[1] != word[2] && attempt_2[1] == 'Y') || (attempt_2[1] != word[3] && attempt_2[1] == 'Y') || (attempt_2[1] != word[4] && attempt_2[1] == 'Y') || (attempt_2[2] != word[1] && attempt_2[2] == 'Y') || (attempt_2[2] != word[0] && attempt_2[2] == 'Y') || (attempt_2[2] != word[3] && attempt_2[2] == 'Y') || (attempt_2[2] != word[4] && attempt_2[2] == 'Y') || (attempt_2[3] != word[1] && attempt_2[3] == 'Y') || (attempt_2[3] != word[2] && attempt_2[3] == 'Y') || (attempt_2[3] != word[0] && attempt_2[3] == 'Y') || (attempt_2[3] != word[4] && attempt_2[3] == 'Y') || (attempt_2[4] != word[1] && attempt_2[4] == 'Y') || (attempt_2[4] != word[2] && attempt_2[4] == 'Y') || (attempt_2[4] != word[3] && attempt_2[4] == 'Y') || (attempt_2[4] != word[0] && attempt_2[4] == 'Y') || (attempt_3[0] != word[1] && attempt_3[0] == 'Y') || (attempt_3[0] != word[2] && attempt_3[0] == 'Y') || (attempt_3[0] != word[3] && attempt_3[0] == 'Y') || (attempt_3[0] != word[4] && attempt_3[0] == 'Y') || (attempt_3[1] != word[0] && attempt_3[1] == 'Y') || (attempt_3[1] != word[2] && attempt_3[1] == 'Y') || (attempt_3[1] != word[3] && attempt_3[1] == 'Y') || (attempt_3[1] != word[4] && attempt_3[1] == 'Y') || (attempt_3[2] != word[1] && attempt_3[2] == 'Y') || (attempt_3[2] != word[0] && attempt_3[2] == 'Y') || (attempt_3[2] != word[3] && attempt_3[2] == 'Y') || (attempt_3[2] != word[4] && attempt_3[2] == 'Y') || (attempt_3[3] != word[1] && attempt_3[3] == 'Y') || (attempt_3[3] != word[2] && attempt_3[3] == 'Y') || (attempt_3[3] != word[0] && attempt_3[3] == 'Y') || (attempt_3[3] != word[4] && attempt_3[3] == 'Y') || (attempt_3[4] != word[1] && attempt_3[4] == 'Y') || (attempt_3[4] != word[2] && attempt_3[4] == 'Y') || (attempt_3[4] != word[3] && attempt_3[4] == 'Y') || (attempt_3[4] != word[0] && attempt_3[4] == 'Y') || (attempt_4[0] != word[1] && attempt_4[0] == 'Y') || (attempt_4[0] != word[2] && attempt_4[0] == 'Y') || (attempt_4[0] != word[3] && attempt_4[0] == 'Y') || (attempt_4[0] != word[4] && attempt_4[0] == 'Y') || (attempt_4[1] != word[0] && attempt_4[1] == 'Y') || (attempt_4[1] != word[2] && attempt_4[1] == 'Y') || (attempt_4[1] != word[3] && attempt_4[1] == 'Y') || (attempt_4[1] != word[4] && attempt_4[1] == 'Y') || (attempt_4[2] != word[1] && attempt_4[2] == 'Y') || (attempt_4[2] != word[0] && attempt_4[2] == 'Y') || (attempt_4[2] != word[3] && attempt_4[2] == 'Y') || (attempt_4[2] != word[4] && attempt_4[2] == 'Y') || (attempt_4[3] != word[1] && attempt_4[3] == 'Y') || (attempt_4[3] != word[2] && attempt_4[3] == 'Y') || (attempt_4[3] != word[0] && attempt_4[3] == 'Y') || (attempt_4[3] != word[4] && attempt_4[3] == 'Y') || (attempt_4[4] != word[1] && attempt_4[4] == 'Y') || (attempt_4[4] != word[2] && attempt_4[4] == 'Y') || (attempt_4[4] != word[3] && attempt_4[4] == 'Y') || (attempt_4[4] != word[0] && attempt_4[4] == 'Y') || (attempt_5[0] != word[1] && attempt_5[0] == 'Y') || (attempt_5[0] != word[2] && attempt_5[0] == 'Y') || (attempt_5[0] != word[3] && attempt_5[0] == 'Y') || (attempt_5[0] != word[4] && attempt_5[0] == 'Y') || (attempt_5[1] != word[0] && attempt_5[1] == 'Y') || (attempt_5[1] != word[2] && attempt_5[1] == 'Y') || (attempt_5[1] != word[3] && attempt_5[1] == 'Y') || (attempt_5[1] != word[4] && attempt_5[1] == 'Y') || (attempt_5[2] != word[1] && attempt_5[2] == 'Y') || (attempt_5[2] != word[0] && attempt_5[2] == 'Y') || (attempt_5[2] != word[3] && attempt_5[2] == 'Y') || (attempt_5[2] != word[4] && attempt_5[2] == 'Y') || (attempt_5[3] != word[1] && attempt_5[3] == 'Y') || (attempt_5[3] != word[2] && attempt_5[3] == 'Y') || (attempt_5[3] != word[0] && attempt_5[3] == 'Y') || (attempt_5[3] != word[4] && attempt_5[3] == 'Y') || (attempt_5[4] != word[1] && attempt_5[4] == 'Y') || (attempt_5[4] != word[2] && attempt_5[4] == 'Y') || (attempt_5[4] != word[3] && attempt_5[4] == 'Y') || (attempt_5[4] != word[0] && attempt_5[4] == 'Y') || (attempt_6[0] != word[1] && attempt_6[0] == 'Y') || (attempt_6[0] != word[2] && attempt_6[0] == 'Y') || (attempt_6[0] != word[3] && attempt_6[0] == 'Y') || (attempt_6[0] != word[4] && attempt_6[0] == 'Y') || (attempt_6[1] != word[0] && attempt_6[1] == 'Y') || (attempt_6[1] != word[2] && attempt_6[1] == 'Y') || (attempt_6[1] != word[3] && attempt_6[1] == 'Y') || (attempt_6[1] != word[4] && attempt_6[1] == 'Y') || (attempt_6[2] != word[1] && attempt_6[2] == 'Y') || (attempt_6[2] != word[0] && attempt_6[2] == 'Y') || (attempt_6[2] != word[3] && attempt_6[2] == 'Y') || (attempt_6[2] != word[4] && attempt_6[2] == 'Y') || (attempt_6[3] != word[1] && attempt_6[3] == 'Y') || (attempt_6[3] != word[2] && attempt_6[3] == 'Y') || (attempt_6[3] != word[0] && attempt_6[3] == 'Y') || (attempt_6[3] != word[4] && attempt_6[3] == 'Y') || (attempt_6[4] != word[1] && attempt_6[4] == 'Y') || (attempt_6[4] != word[2] && attempt_6[4] == 'Y') || (attempt_6[4] != word[3] && attempt_6[4] == 'Y') || (attempt_6[4] != word[0] && attempt_6[4] == 'Y'))
    {
        cout << " "; 
        c3();
        cout << " Y ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " Y ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'U') || (attempt_1[1] == word[1] && attempt_1[1] == 'U') || (attempt_1[2] == word[2] && attempt_1[2] == 'U') || (attempt_1[3] == word[3] && attempt_1[3] == 'U') || (attempt_1[4] == word[4] && attempt_1[4] == 'U') || (attempt_2[0] == word[0] && attempt_2[0] == 'U') || (attempt_2[1] == word[1] && attempt_2[1] == 'U') || (attempt_2[2] == word[2] && attempt_2[2] == 'U') || (attempt_2[3] == word[3] && attempt_2[3] == 'U') || (attempt_2[4] == word[4] && attempt_2[4] == 'U') || (attempt_3[0] == word[0] && attempt_3[0] == 'U') || (attempt_3[1] == word[1] && attempt_3[1] == 'U') || (attempt_3[2] == word[2] && attempt_3[2] == 'U') || (attempt_3[3] == word[3] && attempt_3[3] == 'U') || (attempt_3[4] == word[4] && attempt_3[4] == 'U') || (attempt_4[0] == word[0] && attempt_4[0] == 'U') || (attempt_4[1] == word[1] && attempt_4[1] == 'U') || (attempt_4[2] == word[2] && attempt_4[2] == 'U') || (attempt_4[3] == word[3] && attempt_4[3] == 'U') || (attempt_4[4] == word[4] && attempt_4[4] == 'U') || (attempt_5[0] == word[0] && attempt_5[0] == 'U') || (attempt_5[1] == word[1] && attempt_5[1] == 'U') || (attempt_5[2] == word[2] && attempt_5[2] == 'U') || (attempt_5[3] == word[3] && attempt_5[3] == 'U') || (attempt_5[4] == word[4] && attempt_5[4] == 'U') || (attempt_6[0] == word[0] && attempt_6[0] == 'U') || (attempt_6[1] == word[1] && attempt_6[1] == 'U') || (attempt_6[2] == word[2] && attempt_6[2] == 'U') || (attempt_6[3] == word[3] && attempt_6[3] == 'U') || (attempt_6[4] == word[4] && attempt_6[4] == 'U'))
    {
        cout << " ";
        c1();
        cout << " U ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'U') || (attempt_1[0] == word[2] && word[2] == 'U') || (attempt_1[0] == word[3] && word[3] == 'U') || (attempt_1[0] == word[4] && word[4] == 'U') || (attempt_1[1] == word[0] && word[0] == 'U') || (attempt_1[1] == word[2] && word[2] == 'U') || (attempt_1[1] == word[3] && word[3] == 'U') || (attempt_1[1] == word[4] && word[4] == 'U') || (attempt_1[2] == word[1] && word[1] == 'U') || (attempt_1[2] == word[0] && word[0] == 'U') || (attempt_1[2] == word[3] && word[3] == 'U') || (attempt_1[2] == word[4] && word[4] == 'U') || (attempt_1[3] == word[1] && word[1] == 'U') || (attempt_1[3] == word[0] && word[0] == 'U') || (attempt_1[3] == word[2] && word[2] == 'U') || (attempt_1[3] == word[4] && word[4] == 'U') || (attempt_1[4] == word[1] && word[1] == 'U') || (attempt_1[4] == word[0] && word[0] == 'U') || (attempt_1[4] == word[3] && word[3] == 'U') || (attempt_1[4] == word[2] && word[2] == 'U') || (attempt_2[0] == word[1] && word[1] == 'U') || (attempt_2[0] == word[2] && word[2] == 'U') || (attempt_2[0] == word[3] && word[3] == 'U') || (attempt_2[0] == word[4] && word[4] == 'U') || (attempt_2[1] == word[0] && word[0] == 'U') || (attempt_2[1] == word[2] && word[2] == 'U') || (attempt_2[1] == word[3] && word[3] == 'U') || (attempt_2[1] == word[4] && word[4] == 'U') || (attempt_2[2] == word[1] && word[1] == 'U') || (attempt_2[2] == word[0] && word[0] == 'U') || (attempt_2[2] == word[3] && word[3] == 'U') || (attempt_2[2] == word[4] && word[4] == 'U') || (attempt_2[3] == word[1] && word[1] == 'U') || (attempt_2[3] == word[0] && word[0] == 'U') || (attempt_2[3] == word[2] && word[2] == 'U') || (attempt_2[3] == word[4] && word[4] == 'U') || (attempt_2[4] == word[1] && word[1] == 'U') || (attempt_2[4] == word[0] && word[0] == 'U') || (attempt_2[4] == word[3] && word[3] == 'U') || (attempt_2[4] == word[2] && word[2] == 'U') || (attempt_3[0] == word[1] && word[1] == 'U') || (attempt_3[0] == word[2] && word[2] == 'U') || (attempt_3[0] == word[3] && word[3] == 'U') || (attempt_3[0] == word[4] && word[4] == 'U') || (attempt_3[1] == word[0] && word[0] == 'U') || (attempt_3[1] == word[2] && word[2] == 'U') || (attempt_3[1] == word[3] && word[3] == 'U') || (attempt_3[1] == word[4] && word[4] == 'U') || (attempt_3[2] == word[1] && word[1] == 'U') || (attempt_3[2] == word[0] && word[0] == 'U') || (attempt_3[2] == word[3] && word[3] == 'U') || (attempt_3[2] == word[4] && word[4] == 'U') || (attempt_3[3] == word[1] && word[1] == 'U') || (attempt_3[3] == word[0] && word[0] == 'U') || (attempt_3[3] == word[2] && word[2] == 'U') || (attempt_3[3] == word[4] && word[4] == 'U') || (attempt_3[4] == word[1] && word[1] == 'U') || (attempt_3[4] == word[0] && word[0] == 'U') || (attempt_3[4] == word[3] && word[3] == 'U') || (attempt_3[4] == word[2] && word[2] == 'U') || (attempt_4[0] == word[1] && word[1] == 'U') || (attempt_4[0] == word[2] && word[2] == 'U') || (attempt_4[0] == word[3] && word[3] == 'U') || (attempt_4[0] == word[4] && word[4] == 'U') || (attempt_4[1] == word[0] && word[0] == 'U') || (attempt_4[1] == word[2] && word[2] == 'U') || (attempt_4[1] == word[3] && word[3] == 'U') || (attempt_4[1] == word[4] && word[4] == 'U') || (attempt_4[2] == word[1] && word[1] == 'U') || (attempt_4[2] == word[0] && word[0] == 'U') || (attempt_4[2] == word[3] && word[3] == 'U') || (attempt_4[2] == word[4] && word[4] == 'U') || (attempt_4[3] == word[1] && word[1] == 'U') || (attempt_4[3] == word[0] && word[0] == 'U') || (attempt_4[3] == word[2] && word[2] == 'U') || (attempt_4[3] == word[4] && word[4] == 'U') || (attempt_4[4] == word[1] && word[1] == 'U') || (attempt_4[4] == word[0] && word[0] == 'U') || (attempt_4[4] == word[3] && word[3] == 'U') || (attempt_4[4] == word[2] && word[2] == 'U') || (attempt_5[0] == word[1] && word[1] == 'U') || (attempt_5[0] == word[2] && word[2] == 'U') || (attempt_5[0] == word[3] && word[3] == 'U') || (attempt_5[0] == word[4] && word[4] == 'U') || (attempt_5[1] == word[0] && word[0] == 'U') || (attempt_5[1] == word[2] && word[2] == 'U') || (attempt_5[1] == word[3] && word[3] == 'U') || (attempt_5[1] == word[4] && word[4] == 'U') || (attempt_5[2] == word[1] && word[1] == 'U') || (attempt_5[2] == word[0] && word[0] == 'U') || (attempt_5[2] == word[3] && word[3] == 'U') || (attempt_5[2] == word[4] && word[4] == 'U') || (attempt_5[3] == word[1] && word[1] == 'U') || (attempt_5[3] == word[0] && word[0] == 'U') || (attempt_5[3] == word[2] && word[2] == 'U') || (attempt_5[3] == word[4] && word[4] == 'U') || (attempt_5[4] == word[1] && word[1] == 'U') || (attempt_5[4] == word[0] && word[0] == 'U') || (attempt_5[4] == word[3] && word[3] == 'U') || (attempt_5[4] == word[2] && word[2] == 'U') || (attempt_6[0] == word[1] && word[1] == 'U') || (attempt_6[0] == word[2] && word[2] == 'U') || (attempt_6[0] == word[3] && word[3] == 'U') || (attempt_6[0] == word[4] && word[4] == 'U') || (attempt_6[1] == word[0] && word[0] == 'U') || (attempt_6[1] == word[2] && word[2] == 'U') || (attempt_6[1] == word[3] && word[3] == 'U') || (attempt_6[1] == word[4] && word[4] == 'U') || (attempt_6[2] == word[1] && word[1] == 'U') || (attempt_6[2] == word[0] && word[0] == 'U') || (attempt_6[2] == word[3] && word[3] == 'U') || (attempt_6[2] == word[4] && word[4] == 'U') || (attempt_6[3] == word[1] && word[1] == 'U') || (attempt_6[3] == word[0] && word[0] == 'U') || (attempt_6[3] == word[2] && word[2] == 'U') || (attempt_6[3] == word[4] && word[4] == 'U') || (attempt_6[4] == word[1] && word[1] == 'U') || (attempt_6[4] == word[0] && word[0] == 'U') || (attempt_6[4] == word[3] && word[3] == 'U') || (attempt_6[4] == word[2] && word[2] == 'U'))
    {
        cout << " ";
        c2();
        cout << " U ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'U') || (attempt_1[0] != word[2] && attempt_1[0] == 'U') || (attempt_1[0] != word[3] && attempt_1[0] == 'U') || (attempt_1[0] != word[4] && attempt_1[0] == 'U') || (attempt_1[1] != word[0] && attempt_1[1] == 'U') || (attempt_1[1] != word[2] && attempt_1[1] == 'U') || (attempt_1[1] != word[3] && attempt_1[1] == 'U') || (attempt_1[1] != word[4] && attempt_1[1] == 'U') || (attempt_1[2] != word[1] && attempt_1[2] == 'U') || (attempt_1[2] != word[0] && attempt_1[2] == 'U') || (attempt_1[2] != word[3] && attempt_1[2] == 'U') || (attempt_1[2] != word[4] && attempt_1[2] == 'U') || (attempt_1[3] != word[1] && attempt_1[3] == 'U') || (attempt_1[3] != word[2] && attempt_1[3] == 'U') || (attempt_1[3] != word[0] && attempt_1[3] == 'U') || (attempt_1[3] != word[4] && attempt_1[3] == 'U') || (attempt_1[4] != word[1] && attempt_1[4] == 'U') || (attempt_1[4] != word[2] && attempt_1[4] == 'U') || (attempt_1[4] != word[3] && attempt_1[4] == 'U') || (attempt_1[4] != word[0] && attempt_1[4] == 'U') || (attempt_2[0] != word[1] && attempt_2[0] == 'U') || (attempt_2[0] != word[2] && attempt_2[0] == 'U') || (attempt_2[0] != word[3] && attempt_2[0] == 'U') || (attempt_2[0] != word[4] && attempt_2[0] == 'U') || (attempt_2[1] != word[0] && attempt_2[1] == 'U') || (attempt_2[1] != word[2] && attempt_2[1] == 'U') || (attempt_2[1] != word[3] && attempt_2[1] == 'U') || (attempt_2[1] != word[4] && attempt_2[1] == 'U') || (attempt_2[2] != word[1] && attempt_2[2] == 'U') || (attempt_2[2] != word[0] && attempt_2[2] == 'U') || (attempt_2[2] != word[3] && attempt_2[2] == 'U') || (attempt_2[2] != word[4] && attempt_2[2] == 'U') || (attempt_2[3] != word[1] && attempt_2[3] == 'U') || (attempt_2[3] != word[2] && attempt_2[3] == 'U') || (attempt_2[3] != word[0] && attempt_2[3] == 'U') || (attempt_2[3] != word[4] && attempt_2[3] == 'U') || (attempt_2[4] != word[1] && attempt_2[4] == 'U') || (attempt_2[4] != word[2] && attempt_2[4] == 'U') || (attempt_2[4] != word[3] && attempt_2[4] == 'U') || (attempt_2[4] != word[0] && attempt_2[4] == 'U') || (attempt_3[0] != word[1] && attempt_3[0] == 'U') || (attempt_3[0] != word[2] && attempt_3[0] == 'U') || (attempt_3[0] != word[3] && attempt_3[0] == 'U') || (attempt_3[0] != word[4] && attempt_3[0] == 'U') || (attempt_3[1] != word[0] && attempt_3[1] == 'U') || (attempt_3[1] != word[2] && attempt_3[1] == 'U') || (attempt_3[1] != word[3] && attempt_3[1] == 'U') || (attempt_3[1] != word[4] && attempt_3[1] == 'U') || (attempt_3[2] != word[1] && attempt_3[2] == 'U') || (attempt_3[2] != word[0] && attempt_3[2] == 'U') || (attempt_3[2] != word[3] && attempt_3[2] == 'U') || (attempt_3[2] != word[4] && attempt_3[2] == 'U') || (attempt_3[3] != word[1] && attempt_3[3] == 'U') || (attempt_3[3] != word[2] && attempt_3[3] == 'U') || (attempt_3[3] != word[0] && attempt_3[3] == 'U') || (attempt_3[3] != word[4] && attempt_3[3] == 'U') || (attempt_3[4] != word[1] && attempt_3[4] == 'U') || (attempt_3[4] != word[2] && attempt_3[4] == 'U') || (attempt_3[4] != word[3] && attempt_3[4] == 'U') || (attempt_3[4] != word[0] && attempt_3[4] == 'U') || (attempt_4[0] != word[1] && attempt_4[0] == 'U') || (attempt_4[0] != word[2] && attempt_4[0] == 'U') || (attempt_4[0] != word[3] && attempt_4[0] == 'U') || (attempt_4[0] != word[4] && attempt_4[0] == 'U') || (attempt_4[1] != word[0] && attempt_4[1] == 'U') || (attempt_4[1] != word[2] && attempt_4[1] == 'U') || (attempt_4[1] != word[3] && attempt_4[1] == 'U') || (attempt_4[1] != word[4] && attempt_4[1] == 'U') || (attempt_4[2] != word[1] && attempt_4[2] == 'U') || (attempt_4[2] != word[0] && attempt_4[2] == 'U') || (attempt_4[2] != word[3] && attempt_4[2] == 'U') || (attempt_4[2] != word[4] && attempt_4[2] == 'U') || (attempt_4[3] != word[1] && attempt_4[3] == 'U') || (attempt_4[3] != word[2] && attempt_4[3] == 'U') || (attempt_4[3] != word[0] && attempt_4[3] == 'U') || (attempt_4[3] != word[4] && attempt_4[3] == 'U') || (attempt_4[4] != word[1] && attempt_4[4] == 'U') || (attempt_4[4] != word[2] && attempt_4[4] == 'U') || (attempt_4[4] != word[3] && attempt_4[4] == 'U') || (attempt_4[4] != word[0] && attempt_4[4] == 'U') || (attempt_5[0] != word[1] && attempt_5[0] == 'U') || (attempt_5[0] != word[2] && attempt_5[0] == 'U') || (attempt_5[0] != word[3] && attempt_5[0] == 'U') || (attempt_5[0] != word[4] && attempt_5[0] == 'U') || (attempt_5[1] != word[0] && attempt_5[1] == 'U') || (attempt_5[1] != word[2] && attempt_5[1] == 'U') || (attempt_5[1] != word[3] && attempt_5[1] == 'U') || (attempt_5[1] != word[4] && attempt_5[1] == 'U') || (attempt_5[2] != word[1] && attempt_5[2] == 'U') || (attempt_5[2] != word[0] && attempt_5[2] == 'U') || (attempt_5[2] != word[3] && attempt_5[2] == 'U') || (attempt_5[2] != word[4] && attempt_5[2] == 'U') || (attempt_5[3] != word[1] && attempt_5[3] == 'U') || (attempt_5[3] != word[2] && attempt_5[3] == 'U') || (attempt_5[3] != word[0] && attempt_5[3] == 'U') || (attempt_5[3] != word[4] && attempt_5[3] == 'U') || (attempt_5[4] != word[1] && attempt_5[4] == 'U') || (attempt_5[4] != word[2] && attempt_5[4] == 'U') || (attempt_5[4] != word[3] && attempt_5[4] == 'U') || (attempt_5[4] != word[0] && attempt_5[4] == 'U') || (attempt_6[0] != word[1] && attempt_6[0] == 'U') || (attempt_6[0] != word[2] && attempt_6[0] == 'U') || (attempt_6[0] != word[3] && attempt_6[0] == 'U') || (attempt_6[0] != word[4] && attempt_6[0] == 'U') || (attempt_6[1] != word[0] && attempt_6[1] == 'U') || (attempt_6[1] != word[2] && attempt_6[1] == 'U') || (attempt_6[1] != word[3] && attempt_6[1] == 'U') || (attempt_6[1] != word[4] && attempt_6[1] == 'U') || (attempt_6[2] != word[1] && attempt_6[2] == 'U') || (attempt_6[2] != word[0] && attempt_6[2] == 'U') || (attempt_6[2] != word[3] && attempt_6[2] == 'U') || (attempt_6[2] != word[4] && attempt_6[2] == 'U') || (attempt_6[3] != word[1] && attempt_6[3] == 'U') || (attempt_6[3] != word[2] && attempt_6[3] == 'U') || (attempt_6[3] != word[0] && attempt_6[3] == 'U') || (attempt_6[3] != word[4] && attempt_6[3] == 'U') || (attempt_6[4] != word[1] && attempt_6[4] == 'U') || (attempt_6[4] != word[2] && attempt_6[4] == 'U') || (attempt_6[4] != word[3] && attempt_6[4] == 'U') || (attempt_6[4] != word[0] && attempt_6[4] == 'U'))
    {
        cout << " ";
        c3();
        cout << " U ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " U ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'I') || (attempt_1[1] == word[1] && attempt_1[1] == 'I') || (attempt_1[2] == word[2] && attempt_1[2] == 'I') || (attempt_1[3] == word[3] && attempt_1[3] == 'I') || (attempt_1[4] == word[4] && attempt_1[4] == 'I') || (attempt_2[0] == word[0] && attempt_2[0] == 'I') || (attempt_2[1] == word[1] && attempt_2[1] == 'I') || (attempt_2[2] == word[2] && attempt_2[2] == 'I') || (attempt_2[3] == word[3] && attempt_2[3] == 'I') || (attempt_2[4] == word[4] && attempt_2[4] == 'I') || (attempt_3[0] == word[0] && attempt_3[0] == 'I') || (attempt_3[1] == word[1] && attempt_3[1] == 'I') || (attempt_3[2] == word[2] && attempt_3[2] == 'I') || (attempt_3[3] == word[3] && attempt_3[3] == 'I') || (attempt_3[4] == word[4] && attempt_3[4] == 'I') || (attempt_4[0] == word[0] && attempt_4[0] == 'I') || (attempt_4[1] == word[1] && attempt_4[1] == 'I') || (attempt_4[2] == word[2] && attempt_4[2] == 'I') || (attempt_4[3] == word[3] && attempt_4[3] == 'I') || (attempt_4[4] == word[4] && attempt_4[4] == 'I') || (attempt_5[0] == word[0] && attempt_5[0] == 'I') || (attempt_5[1] == word[1] && attempt_5[1] == 'I') || (attempt_5[2] == word[2] && attempt_5[2] == 'I') || (attempt_5[3] == word[3] && attempt_5[3] == 'I') || (attempt_5[4] == word[4] && attempt_5[4] == 'I') || (attempt_6[0] == word[0] && attempt_6[0] == 'I') || (attempt_6[1] == word[1] && attempt_6[1] == 'I') || (attempt_6[2] == word[2] && attempt_6[2] == 'I') || (attempt_6[3] == word[3] && attempt_6[3] == 'I') || (attempt_6[4] == word[4] && attempt_6[4] == 'I'))
    {
        cout << " ";
        c1();
        cout << " I ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'I') || (attempt_1[0] == word[2] && word[2] == 'I') || (attempt_1[0] == word[3] && word[3] == 'I') || (attempt_1[0] == word[4] && word[4] == 'I') || (attempt_1[1] == word[0] && word[0] == 'I') || (attempt_1[1] == word[2] && word[2] == 'I') || (attempt_1[1] == word[3] && word[3] == 'I') || (attempt_1[1] == word[4] && word[4] == 'I') || (attempt_1[2] == word[1] && word[1] == 'I') || (attempt_1[2] == word[0] && word[0] == 'I') || (attempt_1[2] == word[3] && word[3] == 'I') || (attempt_1[2] == word[4] && word[4] == 'I') || (attempt_1[3] == word[1] && word[1] == 'I') || (attempt_1[3] == word[0] && word[0] == 'I') || (attempt_1[3] == word[2] && word[2] == 'I') || (attempt_1[3] == word[4] && word[4] == 'I') || (attempt_1[4] == word[1] && word[1] == 'I') || (attempt_1[4] == word[0] && word[0] == 'I') || (attempt_1[4] == word[3] && word[3] == 'I') || (attempt_1[4] == word[2] && word[2] == 'I') || (attempt_2[0] == word[1] && word[1] == 'I') || (attempt_2[0] == word[2] && word[2] == 'I') || (attempt_2[0] == word[3] && word[3] == 'I') || (attempt_2[0] == word[4] && word[4] == 'I') || (attempt_2[1] == word[0] && word[0] == 'I') || (attempt_2[1] == word[2] && word[2] == 'I') || (attempt_2[1] == word[3] && word[3] == 'I') || (attempt_2[1] == word[4] && word[4] == 'I') || (attempt_2[2] == word[1] && word[1] == 'I') || (attempt_2[2] == word[0] && word[0] == 'I') || (attempt_2[2] == word[3] && word[3] == 'I') || (attempt_2[2] == word[4] && word[4] == 'I') || (attempt_2[3] == word[1] && word[1] == 'I') || (attempt_2[3] == word[0] && word[0] == 'I') || (attempt_2[3] == word[2] && word[2] == 'I') || (attempt_2[3] == word[4] && word[4] == 'I') || (attempt_2[4] == word[1] && word[1] == 'I') || (attempt_2[4] == word[0] && word[0] == 'I') || (attempt_2[4] == word[3] && word[3] == 'I') || (attempt_2[4] == word[2] && word[2] == 'I') || (attempt_3[0] == word[1] && word[1] == 'I') || (attempt_3[0] == word[2] && word[2] == 'I') || (attempt_3[0] == word[3] && word[3] == 'I') || (attempt_3[0] == word[4] && word[4] == 'I') || (attempt_3[1] == word[0] && word[0] == 'I') || (attempt_3[1] == word[2] && word[2] == 'I') || (attempt_3[1] == word[3] && word[3] == 'I') || (attempt_3[1] == word[4] && word[4] == 'I') || (attempt_3[2] == word[1] && word[1] == 'I') || (attempt_3[2] == word[0] && word[0] == 'I') || (attempt_3[2] == word[3] && word[3] == 'I') || (attempt_3[2] == word[4] && word[4] == 'I') || (attempt_3[3] == word[1] && word[1] == 'I') || (attempt_3[3] == word[0] && word[0] == 'I') || (attempt_3[3] == word[2] && word[2] == 'I') || (attempt_3[3] == word[4] && word[4] == 'I') || (attempt_3[4] == word[1] && word[1] == 'I') || (attempt_3[4] == word[0] && word[0] == 'I') || (attempt_3[4] == word[3] && word[3] == 'I') || (attempt_3[4] == word[2] && word[2] == 'I') || (attempt_4[0] == word[1] && word[1] == 'I') || (attempt_4[0] == word[2] && word[2] == 'I') || (attempt_4[0] == word[3] && word[3] == 'I') || (attempt_4[0] == word[4] && word[4] == 'I') || (attempt_4[1] == word[0] && word[0] == 'I') || (attempt_4[1] == word[2] && word[2] == 'I') || (attempt_4[1] == word[3] && word[3] == 'I') || (attempt_4[1] == word[4] && word[4] == 'I') || (attempt_4[2] == word[1] && word[1] == 'I') || (attempt_4[2] == word[0] && word[0] == 'I') || (attempt_4[2] == word[3] && word[3] == 'I') || (attempt_4[2] == word[4] && word[4] == 'I') || (attempt_4[3] == word[1] && word[1] == 'I') || (attempt_4[3] == word[0] && word[0] == 'I') || (attempt_4[3] == word[2] && word[2] == 'I') || (attempt_4[3] == word[4] && word[4] == 'I') || (attempt_4[4] == word[1] && word[1] == 'I') || (attempt_4[4] == word[0] && word[0] == 'I') || (attempt_4[4] == word[3] && word[3] == 'I') || (attempt_4[4] == word[2] && word[2] == 'I') || (attempt_5[0] == word[1] && word[1] == 'I') || (attempt_5[0] == word[2] && word[2] == 'I') || (attempt_5[0] == word[3] && word[3] == 'I') || (attempt_5[0] == word[4] && word[4] == 'I') || (attempt_5[1] == word[0] && word[0] == 'I') || (attempt_5[1] == word[2] && word[2] == 'I') || (attempt_5[1] == word[3] && word[3] == 'I') || (attempt_5[1] == word[4] && word[4] == 'I') || (attempt_5[2] == word[1] && word[1] == 'I') || (attempt_5[2] == word[0] && word[0] == 'I') || (attempt_5[2] == word[3] && word[3] == 'I') || (attempt_5[2] == word[4] && word[4] == 'I') || (attempt_5[3] == word[1] && word[1] == 'I') || (attempt_5[3] == word[0] && word[0] == 'I') || (attempt_5[3] == word[2] && word[2] == 'I') || (attempt_5[3] == word[4] && word[4] == 'I') || (attempt_5[4] == word[1] && word[1] == 'I') || (attempt_5[4] == word[0] && word[0] == 'I') || (attempt_5[4] == word[3] && word[3] == 'I') || (attempt_5[4] == word[2] && word[2] == 'I') || (attempt_6[0] == word[1] && word[1] == 'I') || (attempt_6[0] == word[2] && word[2] == 'I') || (attempt_6[0] == word[3] && word[3] == 'I') || (attempt_6[0] == word[4] && word[4] == 'I') || (attempt_6[1] == word[0] && word[0] == 'I') || (attempt_6[1] == word[2] && word[2] == 'I') || (attempt_6[1] == word[3] && word[3] == 'I') || (attempt_6[1] == word[4] && word[4] == 'I') || (attempt_6[2] == word[1] && word[1] == 'I') || (attempt_6[2] == word[0] && word[0] == 'I') || (attempt_6[2] == word[3] && word[3] == 'I') || (attempt_6[2] == word[4] && word[4] == 'I') || (attempt_6[3] == word[1] && word[1] == 'I') || (attempt_6[3] == word[0] && word[0] == 'I') || (attempt_6[3] == word[2] && word[2] == 'I') || (attempt_6[3] == word[4] && word[4] == 'I') || (attempt_6[4] == word[1] && word[1] == 'I') || (attempt_6[4] == word[0] && word[0] == 'I') || (attempt_6[4] == word[3] && word[3] == 'I') || (attempt_6[4] == word[2] && word[2] == 'I'))
    {
        cout << " ";
        c2();
        cout << " I ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'I') || (attempt_1[0] != word[2] && attempt_1[0] == 'I') || (attempt_1[0] != word[3] && attempt_1[0] == 'I') || (attempt_1[0] != word[4] && attempt_1[0] == 'I') || (attempt_1[1] != word[0] && attempt_1[1] == 'I') || (attempt_1[1] != word[2] && attempt_1[1] == 'I') || (attempt_1[1] != word[3] && attempt_1[1] == 'I') || (attempt_1[1] != word[4] && attempt_1[1] == 'I') || (attempt_1[2] != word[1] && attempt_1[2] == 'I') || (attempt_1[2] != word[0] && attempt_1[2] == 'I') || (attempt_1[2] != word[3] && attempt_1[2] == 'I') || (attempt_1[2] != word[4] && attempt_1[2] == 'I') || (attempt_1[3] != word[1] && attempt_1[3] == 'I') || (attempt_1[3] != word[2] && attempt_1[3] == 'I') || (attempt_1[3] != word[0] && attempt_1[3] == 'I') || (attempt_1[3] != word[4] && attempt_1[3] == 'I') || (attempt_1[4] != word[1] && attempt_1[4] == 'I') || (attempt_1[4] != word[2] && attempt_1[4] == 'I') || (attempt_1[4] != word[3] && attempt_1[4] == 'I') || (attempt_1[4] != word[0] && attempt_1[4] == 'I') || (attempt_2[0] != word[1] && attempt_2[0] == 'I') || (attempt_2[0] != word[2] && attempt_2[0] == 'I') || (attempt_2[0] != word[3] && attempt_2[0] == 'I') || (attempt_2[0] != word[4] && attempt_2[0] == 'I') || (attempt_2[1] != word[0] && attempt_2[1] == 'I') || (attempt_2[1] != word[2] && attempt_2[1] == 'I') || (attempt_2[1] != word[3] && attempt_2[1] == 'I') || (attempt_2[1] != word[4] && attempt_2[1] == 'I') || (attempt_2[2] != word[1] && attempt_2[2] == 'I') || (attempt_2[2] != word[0] && attempt_2[2] == 'I') || (attempt_2[2] != word[3] && attempt_2[2] == 'I') || (attempt_2[2] != word[4] && attempt_2[2] == 'I') || (attempt_2[3] != word[1] && attempt_2[3] == 'I') || (attempt_2[3] != word[2] && attempt_2[3] == 'I') || (attempt_2[3] != word[0] && attempt_2[3] == 'I') || (attempt_2[3] != word[4] && attempt_2[3] == 'I') || (attempt_2[4] != word[1] && attempt_2[4] == 'I') || (attempt_2[4] != word[2] && attempt_2[4] == 'I') || (attempt_2[4] != word[3] && attempt_2[4] == 'I') || (attempt_2[4] != word[0] && attempt_2[4] == 'I') || (attempt_3[0] != word[1] && attempt_3[0] == 'I') || (attempt_3[0] != word[2] && attempt_3[0] == 'I') || (attempt_3[0] != word[3] && attempt_3[0] == 'I') || (attempt_3[0] != word[4] && attempt_3[0] == 'I') || (attempt_3[1] != word[0] && attempt_3[1] == 'I') || (attempt_3[1] != word[2] && attempt_3[1] == 'I') || (attempt_3[1] != word[3] && attempt_3[1] == 'I') || (attempt_3[1] != word[4] && attempt_3[1] == 'I') || (attempt_3[2] != word[1] && attempt_3[2] == 'I') || (attempt_3[2] != word[0] && attempt_3[2] == 'I') || (attempt_3[2] != word[3] && attempt_3[2] == 'I') || (attempt_3[2] != word[4] && attempt_3[2] == 'I') || (attempt_3[3] != word[1] && attempt_3[3] == 'I') || (attempt_3[3] != word[2] && attempt_3[3] == 'I') || (attempt_3[3] != word[0] && attempt_3[3] == 'I') || (attempt_3[3] != word[4] && attempt_3[3] == 'I') || (attempt_3[4] != word[1] && attempt_3[4] == 'I') || (attempt_3[4] != word[2] && attempt_3[4] == 'I') || (attempt_3[4] != word[3] && attempt_3[4] == 'I') || (attempt_3[4] != word[0] && attempt_3[4] == 'I') || (attempt_4[0] != word[1] && attempt_4[0] == 'I') || (attempt_4[0] != word[2] && attempt_4[0] == 'I') || (attempt_4[0] != word[3] && attempt_4[0] == 'I') || (attempt_4[0] != word[4] && attempt_4[0] == 'I') || (attempt_4[1] != word[0] && attempt_4[1] == 'I') || (attempt_4[1] != word[2] && attempt_4[1] == 'I') || (attempt_4[1] != word[3] && attempt_4[1] == 'I') || (attempt_4[1] != word[4] && attempt_4[1] == 'I') || (attempt_4[2] != word[1] && attempt_4[2] == 'I') || (attempt_4[2] != word[0] && attempt_4[2] == 'I') || (attempt_4[2] != word[3] && attempt_4[2] == 'I') || (attempt_4[2] != word[4] && attempt_4[2] == 'I') || (attempt_4[3] != word[1] && attempt_4[3] == 'I') || (attempt_4[3] != word[2] && attempt_4[3] == 'I') || (attempt_4[3] != word[0] && attempt_4[3] == 'I') || (attempt_4[3] != word[4] && attempt_4[3] == 'I') || (attempt_4[4] != word[1] && attempt_4[4] == 'I') || (attempt_4[4] != word[2] && attempt_4[4] == 'I') || (attempt_4[4] != word[3] && attempt_4[4] == 'I') || (attempt_4[4] != word[0] && attempt_4[4] == 'I') || (attempt_5[0] != word[1] && attempt_5[0] == 'I') || (attempt_5[0] != word[2] && attempt_5[0] == 'I') || (attempt_5[0] != word[3] && attempt_5[0] == 'I') || (attempt_5[0] != word[4] && attempt_5[0] == 'I') || (attempt_5[1] != word[0] && attempt_5[1] == 'I') || (attempt_5[1] != word[2] && attempt_5[1] == 'I') || (attempt_5[1] != word[3] && attempt_5[1] == 'I') || (attempt_5[1] != word[4] && attempt_5[1] == 'I') || (attempt_5[2] != word[1] && attempt_5[2] == 'I') || (attempt_5[2] != word[0] && attempt_5[2] == 'I') || (attempt_5[2] != word[3] && attempt_5[2] == 'I') || (attempt_5[2] != word[4] && attempt_5[2] == 'I') || (attempt_5[3] != word[1] && attempt_5[3] == 'I') || (attempt_5[3] != word[2] && attempt_5[3] == 'I') || (attempt_5[3] != word[0] && attempt_5[3] == 'I') || (attempt_5[3] != word[4] && attempt_5[3] == 'I') || (attempt_5[4] != word[1] && attempt_5[4] == 'I') || (attempt_5[4] != word[2] && attempt_5[4] == 'I') || (attempt_5[4] != word[3] && attempt_5[4] == 'I') || (attempt_5[4] != word[0] && attempt_5[4] == 'I') || (attempt_6[0] != word[1] && attempt_6[0] == 'I') || (attempt_6[0] != word[2] && attempt_6[0] == 'I') || (attempt_6[0] != word[3] && attempt_6[0] == 'I') || (attempt_6[0] != word[4] && attempt_6[0] == 'I') || (attempt_6[1] != word[0] && attempt_6[1] == 'I') || (attempt_6[1] != word[2] && attempt_6[1] == 'I') || (attempt_6[1] != word[3] && attempt_6[1] == 'I') || (attempt_6[1] != word[4] && attempt_6[1] == 'I') || (attempt_6[2] != word[1] && attempt_6[2] == 'I') || (attempt_6[2] != word[0] && attempt_6[2] == 'I') || (attempt_6[2] != word[3] && attempt_6[2] == 'I') || (attempt_6[2] != word[4] && attempt_6[2] == 'I') || (attempt_6[3] != word[1] && attempt_6[3] == 'I') || (attempt_6[3] != word[2] && attempt_6[3] == 'I') || (attempt_6[3] != word[0] && attempt_6[3] == 'I') || (attempt_6[3] != word[4] && attempt_6[3] == 'I') || (attempt_6[4] != word[1] && attempt_6[4] == 'I') || (attempt_6[4] != word[2] && attempt_6[4] == 'I') || (attempt_6[4] != word[3] && attempt_6[4] == 'I') || (attempt_6[4] != word[0] && attempt_6[4] == 'I'))
    {
        cout << " ";
        c3();
        cout << " I ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " I ";
     }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'O') || (attempt_1[1] == word[1] && attempt_1[1] == 'O') || (attempt_1[2] == word[2] && attempt_1[2] == 'O') || (attempt_1[3] == word[3] && attempt_1[3] == 'O') || (attempt_1[4] == word[4] && attempt_1[4] == 'O') || (attempt_2[0] == word[0] && attempt_2[0] == 'O') || (attempt_2[1] == word[1] && attempt_2[1] == 'O') || (attempt_2[2] == word[2] && attempt_2[2] == 'O') || (attempt_2[3] == word[3] && attempt_2[3] == 'O') || (attempt_2[4] == word[4] && attempt_2[4] == 'O') || (attempt_3[0] == word[0] && attempt_3[0] == 'O') || (attempt_3[1] == word[1] && attempt_3[1] == 'O') || (attempt_3[2] == word[2] && attempt_3[2] == 'O') || (attempt_3[3] == word[3] && attempt_3[3] == 'O') || (attempt_3[4] == word[4] && attempt_3[4] == 'O') || (attempt_4[0] == word[0] && attempt_4[0] == 'O') || (attempt_4[1] == word[1] && attempt_4[1] == 'O') || (attempt_4[2] == word[2] && attempt_4[2] == 'O') || (attempt_4[3] == word[3] && attempt_4[3] == 'O') || (attempt_4[4] == word[4] && attempt_4[4] == 'O') || (attempt_5[0] == word[0] && attempt_5[0] == 'O') || (attempt_5[1] == word[1] && attempt_5[1] == 'O') || (attempt_5[2] == word[2] && attempt_5[2] == 'O') || (attempt_5[3] == word[3] && attempt_5[3] == 'O') || (attempt_5[4] == word[4] && attempt_5[4] == 'O') || (attempt_6[0] == word[0] && attempt_6[0] == 'O') || (attempt_6[1] == word[1] && attempt_6[1] == 'O') || (attempt_6[2] == word[2] && attempt_6[2] == 'O') || (attempt_6[3] == word[3] && attempt_6[3] == 'O') || (attempt_6[4] == word[4] && attempt_6[4] == 'O'))
    {
        cout << " ";
        c1();
        cout << " O ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'O') || (attempt_1[0] == word[2] && word[2] == 'O') || (attempt_1[0] == word[3] && word[3] == 'O') || (attempt_1[0] == word[4] && word[4] == 'O') || (attempt_1[1] == word[0] && word[0] == 'O') || (attempt_1[1] == word[2] && word[2] == 'O') || (attempt_1[1] == word[3] && word[3] == 'O') || (attempt_1[1] == word[4] && word[4] == 'O') || (attempt_1[2] == word[1] && word[1] == 'O') || (attempt_1[2] == word[0] && word[0] == 'O') || (attempt_1[2] == word[3] && word[3] == 'O') || (attempt_1[2] == word[4] && word[4] == 'O') || (attempt_1[3] == word[1] && word[1] == 'O') || (attempt_1[3] == word[0] && word[0] == 'O') || (attempt_1[3] == word[2] && word[2] == 'O') || (attempt_1[3] == word[4] && word[4] == 'O') || (attempt_1[4] == word[1] && word[1] == 'O') || (attempt_1[4] == word[0] && word[0] == 'O') || (attempt_1[4] == word[3] && word[3] == 'O') || (attempt_1[4] == word[2] && word[2] == 'O') || (attempt_2[0] == word[1] && word[1] == 'O') || (attempt_2[0] == word[2] && word[2] == 'O') || (attempt_2[0] == word[3] && word[3] == 'O') || (attempt_2[0] == word[4] && word[4] == 'O') || (attempt_2[1] == word[0] && word[0] == 'O') || (attempt_2[1] == word[2] && word[2] == 'O') || (attempt_2[1] == word[3] && word[3] == 'O') || (attempt_2[1] == word[4] && word[4] == 'O') || (attempt_2[2] == word[1] && word[1] == 'O') || (attempt_2[2] == word[0] && word[0] == 'O') || (attempt_2[2] == word[3] && word[3] == 'O') || (attempt_2[2] == word[4] && word[4] == 'O') || (attempt_2[3] == word[1] && word[1] == 'O') || (attempt_2[3] == word[0] && word[0] == 'O') || (attempt_2[3] == word[2] && word[2] == 'O') || (attempt_2[3] == word[4] && word[4] == 'O') || (attempt_2[4] == word[1] && word[1] == 'O') || (attempt_2[4] == word[0] && word[0] == 'O') || (attempt_2[4] == word[3] && word[3] == 'O') || (attempt_2[4] == word[2] && word[2] == 'O') || (attempt_3[0] == word[1] && word[1] == 'O') || (attempt_3[0] == word[2] && word[2] == 'O') || (attempt_3[0] == word[3] && word[3] == 'O') || (attempt_3[0] == word[4] && word[4] == 'O') || (attempt_3[1] == word[0] && word[0] == 'O') || (attempt_3[1] == word[2] && word[2] == 'O') || (attempt_3[1] == word[3] && word[3] == 'O') || (attempt_3[1] == word[4] && word[4] == 'O') || (attempt_3[2] == word[1] && word[1] == 'O') || (attempt_3[2] == word[0] && word[0] == 'O') || (attempt_3[2] == word[3] && word[3] == 'O') || (attempt_3[2] == word[4] && word[4] == 'O') || (attempt_3[3] == word[1] && word[1] == 'O') || (attempt_3[3] == word[0] && word[0] == 'O') || (attempt_3[3] == word[2] && word[2] == 'O') || (attempt_3[3] == word[4] && word[4] == 'O') || (attempt_3[4] == word[1] && word[1] == 'O') || (attempt_3[4] == word[0] && word[0] == 'O') || (attempt_3[4] == word[3] && word[3] == 'O') || (attempt_3[4] == word[2] && word[2] == 'O') || (attempt_4[0] == word[1] && word[1] == 'O') || (attempt_4[0] == word[2] && word[2] == 'O') || (attempt_4[0] == word[3] && word[3] == 'O') || (attempt_4[0] == word[4] && word[4] == 'O') || (attempt_4[1] == word[0] && word[0] == 'O') || (attempt_4[1] == word[2] && word[2] == 'O') || (attempt_4[1] == word[3] && word[3] == 'O') || (attempt_4[1] == word[4] && word[4] == 'O') || (attempt_4[2] == word[1] && word[1] == 'O') || (attempt_4[2] == word[0] && word[0] == 'O') || (attempt_4[2] == word[3] && word[3] == 'O') || (attempt_4[2] == word[4] && word[4] == 'O') || (attempt_4[3] == word[1] && word[1] == 'O') || (attempt_4[3] == word[0] && word[0] == 'O') || (attempt_4[3] == word[2] && word[2] == 'O') || (attempt_4[3] == word[4] && word[4] == 'O') || (attempt_4[4] == word[1] && word[1] == 'O') || (attempt_4[4] == word[0] && word[0] == 'O') || (attempt_4[4] == word[3] && word[3] == 'O') || (attempt_4[4] == word[2] && word[2] == 'O') || (attempt_5[0] == word[1] && word[1] == 'O') || (attempt_5[0] == word[2] && word[2] == 'O') || (attempt_5[0] == word[3] && word[3] == 'O') || (attempt_5[0] == word[4] && word[4] == 'O') || (attempt_5[1] == word[0] && word[0] == 'O') || (attempt_5[1] == word[2] && word[2] == 'O') || (attempt_5[1] == word[3] && word[3] == 'O') || (attempt_5[1] == word[4] && word[4] == 'O') || (attempt_5[2] == word[1] && word[1] == 'O') || (attempt_5[2] == word[0] && word[0] == 'O') || (attempt_5[2] == word[3] && word[3] == 'O') || (attempt_5[2] == word[4] && word[4] == 'O') || (attempt_5[3] == word[1] && word[1] == 'O') || (attempt_5[3] == word[0] && word[0] == 'O') || (attempt_5[3] == word[2] && word[2] == 'O') || (attempt_5[3] == word[4] && word[4] == 'O') || (attempt_5[4] == word[1] && word[1] == 'O') || (attempt_5[4] == word[0] && word[0] == 'O') || (attempt_5[4] == word[3] && word[3] == 'O') || (attempt_5[4] == word[2] && word[2] == 'O') || (attempt_6[0] == word[1] && word[1] == 'O') || (attempt_6[0] == word[2] && word[2] == 'O') || (attempt_6[0] == word[3] && word[3] == 'O') || (attempt_6[0] == word[4] && word[4] == 'O') || (attempt_6[1] == word[0] && word[0] == 'O') || (attempt_6[1] == word[2] && word[2] == 'O') || (attempt_6[1] == word[3] && word[3] == 'O') || (attempt_6[1] == word[4] && word[4] == 'O') || (attempt_6[2] == word[1] && word[1] == 'O') || (attempt_6[2] == word[0] && word[0] == 'O') || (attempt_6[2] == word[3] && word[3] == 'O') || (attempt_6[2] == word[4] && word[4] == 'O') || (attempt_6[3] == word[1] && word[1] == 'O') || (attempt_6[3] == word[0] && word[0] == 'O') || (attempt_6[3] == word[2] && word[2] == 'O') || (attempt_6[3] == word[4] && word[4] == 'O') || (attempt_6[4] == word[1] && word[1] == 'O') || (attempt_6[4] == word[0] && word[0] == 'O') || (attempt_6[4] == word[3] && word[3] == 'O') || (attempt_6[4] == word[2] && word[2] == 'O'))
    {
        cout << " ";
        c2();
        cout << " O ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'O') || (attempt_1[0] != word[2] && attempt_1[0] == 'O') || (attempt_1[0] != word[3] && attempt_1[0] == 'O') || (attempt_1[0] != word[4] && attempt_1[0] == 'O') || (attempt_1[1] != word[0] && attempt_1[1] == 'O') || (attempt_1[1] != word[2] && attempt_1[1] == 'O') || (attempt_1[1] != word[3] && attempt_1[1] == 'O') || (attempt_1[1] != word[4] && attempt_1[1] == 'O') || (attempt_1[2] != word[1] && attempt_1[2] == 'O') || (attempt_1[2] != word[0] && attempt_1[2] == 'O') || (attempt_1[2] != word[3] && attempt_1[2] == 'O') || (attempt_1[2] != word[4] && attempt_1[2] == 'O') || (attempt_1[3] != word[1] && attempt_1[3] == 'O') || (attempt_1[3] != word[2] && attempt_1[3] == 'O') || (attempt_1[3] != word[0] && attempt_1[3] == 'O') || (attempt_1[3] != word[4] && attempt_1[3] == 'O') || (attempt_1[4] != word[1] && attempt_1[4] == 'O') || (attempt_1[4] != word[2] && attempt_1[4] == 'O') || (attempt_1[4] != word[3] && attempt_1[4] == 'O') || (attempt_1[4] != word[0] && attempt_1[4] == 'O') || (attempt_2[0] != word[1] && attempt_2[0] == 'O') || (attempt_2[0] != word[2] && attempt_2[0] == 'O') || (attempt_2[0] != word[3] && attempt_2[0] == 'O') || (attempt_2[0] != word[4] && attempt_2[0] == 'O') || (attempt_2[1] != word[0] && attempt_2[1] == 'O') || (attempt_2[1] != word[2] && attempt_2[1] == 'O') || (attempt_2[1] != word[3] && attempt_2[1] == 'O') || (attempt_2[1] != word[4] && attempt_2[1] == 'O') || (attempt_2[2] != word[1] && attempt_2[2] == 'O') || (attempt_2[2] != word[0] && attempt_2[2] == 'O') || (attempt_2[2] != word[3] && attempt_2[2] == 'O') || (attempt_2[2] != word[4] && attempt_2[2] == 'O') || (attempt_2[3] != word[1] && attempt_2[3] == 'O') || (attempt_2[3] != word[2] && attempt_2[3] == 'O') || (attempt_2[3] != word[0] && attempt_2[3] == 'O') || (attempt_2[3] != word[4] && attempt_2[3] == 'O') || (attempt_2[4] != word[1] && attempt_2[4] == 'O') || (attempt_2[4] != word[2] && attempt_2[4] == 'O') || (attempt_2[4] != word[3] && attempt_2[4] == 'O') || (attempt_2[4] != word[0] && attempt_2[4] == 'O') || (attempt_3[0] != word[1] && attempt_3[0] == 'O') || (attempt_3[0] != word[2] && attempt_3[0] == 'O') || (attempt_3[0] != word[3] && attempt_3[0] == 'O') || (attempt_3[0] != word[4] && attempt_3[0] == 'O') || (attempt_3[1] != word[0] && attempt_3[1] == 'O') || (attempt_3[1] != word[2] && attempt_3[1] == 'O') || (attempt_3[1] != word[3] && attempt_3[1] == 'O') || (attempt_3[1] != word[4] && attempt_3[1] == 'O') || (attempt_3[2] != word[1] && attempt_3[2] == 'O') || (attempt_3[2] != word[0] && attempt_3[2] == 'O') || (attempt_3[2] != word[3] && attempt_3[2] == 'O') || (attempt_3[2] != word[4] && attempt_3[2] == 'O') || (attempt_3[3] != word[1] && attempt_3[3] == 'O') || (attempt_3[3] != word[2] && attempt_3[3] == 'O') || (attempt_3[3] != word[0] && attempt_3[3] == 'O') || (attempt_3[3] != word[4] && attempt_3[3] == 'O') || (attempt_3[4] != word[1] && attempt_3[4] == 'O') || (attempt_3[4] != word[2] && attempt_3[4] == 'O') || (attempt_3[4] != word[3] && attempt_3[4] == 'O') || (attempt_3[4] != word[0] && attempt_3[4] == 'O') || (attempt_4[0] != word[1] && attempt_4[0] == 'O') || (attempt_4[0] != word[2] && attempt_4[0] == 'O') || (attempt_4[0] != word[3] && attempt_4[0] == 'O') || (attempt_4[0] != word[4] && attempt_4[0] == 'O') || (attempt_4[1] != word[0] && attempt_4[1] == 'O') || (attempt_4[1] != word[2] && attempt_4[1] == 'O') || (attempt_4[1] != word[3] && attempt_4[1] == 'O') || (attempt_4[1] != word[4] && attempt_4[1] == 'O') || (attempt_4[2] != word[1] && attempt_4[2] == 'O') || (attempt_4[2] != word[0] && attempt_4[2] == 'O') || (attempt_4[2] != word[3] && attempt_4[2] == 'O') || (attempt_4[2] != word[4] && attempt_4[2] == 'O') || (attempt_4[3] != word[1] && attempt_4[3] == 'O') || (attempt_4[3] != word[2] && attempt_4[3] == 'O') || (attempt_4[3] != word[0] && attempt_4[3] == 'O') || (attempt_4[3] != word[4] && attempt_4[3] == 'O') || (attempt_4[4] != word[1] && attempt_4[4] == 'O') || (attempt_4[4] != word[2] && attempt_4[4] == 'O') || (attempt_4[4] != word[3] && attempt_4[4] == 'O') || (attempt_4[4] != word[0] && attempt_4[4] == 'O') || (attempt_5[0] != word[1] && attempt_5[0] == 'O') || (attempt_5[0] != word[2] && attempt_5[0] == 'O') || (attempt_5[0] != word[3] && attempt_5[0] == 'O') || (attempt_5[0] != word[4] && attempt_5[0] == 'O') || (attempt_5[1] != word[0] && attempt_5[1] == 'O') || (attempt_5[1] != word[2] && attempt_5[1] == 'O') || (attempt_5[1] != word[3] && attempt_5[1] == 'O') || (attempt_5[1] != word[4] && attempt_5[1] == 'O') || (attempt_5[2] != word[1] && attempt_5[2] == 'O') || (attempt_5[2] != word[0] && attempt_5[2] == 'O') || (attempt_5[2] != word[3] && attempt_5[2] == 'O') || (attempt_5[2] != word[4] && attempt_5[2] == 'O') || (attempt_5[3] != word[1] && attempt_5[3] == 'O') || (attempt_5[3] != word[2] && attempt_5[3] == 'O') || (attempt_5[3] != word[0] && attempt_5[3] == 'O') || (attempt_5[3] != word[4] && attempt_5[3] == 'O') || (attempt_5[4] != word[1] && attempt_5[4] == 'O') || (attempt_5[4] != word[2] && attempt_5[4] == 'O') || (attempt_5[4] != word[3] && attempt_5[4] == 'O') || (attempt_5[4] != word[0] && attempt_5[4] == 'O') || (attempt_6[0] != word[1] && attempt_6[0] == 'O') || (attempt_6[0] != word[2] && attempt_6[0] == 'O') || (attempt_6[0] != word[3] && attempt_6[0] == 'O') || (attempt_6[0] != word[4] && attempt_6[0] == 'O') || (attempt_6[1] != word[0] && attempt_6[1] == 'O') || (attempt_6[1] != word[2] && attempt_6[1] == 'O') || (attempt_6[1] != word[3] && attempt_6[1] == 'O') || (attempt_6[1] != word[4] && attempt_6[1] == 'O') || (attempt_6[2] != word[1] && attempt_6[2] == 'O') || (attempt_6[2] != word[0] && attempt_6[2] == 'O') || (attempt_6[2] != word[3] && attempt_6[2] == 'O') || (attempt_6[2] != word[4] && attempt_6[2] == 'O') || (attempt_6[3] != word[1] && attempt_6[3] == 'O') || (attempt_6[3] != word[2] && attempt_6[3] == 'O') || (attempt_6[3] != word[0] && attempt_6[3] == 'O') || (attempt_6[3] != word[4] && attempt_6[3] == 'O') || (attempt_6[4] != word[1] && attempt_6[4] == 'O') || (attempt_6[4] != word[2] && attempt_6[4] == 'O') || (attempt_6[4] != word[3] && attempt_6[4] == 'O') || (attempt_6[4] != word[0] && attempt_6[4] == 'O'))
    {
        cout << " ";
        c3();
        cout << " O ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " O ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'P') || (attempt_1[1] == word[1] && attempt_1[1] == 'P') || (attempt_1[2] == word[2] && attempt_1[2] == 'P') || (attempt_1[3] == word[3] && attempt_1[3] == 'P') || (attempt_1[4] == word[4] && attempt_1[4] == 'P') || (attempt_2[0] == word[0] && attempt_2[0] == 'P') || (attempt_2[1] == word[1] && attempt_2[1] == 'P') || (attempt_2[2] == word[2] && attempt_2[2] == 'P') || (attempt_2[3] == word[3] && attempt_2[3] == 'P') || (attempt_2[4] == word[4] && attempt_2[4] == 'P') || (attempt_3[0] == word[0] && attempt_3[0] == 'P') || (attempt_3[1] == word[1] && attempt_3[1] == 'P') || (attempt_3[2] == word[2] && attempt_3[2] == 'P') || (attempt_3[3] == word[3] && attempt_3[3] == 'P') || (attempt_3[4] == word[4] && attempt_3[4] == 'P') || (attempt_4[0] == word[0] && attempt_4[0] == 'P') || (attempt_4[1] == word[1] && attempt_4[1] == 'P') || (attempt_4[2] == word[2] && attempt_4[2] == 'P') || (attempt_4[3] == word[3] && attempt_4[3] == 'P') || (attempt_4[4] == word[4] && attempt_4[4] == 'P') || (attempt_5[0] == word[0] && attempt_5[0] == 'P') || (attempt_5[1] == word[1] && attempt_5[1] == 'P') || (attempt_5[2] == word[2] && attempt_5[2] == 'P') || (attempt_5[3] == word[3] && attempt_5[3] == 'P') || (attempt_5[4] == word[4] && attempt_5[4] == 'P') || (attempt_6[0] == word[0] && attempt_6[0] == 'P') || (attempt_6[1] == word[1] && attempt_6[1] == 'P') || (attempt_6[2] == word[2] && attempt_6[2] == 'P') || (attempt_6[3] == word[3] && attempt_6[3] == 'P') || (attempt_6[4] == word[4] && attempt_6[4] == 'P'))
    {
        cout << " ";
        c1();
        cout << " P ";
        cout << RESET;
        cout << " ";
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'P') || (attempt_1[0] == word[2] && word[2] == 'P') || (attempt_1[0] == word[3] && word[3] == 'P') || (attempt_1[0] == word[4] && word[4] == 'P') || (attempt_1[1] == word[0] && word[0] == 'P') || (attempt_1[1] == word[2] && word[2] == 'P') || (attempt_1[1] == word[3] && word[3] == 'P') || (attempt_1[1] == word[4] && word[4] == 'P') || (attempt_1[2] == word[1] && word[1] == 'P') || (attempt_1[2] == word[0] && word[0] == 'P') || (attempt_1[2] == word[3] && word[3] == 'P') || (attempt_1[2] == word[4] && word[4] == 'P') || (attempt_1[3] == word[1] && word[1] == 'P') || (attempt_1[3] == word[0] && word[0] == 'P') || (attempt_1[3] == word[2] && word[2] == 'P') || (attempt_1[3] == word[4] && word[4] == 'P') || (attempt_1[4] == word[1] && word[1] == 'P') || (attempt_1[4] == word[0] && word[0] == 'P') || (attempt_1[4] == word[3] && word[3] == 'P') || (attempt_1[4] == word[2] && word[2] == 'P') || (attempt_2[0] == word[1] && word[1] == 'P') || (attempt_2[0] == word[2] && word[2] == 'P') || (attempt_2[0] == word[3] && word[3] == 'P') || (attempt_2[0] == word[4] && word[4] == 'P') || (attempt_2[1] == word[0] && word[0] == 'P') || (attempt_2[1] == word[2] && word[2] == 'P') || (attempt_2[1] == word[3] && word[3] == 'P') || (attempt_2[1] == word[4] && word[4] == 'P') || (attempt_2[2] == word[1] && word[1] == 'P') || (attempt_2[2] == word[0] && word[0] == 'P') || (attempt_2[2] == word[3] && word[3] == 'P') || (attempt_2[2] == word[4] && word[4] == 'P') || (attempt_2[3] == word[1] && word[1] == 'P') || (attempt_2[3] == word[0] && word[0] == 'P') || (attempt_2[3] == word[2] && word[2] == 'P') || (attempt_2[3] == word[4] && word[4] == 'P') || (attempt_2[4] == word[1] && word[1] == 'P') || (attempt_2[4] == word[0] && word[0] == 'P') || (attempt_2[4] == word[3] && word[3] == 'P') || (attempt_2[4] == word[2] && word[2] == 'P') || (attempt_3[0] == word[1] && word[1] == 'P') || (attempt_3[0] == word[2] && word[2] == 'P') || (attempt_3[0] == word[3] && word[3] == 'P') || (attempt_3[0] == word[4] && word[4] == 'P') || (attempt_3[1] == word[0] && word[0] == 'P') || (attempt_3[1] == word[2] && word[2] == 'P') || (attempt_3[1] == word[3] && word[3] == 'P') || (attempt_3[1] == word[4] && word[4] == 'P') || (attempt_3[2] == word[1] && word[1] == 'P') || (attempt_3[2] == word[0] && word[0] == 'P') || (attempt_3[2] == word[3] && word[3] == 'P') || (attempt_3[2] == word[4] && word[4] == 'P') || (attempt_3[3] == word[1] && word[1] == 'P') || (attempt_3[3] == word[0] && word[0] == 'P') || (attempt_3[3] == word[2] && word[2] == 'P') || (attempt_3[3] == word[4] && word[4] == 'P') || (attempt_3[4] == word[1] && word[1] == 'P') || (attempt_3[4] == word[0] && word[0] == 'P') || (attempt_3[4] == word[3] && word[3] == 'P') || (attempt_3[4] == word[2] && word[2] == 'P') || (attempt_4[0] == word[1] && word[1] == 'P') || (attempt_4[0] == word[2] && word[2] == 'P') || (attempt_4[0] == word[3] && word[3] == 'P') || (attempt_4[0] == word[4] && word[4] == 'P') || (attempt_4[1] == word[0] && word[0] == 'P') || (attempt_4[1] == word[2] && word[2] == 'P') || (attempt_4[1] == word[3] && word[3] == 'P') || (attempt_4[1] == word[4] && word[4] == 'P') || (attempt_4[2] == word[1] && word[1] == 'P') || (attempt_4[2] == word[0] && word[0] == 'P') || (attempt_4[2] == word[3] && word[3] == 'P') || (attempt_4[2] == word[4] && word[4] == 'P') || (attempt_4[3] == word[1] && word[1] == 'P') || (attempt_4[3] == word[0] && word[0] == 'P') || (attempt_4[3] == word[2] && word[2] == 'P') || (attempt_4[3] == word[4] && word[4] == 'P') || (attempt_4[4] == word[1] && word[1] == 'P') || (attempt_4[4] == word[0] && word[0] == 'P') || (attempt_4[4] == word[3] && word[3] == 'P') || (attempt_4[4] == word[2] && word[2] == 'P') || (attempt_5[0] == word[1] && word[1] == 'P') || (attempt_5[0] == word[2] && word[2] == 'P') || (attempt_5[0] == word[3] && word[3] == 'P') || (attempt_5[0] == word[4] && word[4] == 'P') || (attempt_5[1] == word[0] && word[0] == 'P') || (attempt_5[1] == word[2] && word[2] == 'P') || (attempt_5[1] == word[3] && word[3] == 'P') || (attempt_5[1] == word[4] && word[4] == 'P') || (attempt_5[2] == word[1] && word[1] == 'P') || (attempt_5[2] == word[0] && word[0] == 'P') || (attempt_5[2] == word[3] && word[3] == 'P') || (attempt_5[2] == word[4] && word[4] == 'P') || (attempt_5[3] == word[1] && word[1] == 'P') || (attempt_5[3] == word[0] && word[0] == 'P') || (attempt_5[3] == word[2] && word[2] == 'P') || (attempt_5[3] == word[4] && word[4] == 'P') || (attempt_5[4] == word[1] && word[1] == 'P') || (attempt_5[4] == word[0] && word[0] == 'P') || (attempt_5[4] == word[3] && word[3] == 'P') || (attempt_5[4] == word[2] && word[2] == 'P') || (attempt_6[0] == word[1] && word[1] == 'P') || (attempt_6[0] == word[2] && word[2] == 'P') || (attempt_6[0] == word[3] && word[3] == 'P') || (attempt_6[0] == word[4] && word[4] == 'P') || (attempt_6[1] == word[0] && word[0] == 'P') || (attempt_6[1] == word[2] && word[2] == 'P') || (attempt_6[1] == word[3] && word[3] == 'P') || (attempt_6[1] == word[4] && word[4] == 'P') || (attempt_6[2] == word[1] && word[1] == 'P') || (attempt_6[2] == word[0] && word[0] == 'P') || (attempt_6[2] == word[3] && word[3] == 'P') || (attempt_6[2] == word[4] && word[4] == 'P') || (attempt_6[3] == word[1] && word[1] == 'P') || (attempt_6[3] == word[0] && word[0] == 'P') || (attempt_6[3] == word[2] && word[2] == 'P') || (attempt_6[3] == word[4] && word[4] == 'P') || (attempt_6[4] == word[1] && word[1] == 'P') || (attempt_6[4] == word[0] && word[0] == 'P') || (attempt_6[4] == word[3] && word[3] == 'P') || (attempt_6[4] == word[2] && word[2] == 'P'))
    {
        cout << " ";
        c2();
        cout << " P ";
        cout << RESET;
        cout << " ";
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'P') || (attempt_1[0] != word[2] && attempt_1[0] == 'P') || (attempt_1[0] != word[3] && attempt_1[0] == 'P') || (attempt_1[0] != word[4] && attempt_1[0] == 'P') || (attempt_1[1] != word[0] && attempt_1[1] == 'P') || (attempt_1[1] != word[2] && attempt_1[1] == 'P') || (attempt_1[1] != word[3] && attempt_1[1] == 'P') || (attempt_1[1] != word[4] && attempt_1[1] == 'P') || (attempt_1[2] != word[1] && attempt_1[2] == 'P') || (attempt_1[2] != word[0] && attempt_1[2] == 'P') || (attempt_1[2] != word[3] && attempt_1[2] == 'P') || (attempt_1[2] != word[4] && attempt_1[2] == 'P') || (attempt_1[3] != word[1] && attempt_1[3] == 'P') || (attempt_1[3] != word[2] && attempt_1[3] == 'P') || (attempt_1[3] != word[0] && attempt_1[3] == 'P') || (attempt_1[3] != word[4] && attempt_1[3] == 'P') || (attempt_1[4] != word[1] && attempt_1[4] == 'P') || (attempt_1[4] != word[2] && attempt_1[4] == 'P') || (attempt_1[4] != word[3] && attempt_1[4] == 'P') || (attempt_1[4] != word[0] && attempt_1[4] == 'P') || (attempt_2[0] != word[1] && attempt_2[0] == 'P') || (attempt_2[0] != word[2] && attempt_2[0] == 'P') || (attempt_2[0] != word[3] && attempt_2[0] == 'P') || (attempt_2[0] != word[4] && attempt_2[0] == 'P') || (attempt_2[1] != word[0] && attempt_2[1] == 'P') || (attempt_2[1] != word[2] && attempt_2[1] == 'P') || (attempt_2[1] != word[3] && attempt_2[1] == 'P') || (attempt_2[1] != word[4] && attempt_2[1] == 'P') || (attempt_2[2] != word[1] && attempt_2[2] == 'P') || (attempt_2[2] != word[0] && attempt_2[2] == 'P') || (attempt_2[2] != word[3] && attempt_2[2] == 'P') || (attempt_2[2] != word[4] && attempt_2[2] == 'P') || (attempt_2[3] != word[1] && attempt_2[3] == 'P') || (attempt_2[3] != word[2] && attempt_2[3] == 'P') || (attempt_2[3] != word[0] && attempt_2[3] == 'P') || (attempt_2[3] != word[4] && attempt_2[3] == 'P') || (attempt_2[4] != word[1] && attempt_2[4] == 'P') || (attempt_2[4] != word[2] && attempt_2[4] == 'P') || (attempt_2[4] != word[3] && attempt_2[4] == 'P') || (attempt_2[4] != word[0] && attempt_2[4] == 'P') || (attempt_3[0] != word[1] && attempt_3[0] == 'P') || (attempt_3[0] != word[2] && attempt_3[0] == 'P') || (attempt_3[0] != word[3] && attempt_3[0] == 'P') || (attempt_3[0] != word[4] && attempt_3[0] == 'P') || (attempt_3[1] != word[0] && attempt_3[1] == 'P') || (attempt_3[1] != word[2] && attempt_3[1] == 'P') || (attempt_3[1] != word[3] && attempt_3[1] == 'P') || (attempt_3[1] != word[4] && attempt_3[1] == 'P') || (attempt_3[2] != word[1] && attempt_3[2] == 'P') || (attempt_3[2] != word[0] && attempt_3[2] == 'P') || (attempt_3[2] != word[3] && attempt_3[2] == 'P') || (attempt_3[2] != word[4] && attempt_3[2] == 'P') || (attempt_3[3] != word[1] && attempt_3[3] == 'P') || (attempt_3[3] != word[2] && attempt_3[3] == 'P') || (attempt_3[3] != word[0] && attempt_3[3] == 'P') || (attempt_3[3] != word[4] && attempt_3[3] == 'P') || (attempt_3[4] != word[1] && attempt_3[4] == 'P') || (attempt_3[4] != word[2] && attempt_3[4] == 'P') || (attempt_3[4] != word[3] && attempt_3[4] == 'P') || (attempt_3[4] != word[0] && attempt_3[4] == 'P') || (attempt_4[0] != word[1] && attempt_4[0] == 'P') || (attempt_4[0] != word[2] && attempt_4[0] == 'P') || (attempt_4[0] != word[3] && attempt_4[0] == 'P') || (attempt_4[0] != word[4] && attempt_4[0] == 'P') || (attempt_4[1] != word[0] && attempt_4[1] == 'P') || (attempt_4[1] != word[2] && attempt_4[1] == 'P') || (attempt_4[1] != word[3] && attempt_4[1] == 'P') || (attempt_4[1] != word[4] && attempt_4[1] == 'P') || (attempt_4[2] != word[1] && attempt_4[2] == 'P') || (attempt_4[2] != word[0] && attempt_4[2] == 'P') || (attempt_4[2] != word[3] && attempt_4[2] == 'P') || (attempt_4[2] != word[4] && attempt_4[2] == 'P') || (attempt_4[3] != word[1] && attempt_4[3] == 'P') || (attempt_4[3] != word[2] && attempt_4[3] == 'P') || (attempt_4[3] != word[0] && attempt_4[3] == 'P') || (attempt_4[3] != word[4] && attempt_4[3] == 'P') || (attempt_4[4] != word[1] && attempt_4[4] == 'P') || (attempt_4[4] != word[2] && attempt_4[4] == 'P') || (attempt_4[4] != word[3] && attempt_4[4] == 'P') || (attempt_4[4] != word[0] && attempt_4[4] == 'P') || (attempt_5[0] != word[1] && attempt_5[0] == 'P') || (attempt_5[0] != word[2] && attempt_5[0] == 'P') || (attempt_5[0] != word[3] && attempt_5[0] == 'P') || (attempt_5[0] != word[4] && attempt_5[0] == 'P') || (attempt_5[1] != word[0] && attempt_5[1] == 'P') || (attempt_5[1] != word[2] && attempt_5[1] == 'P') || (attempt_5[1] != word[3] && attempt_5[1] == 'P') || (attempt_5[1] != word[4] && attempt_5[1] == 'P') || (attempt_5[2] != word[1] && attempt_5[2] == 'P') || (attempt_5[2] != word[0] && attempt_5[2] == 'P') || (attempt_5[2] != word[3] && attempt_5[2] == 'P') || (attempt_5[2] != word[4] && attempt_5[2] == 'P') || (attempt_5[3] != word[1] && attempt_5[3] == 'P') || (attempt_5[3] != word[2] && attempt_5[3] == 'P') || (attempt_5[3] != word[0] && attempt_5[3] == 'P') || (attempt_5[3] != word[4] && attempt_5[3] == 'P') || (attempt_5[4] != word[1] && attempt_5[4] == 'P') || (attempt_5[4] != word[2] && attempt_5[4] == 'P') || (attempt_5[4] != word[3] && attempt_5[4] == 'P') || (attempt_5[4] != word[0] && attempt_5[4] == 'P') || (attempt_6[0] != word[1] && attempt_6[0] == 'P') || (attempt_6[0] != word[2] && attempt_6[0] == 'P') || (attempt_6[0] != word[3] && attempt_6[0] == 'P') || (attempt_6[0] != word[4] && attempt_6[0] == 'P') || (attempt_6[1] != word[0] && attempt_6[1] == 'P') || (attempt_6[1] != word[2] && attempt_6[1] == 'P') || (attempt_6[1] != word[3] && attempt_6[1] == 'P') || (attempt_6[1] != word[4] && attempt_6[1] == 'P') || (attempt_6[2] != word[1] && attempt_6[2] == 'P') || (attempt_6[2] != word[0] && attempt_6[2] == 'P') || (attempt_6[2] != word[3] && attempt_6[2] == 'P') || (attempt_6[2] != word[4] && attempt_6[2] == 'P') || (attempt_6[3] != word[1] && attempt_6[3] == 'P') || (attempt_6[3] != word[2] && attempt_6[3] == 'P') || (attempt_6[3] != word[0] && attempt_6[3] == 'P') || (attempt_6[3] != word[4] && attempt_6[3] == 'P') || (attempt_6[4] != word[1] && attempt_6[4] == 'P') || (attempt_6[4] != word[2] && attempt_6[4] == 'P') || (attempt_6[4] != word[3] && attempt_6[4] == 'P') || (attempt_6[4] != word[0] && attempt_6[4] == 'P'))
    {
        cout << " ";
        c3();
        cout << " P ";
        cout << RESET;
        cout << " ";
    }
    else
    {
        cout << " ";
        cout << " P ";
        cout << " ";
    }
    cout << endl << endl;
    cout << "                                      ";
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'A') || (attempt_1[1] == word[1] && attempt_1[1] == 'A') || (attempt_1[2] == word[2] && attempt_1[2] == 'A') || (attempt_1[3] == word[3] && attempt_1[3] == 'A') || (attempt_1[4] == word[4] && attempt_1[4] == 'A') || (attempt_2[0] == word[0] && attempt_2[0] == 'A') || (attempt_2[1] == word[1] && attempt_2[1] == 'A') || (attempt_2[2] == word[2] && attempt_2[2] == 'A') || (attempt_2[3] == word[3] && attempt_2[3] == 'A') || (attempt_2[4] == word[4] && attempt_2[4] == 'A') || (attempt_3[0] == word[0] && attempt_3[0] == 'A') || (attempt_3[1] == word[1] && attempt_3[1] == 'A') || (attempt_3[2] == word[2] && attempt_3[2] == 'A') || (attempt_3[3] == word[3] && attempt_3[3] == 'A') || (attempt_3[4] == word[4] && attempt_3[4] == 'A') || (attempt_4[0] == word[0] && attempt_4[0] == 'A') || (attempt_4[1] == word[1] && attempt_4[1] == 'A') || (attempt_4[2] == word[2] && attempt_4[2] == 'A') || (attempt_4[3] == word[3] && attempt_4[3] == 'A') || (attempt_4[4] == word[4] && attempt_4[4] == 'A') || (attempt_5[0] == word[0] && attempt_5[0] == 'A') || (attempt_5[1] == word[1] && attempt_5[1] == 'A') || (attempt_5[2] == word[2] && attempt_5[2] == 'A') || (attempt_5[3] == word[3] && attempt_5[3] == 'A') || (attempt_5[4] == word[4] && attempt_5[4] == 'A') || (attempt_6[0] == word[0] && attempt_6[0] == 'A') || (attempt_6[1] == word[1] && attempt_6[1] == 'A') || (attempt_6[2] == word[2] && attempt_6[2] == 'A') || (attempt_6[3] == word[3] && attempt_6[3] == 'A') || (attempt_6[4] == word[4] && attempt_6[4] == 'A'))
    {
        cout << " ";
        c1();
        cout << " A ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'A') || (attempt_1[0] == word[2] && word[2] == 'A') || (attempt_1[0] == word[3] && word[3] == 'A') || (attempt_1[0] == word[4] && word[4] == 'A') || (attempt_1[1] == word[0] && word[0] == 'A') || (attempt_1[1] == word[2] && word[2] == 'A') || (attempt_1[1] == word[3] && word[3] == 'A') || (attempt_1[1] == word[4] && word[4] == 'A') || (attempt_1[2] == word[1] && word[1] == 'A') || (attempt_1[2] == word[0] && word[0] == 'A') || (attempt_1[2] == word[3] && word[3] == 'A') || (attempt_1[2] == word[4] && word[4] == 'A') || (attempt_1[3] == word[1] && word[1] == 'A') || (attempt_1[3] == word[0] && word[0] == 'A') || (attempt_1[3] == word[2] && word[2] == 'A') || (attempt_1[3] == word[4] && word[4] == 'A') || (attempt_1[4] == word[1] && word[1] == 'A') || (attempt_1[4] == word[0] && word[0] == 'A') || (attempt_1[4] == word[3] && word[3] == 'A') || (attempt_1[4] == word[2] && word[2] == 'A') || (attempt_2[0] == word[1] && word[1] == 'A') || (attempt_2[0] == word[2] && word[2] == 'A') || (attempt_2[0] == word[3] && word[3] == 'A') || (attempt_2[0] == word[4] && word[4] == 'A') || (attempt_2[1] == word[0] && word[0] == 'A') || (attempt_2[1] == word[2] && word[2] == 'A') || (attempt_2[1] == word[3] && word[3] == 'A') || (attempt_2[1] == word[4] && word[4] == 'A') || (attempt_2[2] == word[1] && word[1] == 'A') || (attempt_2[2] == word[0] && word[0] == 'A') || (attempt_2[2] == word[3] && word[3] == 'A') || (attempt_2[2] == word[4] && word[4] == 'A') || (attempt_2[3] == word[1] && word[1] == 'A') || (attempt_2[3] == word[0] && word[0] == 'A') || (attempt_2[3] == word[2] && word[2] == 'A') || (attempt_2[3] == word[4] && word[4] == 'A') || (attempt_2[4] == word[1] && word[1] == 'A') || (attempt_2[4] == word[0] && word[0] == 'A') || (attempt_2[4] == word[3] && word[3] == 'A') || (attempt_2[4] == word[2] && word[2] == 'A') || (attempt_3[0] == word[1] && word[1] == 'A') || (attempt_3[0] == word[2] && word[2] == 'A') || (attempt_3[0] == word[3] && word[3] == 'A') || (attempt_3[0] == word[4] && word[4] == 'A') || (attempt_3[1] == word[0] && word[0] == 'A') || (attempt_3[1] == word[2] && word[2] == 'A') || (attempt_3[1] == word[3] && word[3] == 'A') || (attempt_3[1] == word[4] && word[4] == 'A') || (attempt_3[2] == word[1] && word[1] == 'A') || (attempt_3[2] == word[0] && word[0] == 'A') || (attempt_3[2] == word[3] && word[3] == 'A') || (attempt_3[2] == word[4] && word[4] == 'A') || (attempt_3[3] == word[1] && word[1] == 'A') || (attempt_3[3] == word[0] && word[0] == 'A') || (attempt_3[3] == word[2] && word[2] == 'A') || (attempt_3[3] == word[4] && word[4] == 'A') || (attempt_3[4] == word[1] && word[1] == 'A') || (attempt_3[4] == word[0] && word[0] == 'A') || (attempt_3[4] == word[3] && word[3] == 'A') || (attempt_3[4] == word[2] && word[2] == 'A') || (attempt_4[0] == word[1] && word[1] == 'A') || (attempt_4[0] == word[2] && word[2] == 'A') || (attempt_4[0] == word[3] && word[3] == 'A') || (attempt_4[0] == word[4] && word[4] == 'A') || (attempt_4[1] == word[0] && word[0] == 'A') || (attempt_4[1] == word[2] && word[2] == 'A') || (attempt_4[1] == word[3] && word[3] == 'A') || (attempt_4[1] == word[4] && word[4] == 'A') || (attempt_4[2] == word[1] && word[1] == 'A') || (attempt_4[2] == word[0] && word[0] == 'A') || (attempt_4[2] == word[3] && word[3] == 'A') || (attempt_4[2] == word[4] && word[4] == 'A') || (attempt_4[3] == word[1] && word[1] == 'A') || (attempt_4[3] == word[0] && word[0] == 'A') || (attempt_4[3] == word[2] && word[2] == 'A') || (attempt_4[3] == word[4] && word[4] == 'A') || (attempt_4[4] == word[1] && word[1] == 'A') || (attempt_4[4] == word[0] && word[0] == 'A') || (attempt_4[4] == word[3] && word[3] == 'A') || (attempt_4[4] == word[2] && word[2] == 'A') || (attempt_5[0] == word[1] && word[1] == 'A') || (attempt_5[0] == word[2] && word[2] == 'A') || (attempt_5[0] == word[3] && word[3] == 'A') || (attempt_5[0] == word[4] && word[4] == 'A') || (attempt_5[1] == word[0] && word[0] == 'A') || (attempt_5[1] == word[2] && word[2] == 'A') || (attempt_5[1] == word[3] && word[3] == 'A') || (attempt_5[1] == word[4] && word[4] == 'A') || (attempt_5[2] == word[1] && word[1] == 'A') || (attempt_5[2] == word[0] && word[0] == 'A') || (attempt_5[2] == word[3] && word[3] == 'A') || (attempt_5[2] == word[4] && word[4] == 'A') || (attempt_5[3] == word[1] && word[1] == 'A') || (attempt_5[3] == word[0] && word[0] == 'A') || (attempt_5[3] == word[2] && word[2] == 'A') || (attempt_5[3] == word[4] && word[4] == 'A') || (attempt_5[4] == word[1] && word[1] == 'A') || (attempt_5[4] == word[0] && word[0] == 'A') || (attempt_5[4] == word[3] && word[3] == 'A') || (attempt_5[4] == word[2] && word[2] == 'A') || (attempt_6[0] == word[1] && word[1] == 'A') || (attempt_6[0] == word[2] && word[2] == 'A') || (attempt_6[0] == word[3] && word[3] == 'A') || (attempt_6[0] == word[4] && word[4] == 'A') || (attempt_6[1] == word[0] && word[0] == 'A') || (attempt_6[1] == word[2] && word[2] == 'A') || (attempt_6[1] == word[3] && word[3] == 'A') || (attempt_6[1] == word[4] && word[4] == 'A') || (attempt_6[2] == word[1] && word[1] == 'A') || (attempt_6[2] == word[0] && word[0] == 'A') || (attempt_6[2] == word[3] && word[3] == 'A') || (attempt_6[2] == word[4] && word[4] == 'A') || (attempt_6[3] == word[1] && word[1] == 'A') || (attempt_6[3] == word[0] && word[0] == 'A') || (attempt_6[3] == word[2] && word[2] == 'A') || (attempt_6[3] == word[4] && word[4] == 'A') || (attempt_6[4] == word[1] && word[1] == 'A') || (attempt_6[4] == word[0] && word[0] == 'A') || (attempt_6[4] == word[3] && word[3] == 'A') || (attempt_6[4] == word[2] && word[2] == 'A'))
    {
        cout << " ";
        c2();
        cout << " A ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'A') || (attempt_1[0] != word[2] && attempt_1[0] == 'A') || (attempt_1[0] != word[3] && attempt_1[0] == 'A') || (attempt_1[0] != word[4] && attempt_1[0] == 'A') || (attempt_1[1] != word[0] && attempt_1[1] == 'A') || (attempt_1[1] != word[2] && attempt_1[1] == 'A') || (attempt_1[1] != word[3] && attempt_1[1] == 'A') || (attempt_1[1] != word[4] && attempt_1[1] == 'A') || (attempt_1[2] != word[1] && attempt_1[2] == 'A') || (attempt_1[2] != word[0] && attempt_1[2] == 'A') || (attempt_1[2] != word[3] && attempt_1[2] == 'A') || (attempt_1[2] != word[4] && attempt_1[2] == 'A') || (attempt_1[3] != word[1] && attempt_1[3] == 'A') || (attempt_1[3] != word[2] && attempt_1[3] == 'A') || (attempt_1[3] != word[0] && attempt_1[3] == 'A') || (attempt_1[3] != word[4] && attempt_1[3] == 'A') || (attempt_1[4] != word[1] && attempt_1[4] == 'A') || (attempt_1[4] != word[2] && attempt_1[4] == 'A') || (attempt_1[4] != word[3] && attempt_1[4] == 'A') || (attempt_1[4] != word[0] && attempt_1[4] == 'A') || (attempt_2[0] != word[1] && attempt_2[0] == 'A') || (attempt_2[0] != word[2] && attempt_2[0] == 'A') || (attempt_2[0] != word[3] && attempt_2[0] == 'A') || (attempt_2[0] != word[4] && attempt_2[0] == 'A') || (attempt_2[1] != word[0] && attempt_2[1] == 'A') || (attempt_2[1] != word[2] && attempt_2[1] == 'A') || (attempt_2[1] != word[3] && attempt_2[1] == 'A') || (attempt_2[1] != word[4] && attempt_2[1] == 'A') || (attempt_2[2] != word[1] && attempt_2[2] == 'A') || (attempt_2[2] != word[0] && attempt_2[2] == 'A') || (attempt_2[2] != word[3] && attempt_2[2] == 'A') || (attempt_2[2] != word[4] && attempt_2[2] == 'A') || (attempt_2[3] != word[1] && attempt_2[3] == 'A') || (attempt_2[3] != word[2] && attempt_2[3] == 'A') || (attempt_2[3] != word[0] && attempt_2[3] == 'A') || (attempt_2[3] != word[4] && attempt_2[3] == 'A') || (attempt_2[4] != word[1] && attempt_2[4] == 'A') || (attempt_2[4] != word[2] && attempt_2[4] == 'A') || (attempt_2[4] != word[3] && attempt_2[4] == 'A') || (attempt_2[4] != word[0] && attempt_2[4] == 'A') || (attempt_3[0] != word[1] && attempt_3[0] == 'A') || (attempt_3[0] != word[2] && attempt_3[0] == 'A') || (attempt_3[0] != word[3] && attempt_3[0] == 'A') || (attempt_3[0] != word[4] && attempt_3[0] == 'A') || (attempt_3[1] != word[0] && attempt_3[1] == 'A') || (attempt_3[1] != word[2] && attempt_3[1] == 'A') || (attempt_3[1] != word[3] && attempt_3[1] == 'A') || (attempt_3[1] != word[4] && attempt_3[1] == 'A') || (attempt_3[2] != word[1] && attempt_3[2] == 'A') || (attempt_3[2] != word[0] && attempt_3[2] == 'A') || (attempt_3[2] != word[3] && attempt_3[2] == 'A') || (attempt_3[2] != word[4] && attempt_3[2] == 'A') || (attempt_3[3] != word[1] && attempt_3[3] == 'A') || (attempt_3[3] != word[2] && attempt_3[3] == 'A') || (attempt_3[3] != word[0] && attempt_3[3] == 'A') || (attempt_3[3] != word[4] && attempt_3[3] == 'A') || (attempt_3[4] != word[1] && attempt_3[4] == 'A') || (attempt_3[4] != word[2] && attempt_3[4] == 'A') || (attempt_3[4] != word[3] && attempt_3[4] == 'A') || (attempt_3[4] != word[0] && attempt_3[4] == 'A') || (attempt_4[0] != word[1] && attempt_4[0] == 'A') || (attempt_4[0] != word[2] && attempt_4[0] == 'A') || (attempt_4[0] != word[3] && attempt_4[0] == 'A') || (attempt_4[0] != word[4] && attempt_4[0] == 'A') || (attempt_4[1] != word[0] && attempt_4[1] == 'A') || (attempt_4[1] != word[2] && attempt_4[1] == 'A') || (attempt_4[1] != word[3] && attempt_4[1] == 'A') || (attempt_4[1] != word[4] && attempt_4[1] == 'A') || (attempt_4[2] != word[1] && attempt_4[2] == 'A') || (attempt_4[2] != word[0] && attempt_4[2] == 'A') || (attempt_4[2] != word[3] && attempt_4[2] == 'A') || (attempt_4[2] != word[4] && attempt_4[2] == 'A') || (attempt_4[3] != word[1] && attempt_4[3] == 'A') || (attempt_4[3] != word[2] && attempt_4[3] == 'A') || (attempt_4[3] != word[0] && attempt_4[3] == 'A') || (attempt_4[3] != word[4] && attempt_4[3] == 'A') || (attempt_4[4] != word[1] && attempt_4[4] == 'A') || (attempt_4[4] != word[2] && attempt_4[4] == 'A') || (attempt_4[4] != word[3] && attempt_4[4] == 'A') || (attempt_4[4] != word[0] && attempt_4[4] == 'A') || (attempt_5[0] != word[1] && attempt_5[0] == 'A') || (attempt_5[0] != word[2] && attempt_5[0] == 'A') || (attempt_5[0] != word[3] && attempt_5[0] == 'A') || (attempt_5[0] != word[4] && attempt_5[0] == 'A') || (attempt_5[1] != word[0] && attempt_5[1] == 'A') || (attempt_5[1] != word[2] && attempt_5[1] == 'A') || (attempt_5[1] != word[3] && attempt_5[1] == 'A') || (attempt_5[1] != word[4] && attempt_5[1] == 'A') || (attempt_5[2] != word[1] && attempt_5[2] == 'A') || (attempt_5[2] != word[0] && attempt_5[2] == 'A') || (attempt_5[2] != word[3] && attempt_5[2] == 'A') || (attempt_5[2] != word[4] && attempt_5[2] == 'A') || (attempt_5[3] != word[1] && attempt_5[3] == 'A') || (attempt_5[3] != word[2] && attempt_5[3] == 'A') || (attempt_5[3] != word[0] && attempt_5[3] == 'A') || (attempt_5[3] != word[4] && attempt_5[3] == 'A') || (attempt_5[4] != word[1] && attempt_5[4] == 'A') || (attempt_5[4] != word[2] && attempt_5[4] == 'A') || (attempt_5[4] != word[3] && attempt_5[4] == 'A') || (attempt_5[4] != word[0] && attempt_5[4] == 'A') || (attempt_6[0] != word[1] && attempt_6[0] == 'A') || (attempt_6[0] != word[2] && attempt_6[0] == 'A') || (attempt_6[0] != word[3] && attempt_6[0] == 'A') || (attempt_6[0] != word[4] && attempt_6[0] == 'A') || (attempt_6[1] != word[0] && attempt_6[1] == 'A') || (attempt_6[1] != word[2] && attempt_6[1] == 'A') || (attempt_6[1] != word[3] && attempt_6[1] == 'A') || (attempt_6[1] != word[4] && attempt_6[1] == 'A') || (attempt_6[2] != word[1] && attempt_6[2] == 'A') || (attempt_6[2] != word[0] && attempt_6[2] == 'A') || (attempt_6[2] != word[3] && attempt_6[2] == 'A') || (attempt_6[2] != word[4] && attempt_6[2] == 'A') || (attempt_6[3] != word[1] && attempt_6[3] == 'A') || (attempt_6[3] != word[2] && attempt_6[3] == 'A') || (attempt_6[3] != word[0] && attempt_6[3] == 'A') || (attempt_6[3] != word[4] && attempt_6[3] == 'A') || (attempt_6[4] != word[1] && attempt_6[4] == 'A') || (attempt_6[4] != word[2] && attempt_6[4] == 'A') || (attempt_6[4] != word[3] && attempt_6[4] == 'A') || (attempt_6[4] != word[0] && attempt_6[4] == 'A'))
    {
        cout << " ";
        c3();
        cout << " A ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " A ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'S') || (attempt_1[1] == word[1] && attempt_1[1] == 'S') || (attempt_1[2] == word[2] && attempt_1[2] == 'S') || (attempt_1[3] == word[3] && attempt_1[3] == 'S') || (attempt_1[4] == word[4] && attempt_1[4] == 'S') || (attempt_2[0] == word[0] && attempt_2[0] == 'S') || (attempt_2[1] == word[1] && attempt_2[1] == 'S') || (attempt_2[2] == word[2] && attempt_2[2] == 'S') || (attempt_2[3] == word[3] && attempt_2[3] == 'S') || (attempt_2[4] == word[4] && attempt_2[4] == 'S') || (attempt_3[0] == word[0] && attempt_3[0] == 'S') || (attempt_3[1] == word[1] && attempt_3[1] == 'S') || (attempt_3[2] == word[2] && attempt_3[2] == 'S') || (attempt_3[3] == word[3] && attempt_3[3] == 'S') || (attempt_3[4] == word[4] && attempt_3[4] == 'S') || (attempt_4[0] == word[0] && attempt_4[0] == 'S') || (attempt_4[1] == word[1] && attempt_4[1] == 'S') || (attempt_4[2] == word[2] && attempt_4[2] == 'S') || (attempt_4[3] == word[3] && attempt_4[3] == 'S') || (attempt_4[4] == word[4] && attempt_4[4] == 'S') || (attempt_5[0] == word[0] && attempt_5[0] == 'S') || (attempt_5[1] == word[1] && attempt_5[1] == 'S') || (attempt_5[2] == word[2] && attempt_5[2] == 'S') || (attempt_5[3] == word[3] && attempt_5[3] == 'S') || (attempt_5[4] == word[4] && attempt_5[4] == 'S') || (attempt_6[0] == word[0] && attempt_6[0] == 'S') || (attempt_6[1] == word[1] && attempt_6[1] == 'S') || (attempt_6[2] == word[2] && attempt_6[2] == 'S') || (attempt_6[3] == word[3] && attempt_6[3] == 'S') || (attempt_6[4] == word[4] && attempt_6[4] == 'S'))
    {
        cout << " ";
        c1();
        cout << " S ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'S') || (attempt_1[0] == word[2] && word[2] == 'S') || (attempt_1[0] == word[3] && word[3] == 'S') || (attempt_1[0] == word[4] && word[4] == 'S') || (attempt_1[1] == word[0] && word[0] == 'S') || (attempt_1[1] == word[2] && word[2] == 'S') || (attempt_1[1] == word[3] && word[3] == 'S') || (attempt_1[1] == word[4] && word[4] == 'S') || (attempt_1[2] == word[1] && word[1] == 'S') || (attempt_1[2] == word[0] && word[0] == 'S') || (attempt_1[2] == word[3] && word[3] == 'S') || (attempt_1[2] == word[4] && word[4] == 'S') || (attempt_1[3] == word[1] && word[1] == 'S') || (attempt_1[3] == word[0] && word[0] == 'S') || (attempt_1[3] == word[2] && word[2] == 'S') || (attempt_1[3] == word[4] && word[4] == 'S') || (attempt_1[4] == word[1] && word[1] == 'S') || (attempt_1[4] == word[0] && word[0] == 'S') || (attempt_1[4] == word[3] && word[3] == 'S') || (attempt_1[4] == word[2] && word[2] == 'S') || (attempt_2[0] == word[1] && word[1] == 'S') || (attempt_2[0] == word[2] && word[2] == 'S') || (attempt_2[0] == word[3] && word[3] == 'S') || (attempt_2[0] == word[4] && word[4] == 'S') || (attempt_2[1] == word[0] && word[0] == 'S') || (attempt_2[1] == word[2] && word[2] == 'S') || (attempt_2[1] == word[3] && word[3] == 'S') || (attempt_2[1] == word[4] && word[4] == 'S') || (attempt_2[2] == word[1] && word[1] == 'S') || (attempt_2[2] == word[0] && word[0] == 'S') || (attempt_2[2] == word[3] && word[3] == 'S') || (attempt_2[2] == word[4] && word[4] == 'S') || (attempt_2[3] == word[1] && word[1] == 'S') || (attempt_2[3] == word[0] && word[0] == 'S') || (attempt_2[3] == word[2] && word[2] == 'S') || (attempt_2[3] == word[4] && word[4] == 'S') || (attempt_2[4] == word[1] && word[1] == 'S') || (attempt_2[4] == word[0] && word[0] == 'S') || (attempt_2[4] == word[3] && word[3] == 'S') || (attempt_2[4] == word[2] && word[2] == 'S') || (attempt_3[0] == word[1] && word[1] == 'S') || (attempt_3[0] == word[2] && word[2] == 'S') || (attempt_3[0] == word[3] && word[3] == 'S') || (attempt_3[0] == word[4] && word[4] == 'S') || (attempt_3[1] == word[0] && word[0] == 'S') || (attempt_3[1] == word[2] && word[2] == 'S') || (attempt_3[1] == word[3] && word[3] == 'S') || (attempt_3[1] == word[4] && word[4] == 'S') || (attempt_3[2] == word[1] && word[1] == 'S') || (attempt_3[2] == word[0] && word[0] == 'S') || (attempt_3[2] == word[3] && word[3] == 'S') || (attempt_3[2] == word[4] && word[4] == 'S') || (attempt_3[3] == word[1] && word[1] == 'S') || (attempt_3[3] == word[0] && word[0] == 'S') || (attempt_3[3] == word[2] && word[2] == 'S') || (attempt_3[3] == word[4] && word[4] == 'S') || (attempt_3[4] == word[1] && word[1] == 'S') || (attempt_3[4] == word[0] && word[0] == 'S') || (attempt_3[4] == word[3] && word[3] == 'S') || (attempt_3[4] == word[2] && word[2] == 'S') || (attempt_4[0] == word[1] && word[1] == 'S') || (attempt_4[0] == word[2] && word[2] == 'S') || (attempt_4[0] == word[3] && word[3] == 'S') || (attempt_4[0] == word[4] && word[4] == 'S') || (attempt_4[1] == word[0] && word[0] == 'S') || (attempt_4[1] == word[2] && word[2] == 'S') || (attempt_4[1] == word[3] && word[3] == 'S') || (attempt_4[1] == word[4] && word[4] == 'S') || (attempt_4[2] == word[1] && word[1] == 'S') || (attempt_4[2] == word[0] && word[0] == 'S') || (attempt_4[2] == word[3] && word[3] == 'S') || (attempt_4[2] == word[4] && word[4] == 'S') || (attempt_4[3] == word[1] && word[1] == 'S') || (attempt_4[3] == word[0] && word[0] == 'S') || (attempt_4[3] == word[2] && word[2] == 'S') || (attempt_4[3] == word[4] && word[4] == 'S') || (attempt_4[4] == word[1] && word[1] == 'S') || (attempt_4[4] == word[0] && word[0] == 'S') || (attempt_4[4] == word[3] && word[3] == 'S') || (attempt_4[4] == word[2] && word[2] == 'S') || (attempt_5[0] == word[1] && word[1] == 'S') || (attempt_5[0] == word[2] && word[2] == 'S') || (attempt_5[0] == word[3] && word[3] == 'S') || (attempt_5[0] == word[4] && word[4] == 'S') || (attempt_5[1] == word[0] && word[0] == 'S') || (attempt_5[1] == word[2] && word[2] == 'S') || (attempt_5[1] == word[3] && word[3] == 'S') || (attempt_5[1] == word[4] && word[4] == 'S') || (attempt_5[2] == word[1] && word[1] == 'S') || (attempt_5[2] == word[0] && word[0] == 'S') || (attempt_5[2] == word[3] && word[3] == 'S') || (attempt_5[2] == word[4] && word[4] == 'S') || (attempt_5[3] == word[1] && word[1] == 'S') || (attempt_5[3] == word[0] && word[0] == 'S') || (attempt_5[3] == word[2] && word[2] == 'S') || (attempt_5[3] == word[4] && word[4] == 'S') || (attempt_5[4] == word[1] && word[1] == 'S') || (attempt_5[4] == word[0] && word[0] == 'S') || (attempt_5[4] == word[3] && word[3] == 'S') || (attempt_5[4] == word[2] && word[2] == 'S') || (attempt_6[0] == word[1] && word[1] == 'S') || (attempt_6[0] == word[2] && word[2] == 'S') || (attempt_6[0] == word[3] && word[3] == 'S') || (attempt_6[0] == word[4] && word[4] == 'S') || (attempt_6[1] == word[0] && word[0] == 'S') || (attempt_6[1] == word[2] && word[2] == 'S') || (attempt_6[1] == word[3] && word[3] == 'S') || (attempt_6[1] == word[4] && word[4] == 'S') || (attempt_6[2] == word[1] && word[1] == 'S') || (attempt_6[2] == word[0] && word[0] == 'S') || (attempt_6[2] == word[3] && word[3] == 'S') || (attempt_6[2] == word[4] && word[4] == 'S') || (attempt_6[3] == word[1] && word[1] == 'S') || (attempt_6[3] == word[0] && word[0] == 'S') || (attempt_6[3] == word[2] && word[2] == 'S') || (attempt_6[3] == word[4] && word[4] == 'S') || (attempt_6[4] == word[1] && word[1] == 'S') || (attempt_6[4] == word[0] && word[0] == 'S') || (attempt_6[4] == word[3] && word[3] == 'S') || (attempt_6[4] == word[2] && word[2] == 'S'))
    {
        cout << " ";
        c2();
        cout << " S ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'S') || (attempt_1[0] != word[2] && attempt_1[0] == 'S') || (attempt_1[0] != word[3] && attempt_1[0] == 'S') || (attempt_1[0] != word[4] && attempt_1[0] == 'S') || (attempt_1[1] != word[0] && attempt_1[1] == 'S') || (attempt_1[1] != word[2] && attempt_1[1] == 'S') || (attempt_1[1] != word[3] && attempt_1[1] == 'S') || (attempt_1[1] != word[4] && attempt_1[1] == 'S') || (attempt_1[2] != word[1] && attempt_1[2] == 'S') || (attempt_1[2] != word[0] && attempt_1[2] == 'S') || (attempt_1[2] != word[3] && attempt_1[2] == 'S') || (attempt_1[2] != word[4] && attempt_1[2] == 'S') || (attempt_1[3] != word[1] && attempt_1[3] == 'S') || (attempt_1[3] != word[2] && attempt_1[3] == 'S') || (attempt_1[3] != word[0] && attempt_1[3] == 'S') || (attempt_1[3] != word[4] && attempt_1[3] == 'S') || (attempt_1[4] != word[1] && attempt_1[4] == 'S') || (attempt_1[4] != word[2] && attempt_1[4] == 'S') || (attempt_1[4] != word[3] && attempt_1[4] == 'S') || (attempt_1[4] != word[0] && attempt_1[4] == 'S') || (attempt_2[0] != word[1] && attempt_2[0] == 'S') || (attempt_2[0] != word[2] && attempt_2[0] == 'S') || (attempt_2[0] != word[3] && attempt_2[0] == 'S') || (attempt_2[0] != word[4] && attempt_2[0] == 'S') || (attempt_2[1] != word[0] && attempt_2[1] == 'S') || (attempt_2[1] != word[2] && attempt_2[1] == 'S') || (attempt_2[1] != word[3] && attempt_2[1] == 'S') || (attempt_2[1] != word[4] && attempt_2[1] == 'S') || (attempt_2[2] != word[1] && attempt_2[2] == 'S') || (attempt_2[2] != word[0] && attempt_2[2] == 'S') || (attempt_2[2] != word[3] && attempt_2[2] == 'S') || (attempt_2[2] != word[4] && attempt_2[2] == 'S') || (attempt_2[3] != word[1] && attempt_2[3] == 'S') || (attempt_2[3] != word[2] && attempt_2[3] == 'S') || (attempt_2[3] != word[0] && attempt_2[3] == 'S') || (attempt_2[3] != word[4] && attempt_2[3] == 'S') || (attempt_2[4] != word[1] && attempt_2[4] == 'S') || (attempt_2[4] != word[2] && attempt_2[4] == 'S') || (attempt_2[4] != word[3] && attempt_2[4] == 'S') || (attempt_2[4] != word[0] && attempt_2[4] == 'S') || (attempt_3[0] != word[1] && attempt_3[0] == 'S') || (attempt_3[0] != word[2] && attempt_3[0] == 'S') || (attempt_3[0] != word[3] && attempt_3[0] == 'S') || (attempt_3[0] != word[4] && attempt_3[0] == 'S') || (attempt_3[1] != word[0] && attempt_3[1] == 'S') || (attempt_3[1] != word[2] && attempt_3[1] == 'S') || (attempt_3[1] != word[3] && attempt_3[1] == 'S') || (attempt_3[1] != word[4] && attempt_3[1] == 'S') || (attempt_3[2] != word[1] && attempt_3[2] == 'S') || (attempt_3[2] != word[0] && attempt_3[2] == 'S') || (attempt_3[2] != word[3] && attempt_3[2] == 'S') || (attempt_3[2] != word[4] && attempt_3[2] == 'S') || (attempt_3[3] != word[1] && attempt_3[3] == 'S') || (attempt_3[3] != word[2] && attempt_3[3] == 'S') || (attempt_3[3] != word[0] && attempt_3[3] == 'S') || (attempt_3[3] != word[4] && attempt_3[3] == 'S') || (attempt_3[4] != word[1] && attempt_3[4] == 'S') || (attempt_3[4] != word[2] && attempt_3[4] == 'S') || (attempt_3[4] != word[3] && attempt_3[4] == 'S') || (attempt_3[4] != word[0] && attempt_3[4] == 'S') || (attempt_4[0] != word[1] && attempt_4[0] == 'S') || (attempt_4[0] != word[2] && attempt_4[0] == 'S') || (attempt_4[0] != word[3] && attempt_4[0] == 'S') || (attempt_4[0] != word[4] && attempt_4[0] == 'S') || (attempt_4[1] != word[0] && attempt_4[1] == 'S') || (attempt_4[1] != word[2] && attempt_4[1] == 'S') || (attempt_4[1] != word[3] && attempt_4[1] == 'S') || (attempt_4[1] != word[4] && attempt_4[1] == 'S') || (attempt_4[2] != word[1] && attempt_4[2] == 'S') || (attempt_4[2] != word[0] && attempt_4[2] == 'S') || (attempt_4[2] != word[3] && attempt_4[2] == 'S') || (attempt_4[2] != word[4] && attempt_4[2] == 'S') || (attempt_4[3] != word[1] && attempt_4[3] == 'S') || (attempt_4[3] != word[2] && attempt_4[3] == 'S') || (attempt_4[3] != word[0] && attempt_4[3] == 'S') || (attempt_4[3] != word[4] && attempt_4[3] == 'S') || (attempt_4[4] != word[1] && attempt_4[4] == 'S') || (attempt_4[4] != word[2] && attempt_4[4] == 'S') || (attempt_4[4] != word[3] && attempt_4[4] == 'S') || (attempt_4[4] != word[0] && attempt_4[4] == 'S') || (attempt_5[0] != word[1] && attempt_5[0] == 'S') || (attempt_5[0] != word[2] && attempt_5[0] == 'S') || (attempt_5[0] != word[3] && attempt_5[0] == 'S') || (attempt_5[0] != word[4] && attempt_5[0] == 'S') || (attempt_5[1] != word[0] && attempt_5[1] == 'S') || (attempt_5[1] != word[2] && attempt_5[1] == 'S') || (attempt_5[1] != word[3] && attempt_5[1] == 'S') || (attempt_5[1] != word[4] && attempt_5[1] == 'S') || (attempt_5[2] != word[1] && attempt_5[2] == 'S') || (attempt_5[2] != word[0] && attempt_5[2] == 'S') || (attempt_5[2] != word[3] && attempt_5[2] == 'S') || (attempt_5[2] != word[4] && attempt_5[2] == 'S') || (attempt_5[3] != word[1] && attempt_5[3] == 'S') || (attempt_5[3] != word[2] && attempt_5[3] == 'S') || (attempt_5[3] != word[0] && attempt_5[3] == 'S') || (attempt_5[3] != word[4] && attempt_5[3] == 'S') || (attempt_5[4] != word[1] && attempt_5[4] == 'S') || (attempt_5[4] != word[2] && attempt_5[4] == 'S') || (attempt_5[4] != word[3] && attempt_5[4] == 'S') || (attempt_5[4] != word[0] && attempt_5[4] == 'S') || (attempt_6[0] != word[1] && attempt_6[0] == 'S') || (attempt_6[0] != word[2] && attempt_6[0] == 'S') || (attempt_6[0] != word[3] && attempt_6[0] == 'S') || (attempt_6[0] != word[4] && attempt_6[0] == 'S') || (attempt_6[1] != word[0] && attempt_6[1] == 'S') || (attempt_6[1] != word[2] && attempt_6[1] == 'S') || (attempt_6[1] != word[3] && attempt_6[1] == 'S') || (attempt_6[1] != word[4] && attempt_6[1] == 'S') || (attempt_6[2] != word[1] && attempt_6[2] == 'S') || (attempt_6[2] != word[0] && attempt_6[2] == 'S') || (attempt_6[2] != word[3] && attempt_6[2] == 'S') || (attempt_6[2] != word[4] && attempt_6[2] == 'S') || (attempt_6[3] != word[1] && attempt_6[3] == 'S') || (attempt_6[3] != word[2] && attempt_6[3] == 'S') || (attempt_6[3] != word[0] && attempt_6[3] == 'S') || (attempt_6[3] != word[4] && attempt_6[3] == 'S') || (attempt_6[4] != word[1] && attempt_6[4] == 'S') || (attempt_6[4] != word[2] && attempt_6[4] == 'S') || (attempt_6[4] != word[3] && attempt_6[4] == 'S') || (attempt_6[4] != word[0] && attempt_6[4] == 'S'))
    {
        cout << " ";
        c3();
        cout << " S ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " S ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'D') || (attempt_1[1] == word[1] && attempt_1[1] == 'D') || (attempt_1[2] == word[2] && attempt_1[2] == 'D') || (attempt_1[3] == word[3] && attempt_1[3] == 'D') || (attempt_1[4] == word[4] && attempt_1[4] == 'D') || (attempt_2[0] == word[0] && attempt_2[0] == 'D') || (attempt_2[1] == word[1] && attempt_2[1] == 'D') || (attempt_2[2] == word[2] && attempt_2[2] == 'D') || (attempt_2[3] == word[3] && attempt_2[3] == 'D') || (attempt_2[4] == word[4] && attempt_2[4] == 'D') || (attempt_3[0] == word[0] && attempt_3[0] == 'D') || (attempt_3[1] == word[1] && attempt_3[1] == 'D') || (attempt_3[2] == word[2] && attempt_3[2] == 'D') || (attempt_3[3] == word[3] && attempt_3[3] == 'D') || (attempt_3[4] == word[4] && attempt_3[4] == 'D') || (attempt_4[0] == word[0] && attempt_4[0] == 'D') || (attempt_4[1] == word[1] && attempt_4[1] == 'D') || (attempt_4[2] == word[2] && attempt_4[2] == 'D') || (attempt_4[3] == word[3] && attempt_4[3] == 'D') || (attempt_4[4] == word[4] && attempt_4[4] == 'D') || (attempt_5[0] == word[0] && attempt_5[0] == 'D') || (attempt_5[1] == word[1] && attempt_5[1] == 'D') || (attempt_5[2] == word[2] && attempt_5[2] == 'D') || (attempt_5[3] == word[3] && attempt_5[3] == 'D') || (attempt_5[4] == word[4] && attempt_5[4] == 'D') || (attempt_6[0] == word[0] && attempt_6[0] == 'D') || (attempt_6[1] == word[1] && attempt_6[1] == 'D') || (attempt_6[2] == word[2] && attempt_6[2] == 'D') || (attempt_6[3] == word[3] && attempt_6[3] == 'D') || (attempt_6[4] == word[4] && attempt_6[4] == 'D'))
    {
        cout << " ";
        c1();
        cout << " D ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'D') || (attempt_1[0] == word[2] && word[2] == 'D') || (attempt_1[0] == word[3] && word[3] == 'D') || (attempt_1[0] == word[4] && word[4] == 'D') || (attempt_1[1] == word[0] && word[0] == 'D') || (attempt_1[1] == word[2] && word[2] == 'D') || (attempt_1[1] == word[3] && word[3] == 'D') || (attempt_1[1] == word[4] && word[4] == 'D') || (attempt_1[2] == word[1] && word[1] == 'D') || (attempt_1[2] == word[0] && word[0] == 'D') || (attempt_1[2] == word[3] && word[3] == 'D') || (attempt_1[2] == word[4] && word[4] == 'D') || (attempt_1[3] == word[1] && word[1] == 'D') || (attempt_1[3] == word[0] && word[0] == 'D') || (attempt_1[3] == word[2] && word[2] == 'D') || (attempt_1[3] == word[4] && word[4] == 'D') || (attempt_1[4] == word[1] && word[1] == 'D') || (attempt_1[4] == word[0] && word[0] == 'D') || (attempt_1[4] == word[3] && word[3] == 'D') || (attempt_1[4] == word[2] && word[2] == 'D') || (attempt_2[0] == word[1] && word[1] == 'D') || (attempt_2[0] == word[2] && word[2] == 'D') || (attempt_2[0] == word[3] && word[3] == 'D') || (attempt_2[0] == word[4] && word[4] == 'D') || (attempt_2[1] == word[0] && word[0] == 'D') || (attempt_2[1] == word[2] && word[2] == 'D') || (attempt_2[1] == word[3] && word[3] == 'D') || (attempt_2[1] == word[4] && word[4] == 'D') || (attempt_2[2] == word[1] && word[1] == 'D') || (attempt_2[2] == word[0] && word[0] == 'D') || (attempt_2[2] == word[3] && word[3] == 'D') || (attempt_2[2] == word[4] && word[4] == 'D') || (attempt_2[3] == word[1] && word[1] == 'D') || (attempt_2[3] == word[0] && word[0] == 'D') || (attempt_2[3] == word[2] && word[2] == 'D') || (attempt_2[3] == word[4] && word[4] == 'D') || (attempt_2[4] == word[1] && word[1] == 'D') || (attempt_2[4] == word[0] && word[0] == 'D') || (attempt_2[4] == word[3] && word[3] == 'D') || (attempt_2[4] == word[2] && word[2] == 'D') || (attempt_3[0] == word[1] && word[1] == 'D') || (attempt_3[0] == word[2] && word[2] == 'D') || (attempt_3[0] == word[3] && word[3] == 'D') || (attempt_3[0] == word[4] && word[4] == 'D') || (attempt_3[1] == word[0] && word[0] == 'D') || (attempt_3[1] == word[2] && word[2] == 'D') || (attempt_3[1] == word[3] && word[3] == 'D') || (attempt_3[1] == word[4] && word[4] == 'D') || (attempt_3[2] == word[1] && word[1] == 'D') || (attempt_3[2] == word[0] && word[0] == 'D') || (attempt_3[2] == word[3] && word[3] == 'D') || (attempt_3[2] == word[4] && word[4] == 'D') || (attempt_3[3] == word[1] && word[1] == 'D') || (attempt_3[3] == word[0] && word[0] == 'D') || (attempt_3[3] == word[2] && word[2] == 'D') || (attempt_3[3] == word[4] && word[4] == 'D') || (attempt_3[4] == word[1] && word[1] == 'D') || (attempt_3[4] == word[0] && word[0] == 'D') || (attempt_3[4] == word[3] && word[3] == 'D') || (attempt_3[4] == word[2] && word[2] == 'D') || (attempt_4[0] == word[1] && word[1] == 'D') || (attempt_4[0] == word[2] && word[2] == 'D') || (attempt_4[0] == word[3] && word[3] == 'D') || (attempt_4[0] == word[4] && word[4] == 'D') || (attempt_4[1] == word[0] && word[0] == 'D') || (attempt_4[1] == word[2] && word[2] == 'D') || (attempt_4[1] == word[3] && word[3] == 'D') || (attempt_4[1] == word[4] && word[4] == 'D') || (attempt_4[2] == word[1] && word[1] == 'D') || (attempt_4[2] == word[0] && word[0] == 'D') || (attempt_4[2] == word[3] && word[3] == 'D') || (attempt_4[2] == word[4] && word[4] == 'D') || (attempt_4[3] == word[1] && word[1] == 'D') || (attempt_4[3] == word[0] && word[0] == 'D') || (attempt_4[3] == word[2] && word[2] == 'D') || (attempt_4[3] == word[4] && word[4] == 'D') || (attempt_4[4] == word[1] && word[1] == 'D') || (attempt_4[4] == word[0] && word[0] == 'D') || (attempt_4[4] == word[3] && word[3] == 'D') || (attempt_4[4] == word[2] && word[2] == 'D') || (attempt_5[0] == word[1] && word[1] == 'D') || (attempt_5[0] == word[2] && word[2] == 'D') || (attempt_5[0] == word[3] && word[3] == 'D') || (attempt_5[0] == word[4] && word[4] == 'D') || (attempt_5[1] == word[0] && word[0] == 'D') || (attempt_5[1] == word[2] && word[2] == 'D') || (attempt_5[1] == word[3] && word[3] == 'D') || (attempt_5[1] == word[4] && word[4] == 'D') || (attempt_5[2] == word[1] && word[1] == 'D') || (attempt_5[2] == word[0] && word[0] == 'D') || (attempt_5[2] == word[3] && word[3] == 'D') || (attempt_5[2] == word[4] && word[4] == 'D') || (attempt_5[3] == word[1] && word[1] == 'D') || (attempt_5[3] == word[0] && word[0] == 'D') || (attempt_5[3] == word[2] && word[2] == 'D') || (attempt_5[3] == word[4] && word[4] == 'D') || (attempt_5[4] == word[1] && word[1] == 'D') || (attempt_5[4] == word[0] && word[0] == 'D') || (attempt_5[4] == word[3] && word[3] == 'D') || (attempt_5[4] == word[2] && word[2] == 'D') || (attempt_6[0] == word[1] && word[1] == 'D') || (attempt_6[0] == word[2] && word[2] == 'D') || (attempt_6[0] == word[3] && word[3] == 'D') || (attempt_6[0] == word[4] && word[4] == 'D') || (attempt_6[1] == word[0] && word[0] == 'D') || (attempt_6[1] == word[2] && word[2] == 'D') || (attempt_6[1] == word[3] && word[3] == 'D') || (attempt_6[1] == word[4] && word[4] == 'D') || (attempt_6[2] == word[1] && word[1] == 'D') || (attempt_6[2] == word[0] && word[0] == 'D') || (attempt_6[2] == word[3] && word[3] == 'D') || (attempt_6[2] == word[4] && word[4] == 'D') || (attempt_6[3] == word[1] && word[1] == 'D') || (attempt_6[3] == word[0] && word[0] == 'D') || (attempt_6[3] == word[2] && word[2] == 'D') || (attempt_6[3] == word[4] && word[4] == 'D') || (attempt_6[4] == word[1] && word[1] == 'D') || (attempt_6[4] == word[0] && word[0] == 'D') || (attempt_6[4] == word[3] && word[3] == 'D') || (attempt_6[4] == word[2] && word[2] == 'D'))
    {
        cout << " ";
        c2();
        cout << " D ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'D') || (attempt_1[0] != word[2] && attempt_1[0] == 'D') || (attempt_1[0] != word[3] && attempt_1[0] == 'D') || (attempt_1[0] != word[4] && attempt_1[0] == 'D') || (attempt_1[1] != word[0] && attempt_1[1] == 'D') || (attempt_1[1] != word[2] && attempt_1[1] == 'D') || (attempt_1[1] != word[3] && attempt_1[1] == 'D') || (attempt_1[1] != word[4] && attempt_1[1] == 'D') || (attempt_1[2] != word[1] && attempt_1[2] == 'D') || (attempt_1[2] != word[0] && attempt_1[2] == 'D') || (attempt_1[2] != word[3] && attempt_1[2] == 'D') || (attempt_1[2] != word[4] && attempt_1[2] == 'D') || (attempt_1[3] != word[1] && attempt_1[3] == 'D') || (attempt_1[3] != word[2] && attempt_1[3] == 'D') || (attempt_1[3] != word[0] && attempt_1[3] == 'D') || (attempt_1[3] != word[4] && attempt_1[3] == 'D') || (attempt_1[4] != word[1] && attempt_1[4] == 'D') || (attempt_1[4] != word[2] && attempt_1[4] == 'D') || (attempt_1[4] != word[3] && attempt_1[4] == 'D') || (attempt_1[4] != word[0] && attempt_1[4] == 'D') || (attempt_2[0] != word[1] && attempt_2[0] == 'D') || (attempt_2[0] != word[2] && attempt_2[0] == 'D') || (attempt_2[0] != word[3] && attempt_2[0] == 'D') || (attempt_2[0] != word[4] && attempt_2[0] == 'D') || (attempt_2[1] != word[0] && attempt_2[1] == 'D') || (attempt_2[1] != word[2] && attempt_2[1] == 'D') || (attempt_2[1] != word[3] && attempt_2[1] == 'D') || (attempt_2[1] != word[4] && attempt_2[1] == 'D') || (attempt_2[2] != word[1] && attempt_2[2] == 'D') || (attempt_2[2] != word[0] && attempt_2[2] == 'D') || (attempt_2[2] != word[3] && attempt_2[2] == 'D') || (attempt_2[2] != word[4] && attempt_2[2] == 'D') || (attempt_2[3] != word[1] && attempt_2[3] == 'D') || (attempt_2[3] != word[2] && attempt_2[3] == 'D') || (attempt_2[3] != word[0] && attempt_2[3] == 'D') || (attempt_2[3] != word[4] && attempt_2[3] == 'D') || (attempt_2[4] != word[1] && attempt_2[4] == 'D') || (attempt_2[4] != word[2] && attempt_2[4] == 'D') || (attempt_2[4] != word[3] && attempt_2[4] == 'D') || (attempt_2[4] != word[0] && attempt_2[4] == 'D') || (attempt_3[0] != word[1] && attempt_3[0] == 'D') || (attempt_3[0] != word[2] && attempt_3[0] == 'D') || (attempt_3[0] != word[3] && attempt_3[0] == 'D') || (attempt_3[0] != word[4] && attempt_3[0] == 'D') || (attempt_3[1] != word[0] && attempt_3[1] == 'D') || (attempt_3[1] != word[2] && attempt_3[1] == 'D') || (attempt_3[1] != word[3] && attempt_3[1] == 'D') || (attempt_3[1] != word[4] && attempt_3[1] == 'D') || (attempt_3[2] != word[1] && attempt_3[2] == 'D') || (attempt_3[2] != word[0] && attempt_3[2] == 'D') || (attempt_3[2] != word[3] && attempt_3[2] == 'D') || (attempt_3[2] != word[4] && attempt_3[2] == 'D') || (attempt_3[3] != word[1] && attempt_3[3] == 'D') || (attempt_3[3] != word[2] && attempt_3[3] == 'D') || (attempt_3[3] != word[0] && attempt_3[3] == 'D') || (attempt_3[3] != word[4] && attempt_3[3] == 'D') || (attempt_3[4] != word[1] && attempt_3[4] == 'D') || (attempt_3[4] != word[2] && attempt_3[4] == 'D') || (attempt_3[4] != word[3] && attempt_3[4] == 'D') || (attempt_3[4] != word[0] && attempt_3[4] == 'D') || (attempt_4[0] != word[1] && attempt_4[0] == 'D') || (attempt_4[0] != word[2] && attempt_4[0] == 'D') || (attempt_4[0] != word[3] && attempt_4[0] == 'D') || (attempt_4[0] != word[4] && attempt_4[0] == 'D') || (attempt_4[1] != word[0] && attempt_4[1] == 'D') || (attempt_4[1] != word[2] && attempt_4[1] == 'D') || (attempt_4[1] != word[3] && attempt_4[1] == 'D') || (attempt_4[1] != word[4] && attempt_4[1] == 'D') || (attempt_4[2] != word[1] && attempt_4[2] == 'D') || (attempt_4[2] != word[0] && attempt_4[2] == 'D') || (attempt_4[2] != word[3] && attempt_4[2] == 'D') || (attempt_4[2] != word[4] && attempt_4[2] == 'D') || (attempt_4[3] != word[1] && attempt_4[3] == 'D') || (attempt_4[3] != word[2] && attempt_4[3] == 'D') || (attempt_4[3] != word[0] && attempt_4[3] == 'D') || (attempt_4[3] != word[4] && attempt_4[3] == 'D') || (attempt_4[4] != word[1] && attempt_4[4] == 'D') || (attempt_4[4] != word[2] && attempt_4[4] == 'D') || (attempt_4[4] != word[3] && attempt_4[4] == 'D') || (attempt_4[4] != word[0] && attempt_4[4] == 'D') || (attempt_5[0] != word[1] && attempt_5[0] == 'D') || (attempt_5[0] != word[2] && attempt_5[0] == 'D') || (attempt_5[0] != word[3] && attempt_5[0] == 'D') || (attempt_5[0] != word[4] && attempt_5[0] == 'D') || (attempt_5[1] != word[0] && attempt_5[1] == 'D') || (attempt_5[1] != word[2] && attempt_5[1] == 'D') || (attempt_5[1] != word[3] && attempt_5[1] == 'D') || (attempt_5[1] != word[4] && attempt_5[1] == 'D') || (attempt_5[2] != word[1] && attempt_5[2] == 'D') || (attempt_5[2] != word[0] && attempt_5[2] == 'D') || (attempt_5[2] != word[3] && attempt_5[2] == 'D') || (attempt_5[2] != word[4] && attempt_5[2] == 'D') || (attempt_5[3] != word[1] && attempt_5[3] == 'D') || (attempt_5[3] != word[2] && attempt_5[3] == 'D') || (attempt_5[3] != word[0] && attempt_5[3] == 'D') || (attempt_5[3] != word[4] && attempt_5[3] == 'D') || (attempt_5[4] != word[1] && attempt_5[4] == 'D') || (attempt_5[4] != word[2] && attempt_5[4] == 'D') || (attempt_5[4] != word[3] && attempt_5[4] == 'D') || (attempt_5[4] != word[0] && attempt_5[4] == 'D') || (attempt_6[0] != word[1] && attempt_6[0] == 'D') || (attempt_6[0] != word[2] && attempt_6[0] == 'D') || (attempt_6[0] != word[3] && attempt_6[0] == 'D') || (attempt_6[0] != word[4] && attempt_6[0] == 'D') || (attempt_6[1] != word[0] && attempt_6[1] == 'D') || (attempt_6[1] != word[2] && attempt_6[1] == 'D') || (attempt_6[1] != word[3] && attempt_6[1] == 'D') || (attempt_6[1] != word[4] && attempt_6[1] == 'D') || (attempt_6[2] != word[1] && attempt_6[2] == 'D') || (attempt_6[2] != word[0] && attempt_6[2] == 'D') || (attempt_6[2] != word[3] && attempt_6[2] == 'D') || (attempt_6[2] != word[4] && attempt_6[2] == 'D') || (attempt_6[3] != word[1] && attempt_6[3] == 'D') || (attempt_6[3] != word[2] && attempt_6[3] == 'D') || (attempt_6[3] != word[0] && attempt_6[3] == 'D') || (attempt_6[3] != word[4] && attempt_6[3] == 'D') || (attempt_6[4] != word[1] && attempt_6[4] == 'D') || (attempt_6[4] != word[2] && attempt_6[4] == 'D') || (attempt_6[4] != word[3] && attempt_6[4] == 'D') || (attempt_6[4] != word[0] && attempt_6[4] == 'D'))
    {
        cout << " ";
        c3();
        cout << " D ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " D ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'F') || (attempt_1[1] == word[1] && attempt_1[1] == 'F') || (attempt_1[2] == word[2] && attempt_1[2] == 'F') || (attempt_1[3] == word[3] && attempt_1[3] == 'F') || (attempt_1[4] == word[4] && attempt_1[4] == 'F') || (attempt_2[0] == word[0] && attempt_2[0] == 'F') || (attempt_2[1] == word[1] && attempt_2[1] == 'F') || (attempt_2[2] == word[2] && attempt_2[2] == 'F') || (attempt_2[3] == word[3] && attempt_2[3] == 'F') || (attempt_2[4] == word[4] && attempt_2[4] == 'F') || (attempt_3[0] == word[0] && attempt_3[0] == 'F') || (attempt_3[1] == word[1] && attempt_3[1] == 'F') || (attempt_3[2] == word[2] && attempt_3[2] == 'F') || (attempt_3[3] == word[3] && attempt_3[3] == 'F') || (attempt_3[4] == word[4] && attempt_3[4] == 'F') || (attempt_4[0] == word[0] && attempt_4[0] == 'F') || (attempt_4[1] == word[1] && attempt_4[1] == 'F') || (attempt_4[2] == word[2] && attempt_4[2] == 'F') || (attempt_4[3] == word[3] && attempt_4[3] == 'F') || (attempt_4[4] == word[4] && attempt_4[4] == 'F') || (attempt_5[0] == word[0] && attempt_5[0] == 'F') || (attempt_5[1] == word[1] && attempt_5[1] == 'F') || (attempt_5[2] == word[2] && attempt_5[2] == 'F') || (attempt_5[3] == word[3] && attempt_5[3] == 'F') || (attempt_5[4] == word[4] && attempt_5[4] == 'F') || (attempt_6[0] == word[0] && attempt_6[0] == 'F') || (attempt_6[1] == word[1] && attempt_6[1] == 'F') || (attempt_6[2] == word[2] && attempt_6[2] == 'F') || (attempt_6[3] == word[3] && attempt_6[3] == 'F') || (attempt_6[4] == word[4] && attempt_6[4] == 'F'))
    {
        cout << " ";
        c1();
        cout << " F ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'F') || (attempt_1[0] == word[2] && word[2] == 'F') || (attempt_1[0] == word[3] && word[3] == 'F') || (attempt_1[0] == word[4] && word[4] == 'F') || (attempt_1[1] == word[0] && word[0] == 'F') || (attempt_1[1] == word[2] && word[2] == 'F') || (attempt_1[1] == word[3] && word[3] == 'F') || (attempt_1[1] == word[4] && word[4] == 'F') || (attempt_1[2] == word[1] && word[1] == 'F') || (attempt_1[2] == word[0] && word[0] == 'F') || (attempt_1[2] == word[3] && word[3] == 'F') || (attempt_1[2] == word[4] && word[4] == 'F') || (attempt_1[3] == word[1] && word[1] == 'F') || (attempt_1[3] == word[0] && word[0] == 'F') || (attempt_1[3] == word[2] && word[2] == 'F') || (attempt_1[3] == word[4] && word[4] == 'F') || (attempt_1[4] == word[1] && word[1] == 'F') || (attempt_1[4] == word[0] && word[0] == 'F') || (attempt_1[4] == word[3] && word[3] == 'F') || (attempt_1[4] == word[2] && word[2] == 'F') || (attempt_2[0] == word[1] && word[1] == 'F') || (attempt_2[0] == word[2] && word[2] == 'F') || (attempt_2[0] == word[3] && word[3] == 'F') || (attempt_2[0] == word[4] && word[4] == 'F') || (attempt_2[1] == word[0] && word[0] == 'F') || (attempt_2[1] == word[2] && word[2] == 'F') || (attempt_2[1] == word[3] && word[3] == 'F') || (attempt_2[1] == word[4] && word[4] == 'F') || (attempt_2[2] == word[1] && word[1] == 'F') || (attempt_2[2] == word[0] && word[0] == 'F') || (attempt_2[2] == word[3] && word[3] == 'F') || (attempt_2[2] == word[4] && word[4] == 'F') || (attempt_2[3] == word[1] && word[1] == 'F') || (attempt_2[3] == word[0] && word[0] == 'F') || (attempt_2[3] == word[2] && word[2] == 'F') || (attempt_2[3] == word[4] && word[4] == 'F') || (attempt_2[4] == word[1] && word[1] == 'F') || (attempt_2[4] == word[0] && word[0] == 'F') || (attempt_2[4] == word[3] && word[3] == 'F') || (attempt_2[4] == word[2] && word[2] == 'F') || (attempt_3[0] == word[1] && word[1] == 'F') || (attempt_3[0] == word[2] && word[2] == 'F') || (attempt_3[0] == word[3] && word[3] == 'F') || (attempt_3[0] == word[4] && word[4] == 'F') || (attempt_3[1] == word[0] && word[0] == 'F') || (attempt_3[1] == word[2] && word[2] == 'F') || (attempt_3[1] == word[3] && word[3] == 'F') || (attempt_3[1] == word[4] && word[4] == 'F') || (attempt_3[2] == word[1] && word[1] == 'F') || (attempt_3[2] == word[0] && word[0] == 'F') || (attempt_3[2] == word[3] && word[3] == 'F') || (attempt_3[2] == word[4] && word[4] == 'F') || (attempt_3[3] == word[1] && word[1] == 'F') || (attempt_3[3] == word[0] && word[0] == 'F') || (attempt_3[3] == word[2] && word[2] == 'F') || (attempt_3[3] == word[4] && word[4] == 'F') || (attempt_3[4] == word[1] && word[1] == 'F') || (attempt_3[4] == word[0] && word[0] == 'F') || (attempt_3[4] == word[3] && word[3] == 'F') || (attempt_3[4] == word[2] && word[2] == 'F') || (attempt_4[0] == word[1] && word[1] == 'F') || (attempt_4[0] == word[2] && word[2] == 'F') || (attempt_4[0] == word[3] && word[3] == 'F') || (attempt_4[0] == word[4] && word[4] == 'F') || (attempt_4[1] == word[0] && word[0] == 'F') || (attempt_4[1] == word[2] && word[2] == 'F') || (attempt_4[1] == word[3] && word[3] == 'F') || (attempt_4[1] == word[4] && word[4] == 'F') || (attempt_4[2] == word[1] && word[1] == 'F') || (attempt_4[2] == word[0] && word[0] == 'F') || (attempt_4[2] == word[3] && word[3] == 'F') || (attempt_4[2] == word[4] && word[4] == 'F') || (attempt_4[3] == word[1] && word[1] == 'F') || (attempt_4[3] == word[0] && word[0] == 'F') || (attempt_4[3] == word[2] && word[2] == 'F') || (attempt_4[3] == word[4] && word[4] == 'F') || (attempt_4[4] == word[1] && word[1] == 'F') || (attempt_4[4] == word[0] && word[0] == 'F') || (attempt_4[4] == word[3] && word[3] == 'F') || (attempt_4[4] == word[2] && word[2] == 'F') || (attempt_5[0] == word[1] && word[1] == 'F') || (attempt_5[0] == word[2] && word[2] == 'F') || (attempt_5[0] == word[3] && word[3] == 'F') || (attempt_5[0] == word[4] && word[4] == 'F') || (attempt_5[1] == word[0] && word[0] == 'F') || (attempt_5[1] == word[2] && word[2] == 'F') || (attempt_5[1] == word[3] && word[3] == 'F') || (attempt_5[1] == word[4] && word[4] == 'F') || (attempt_5[2] == word[1] && word[1] == 'F') || (attempt_5[2] == word[0] && word[0] == 'F') || (attempt_5[2] == word[3] && word[3] == 'F') || (attempt_5[2] == word[4] && word[4] == 'F') || (attempt_5[3] == word[1] && word[1] == 'F') || (attempt_5[3] == word[0] && word[0] == 'F') || (attempt_5[3] == word[2] && word[2] == 'F') || (attempt_5[3] == word[4] && word[4] == 'F') || (attempt_5[4] == word[1] && word[1] == 'F') || (attempt_5[4] == word[0] && word[0] == 'F') || (attempt_5[4] == word[3] && word[3] == 'F') || (attempt_5[4] == word[2] && word[2] == 'F') || (attempt_6[0] == word[1] && word[1] == 'F') || (attempt_6[0] == word[2] && word[2] == 'F') || (attempt_6[0] == word[3] && word[3] == 'F') || (attempt_6[0] == word[4] && word[4] == 'F') || (attempt_6[1] == word[0] && word[0] == 'F') || (attempt_6[1] == word[2] && word[2] == 'F') || (attempt_6[1] == word[3] && word[3] == 'F') || (attempt_6[1] == word[4] && word[4] == 'F') || (attempt_6[2] == word[1] && word[1] == 'F') || (attempt_6[2] == word[0] && word[0] == 'F') || (attempt_6[2] == word[3] && word[3] == 'F') || (attempt_6[2] == word[4] && word[4] == 'F') || (attempt_6[3] == word[1] && word[1] == 'F') || (attempt_6[3] == word[0] && word[0] == 'F') || (attempt_6[3] == word[2] && word[2] == 'F') || (attempt_6[3] == word[4] && word[4] == 'F') || (attempt_6[4] == word[1] && word[1] == 'F') || (attempt_6[4] == word[0] && word[0] == 'F') || (attempt_6[4] == word[3] && word[3] == 'F') || (attempt_6[4] == word[2] && word[2] == 'F'))
    {
        cout << " ";
        c2();
        cout << " F ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'F') || (attempt_1[0] != word[2] && attempt_1[0] == 'F') || (attempt_1[0] != word[3] && attempt_1[0] == 'F') || (attempt_1[0] != word[4] && attempt_1[0] == 'F') || (attempt_1[1] != word[0] && attempt_1[1] == 'F') || (attempt_1[1] != word[2] && attempt_1[1] == 'F') || (attempt_1[1] != word[3] && attempt_1[1] == 'F') || (attempt_1[1] != word[4] && attempt_1[1] == 'F') || (attempt_1[2] != word[1] && attempt_1[2] == 'F') || (attempt_1[2] != word[0] && attempt_1[2] == 'F') || (attempt_1[2] != word[3] && attempt_1[2] == 'F') || (attempt_1[2] != word[4] && attempt_1[2] == 'F') || (attempt_1[3] != word[1] && attempt_1[3] == 'F') || (attempt_1[3] != word[2] && attempt_1[3] == 'F') || (attempt_1[3] != word[0] && attempt_1[3] == 'F') || (attempt_1[3] != word[4] && attempt_1[3] == 'F') || (attempt_1[4] != word[1] && attempt_1[4] == 'F') || (attempt_1[4] != word[2] && attempt_1[4] == 'F') || (attempt_1[4] != word[3] && attempt_1[4] == 'F') || (attempt_1[4] != word[0] && attempt_1[4] == 'F') || (attempt_2[0] != word[1] && attempt_2[0] == 'F') || (attempt_2[0] != word[2] && attempt_2[0] == 'F') || (attempt_2[0] != word[3] && attempt_2[0] == 'F') || (attempt_2[0] != word[4] && attempt_2[0] == 'F') || (attempt_2[1] != word[0] && attempt_2[1] == 'F') || (attempt_2[1] != word[2] && attempt_2[1] == 'F') || (attempt_2[1] != word[3] && attempt_2[1] == 'F') || (attempt_2[1] != word[4] && attempt_2[1] == 'F') || (attempt_2[2] != word[1] && attempt_2[2] == 'F') || (attempt_2[2] != word[0] && attempt_2[2] == 'F') || (attempt_2[2] != word[3] && attempt_2[2] == 'F') || (attempt_2[2] != word[4] && attempt_2[2] == 'F') || (attempt_2[3] != word[1] && attempt_2[3] == 'F') || (attempt_2[3] != word[2] && attempt_2[3] == 'F') || (attempt_2[3] != word[0] && attempt_2[3] == 'F') || (attempt_2[3] != word[4] && attempt_2[3] == 'F') || (attempt_2[4] != word[1] && attempt_2[4] == 'F') || (attempt_2[4] != word[2] && attempt_2[4] == 'F') || (attempt_2[4] != word[3] && attempt_2[4] == 'F') || (attempt_2[4] != word[0] && attempt_2[4] == 'F') || (attempt_3[0] != word[1] && attempt_3[0] == 'F') || (attempt_3[0] != word[2] && attempt_3[0] == 'F') || (attempt_3[0] != word[3] && attempt_3[0] == 'F') || (attempt_3[0] != word[4] && attempt_3[0] == 'F') || (attempt_3[1] != word[0] && attempt_3[1] == 'F') || (attempt_3[1] != word[2] && attempt_3[1] == 'F') || (attempt_3[1] != word[3] && attempt_3[1] == 'F') || (attempt_3[1] != word[4] && attempt_3[1] == 'F') || (attempt_3[2] != word[1] && attempt_3[2] == 'F') || (attempt_3[2] != word[0] && attempt_3[2] == 'F') || (attempt_3[2] != word[3] && attempt_3[2] == 'F') || (attempt_3[2] != word[4] && attempt_3[2] == 'F') || (attempt_3[3] != word[1] && attempt_3[3] == 'F') || (attempt_3[3] != word[2] && attempt_3[3] == 'F') || (attempt_3[3] != word[0] && attempt_3[3] == 'F') || (attempt_3[3] != word[4] && attempt_3[3] == 'F') || (attempt_3[4] != word[1] && attempt_3[4] == 'F') || (attempt_3[4] != word[2] && attempt_3[4] == 'F') || (attempt_3[4] != word[3] && attempt_3[4] == 'F') || (attempt_3[4] != word[0] && attempt_3[4] == 'F') || (attempt_4[0] != word[1] && attempt_4[0] == 'F') || (attempt_4[0] != word[2] && attempt_4[0] == 'F') || (attempt_4[0] != word[3] && attempt_4[0] == 'F') || (attempt_4[0] != word[4] && attempt_4[0] == 'F') || (attempt_4[1] != word[0] && attempt_4[1] == 'F') || (attempt_4[1] != word[2] && attempt_4[1] == 'F') || (attempt_4[1] != word[3] && attempt_4[1] == 'F') || (attempt_4[1] != word[4] && attempt_4[1] == 'F') || (attempt_4[2] != word[1] && attempt_4[2] == 'F') || (attempt_4[2] != word[0] && attempt_4[2] == 'F') || (attempt_4[2] != word[3] && attempt_4[2] == 'F') || (attempt_4[2] != word[4] && attempt_4[2] == 'F') || (attempt_4[3] != word[1] && attempt_4[3] == 'F') || (attempt_4[3] != word[2] && attempt_4[3] == 'F') || (attempt_4[3] != word[0] && attempt_4[3] == 'F') || (attempt_4[3] != word[4] && attempt_4[3] == 'F') || (attempt_4[4] != word[1] && attempt_4[4] == 'F') || (attempt_4[4] != word[2] && attempt_4[4] == 'F') || (attempt_4[4] != word[3] && attempt_4[4] == 'F') || (attempt_4[4] != word[0] && attempt_4[4] == 'F') || (attempt_5[0] != word[1] && attempt_5[0] == 'F') || (attempt_5[0] != word[2] && attempt_5[0] == 'F') || (attempt_5[0] != word[3] && attempt_5[0] == 'F') || (attempt_5[0] != word[4] && attempt_5[0] == 'F') || (attempt_5[1] != word[0] && attempt_5[1] == 'F') || (attempt_5[1] != word[2] && attempt_5[1] == 'F') || (attempt_5[1] != word[3] && attempt_5[1] == 'F') || (attempt_5[1] != word[4] && attempt_5[1] == 'F') || (attempt_5[2] != word[1] && attempt_5[2] == 'F') || (attempt_5[2] != word[0] && attempt_5[2] == 'F') || (attempt_5[2] != word[3] && attempt_5[2] == 'F') || (attempt_5[2] != word[4] && attempt_5[2] == 'F') || (attempt_5[3] != word[1] && attempt_5[3] == 'F') || (attempt_5[3] != word[2] && attempt_5[3] == 'F') || (attempt_5[3] != word[0] && attempt_5[3] == 'F') || (attempt_5[3] != word[4] && attempt_5[3] == 'F') || (attempt_5[4] != word[1] && attempt_5[4] == 'F') || (attempt_5[4] != word[2] && attempt_5[4] == 'F') || (attempt_5[4] != word[3] && attempt_5[4] == 'F') || (attempt_5[4] != word[0] && attempt_5[4] == 'F') || (attempt_6[0] != word[1] && attempt_6[0] == 'F') || (attempt_6[0] != word[2] && attempt_6[0] == 'F') || (attempt_6[0] != word[3] && attempt_6[0] == 'F') || (attempt_6[0] != word[4] && attempt_6[0] == 'F') || (attempt_6[1] != word[0] && attempt_6[1] == 'F') || (attempt_6[1] != word[2] && attempt_6[1] == 'F') || (attempt_6[1] != word[3] && attempt_6[1] == 'F') || (attempt_6[1] != word[4] && attempt_6[1] == 'F') || (attempt_6[2] != word[1] && attempt_6[2] == 'F') || (attempt_6[2] != word[0] && attempt_6[2] == 'F') || (attempt_6[2] != word[3] && attempt_6[2] == 'F') || (attempt_6[2] != word[4] && attempt_6[2] == 'F') || (attempt_6[3] != word[1] && attempt_6[3] == 'F') || (attempt_6[3] != word[2] && attempt_6[3] == 'F') || (attempt_6[3] != word[0] && attempt_6[3] == 'F') || (attempt_6[3] != word[4] && attempt_6[3] == 'F') || (attempt_6[4] != word[1] && attempt_6[4] == 'F') || (attempt_6[4] != word[2] && attempt_6[4] == 'F') || (attempt_6[4] != word[3] && attempt_6[4] == 'F') || (attempt_6[4] != word[0] && attempt_6[4] == 'F'))
    {
        cout << " ";
        c3();
        cout << " F ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " F ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'G') || (attempt_1[1] == word[1] && attempt_1[1] == 'G') || (attempt_1[2] == word[2] && attempt_1[2] == 'G') || (attempt_1[3] == word[3] && attempt_1[3] == 'G') || (attempt_1[4] == word[4] && attempt_1[4] == 'G') || (attempt_2[0] == word[0] && attempt_2[0] == 'G') || (attempt_2[1] == word[1] && attempt_2[1] == 'G') || (attempt_2[2] == word[2] && attempt_2[2] == 'G') || (attempt_2[3] == word[3] && attempt_2[3] == 'G') || (attempt_2[4] == word[4] && attempt_2[4] == 'G') || (attempt_3[0] == word[0] && attempt_3[0] == 'G') || (attempt_3[1] == word[1] && attempt_3[1] == 'G') || (attempt_3[2] == word[2] && attempt_3[2] == 'G') || (attempt_3[3] == word[3] && attempt_3[3] == 'G') || (attempt_3[4] == word[4] && attempt_3[4] == 'G') || (attempt_4[0] == word[0] && attempt_4[0] == 'G') || (attempt_4[1] == word[1] && attempt_4[1] == 'G') || (attempt_4[2] == word[2] && attempt_4[2] == 'G') || (attempt_4[3] == word[3] && attempt_4[3] == 'G') || (attempt_4[4] == word[4] && attempt_4[4] == 'G') || (attempt_5[0] == word[0] && attempt_5[0] == 'G') || (attempt_5[1] == word[1] && attempt_5[1] == 'G') || (attempt_5[2] == word[2] && attempt_5[2] == 'G') || (attempt_5[3] == word[3] && attempt_5[3] == 'G') || (attempt_5[4] == word[4] && attempt_5[4] == 'G') || (attempt_6[0] == word[0] && attempt_6[0] == 'G') || (attempt_6[1] == word[1] && attempt_6[1] == 'G') || (attempt_6[2] == word[2] && attempt_6[2] == 'G') || (attempt_6[3] == word[3] && attempt_6[3] == 'G') || (attempt_6[4] == word[4] && attempt_6[4] == 'G'))
    {
        cout << " ";
        c1();
        cout << " G ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'G') || (attempt_1[0] == word[2] && word[2] == 'G') || (attempt_1[0] == word[3] && word[3] == 'G') || (attempt_1[0] == word[4] && word[4] == 'G') || (attempt_1[1] == word[0] && word[0] == 'G') || (attempt_1[1] == word[2] && word[2] == 'G') || (attempt_1[1] == word[3] && word[3] == 'G') || (attempt_1[1] == word[4] && word[4] == 'G') || (attempt_1[2] == word[1] && word[1] == 'G') || (attempt_1[2] == word[0] && word[0] == 'G') || (attempt_1[2] == word[3] && word[3] == 'G') || (attempt_1[2] == word[4] && word[4] == 'G') || (attempt_1[3] == word[1] && word[1] == 'G') || (attempt_1[3] == word[0] && word[0] == 'G') || (attempt_1[3] == word[2] && word[2] == 'G') || (attempt_1[3] == word[4] && word[4] == 'G') || (attempt_1[4] == word[1] && word[1] == 'G') || (attempt_1[4] == word[0] && word[0] == 'G') || (attempt_1[4] == word[3] && word[3] == 'G') || (attempt_1[4] == word[2] && word[2] == 'G') || (attempt_2[0] == word[1] && word[1] == 'G') || (attempt_2[0] == word[2] && word[2] == 'G') || (attempt_2[0] == word[3] && word[3] == 'G') || (attempt_2[0] == word[4] && word[4] == 'G') || (attempt_2[1] == word[0] && word[0] == 'G') || (attempt_2[1] == word[2] && word[2] == 'G') || (attempt_2[1] == word[3] && word[3] == 'G') || (attempt_2[1] == word[4] && word[4] == 'G') || (attempt_2[2] == word[1] && word[1] == 'G') || (attempt_2[2] == word[0] && word[0] == 'G') || (attempt_2[2] == word[3] && word[3] == 'G') || (attempt_2[2] == word[4] && word[4] == 'G') || (attempt_2[3] == word[1] && word[1] == 'G') || (attempt_2[3] == word[0] && word[0] == 'G') || (attempt_2[3] == word[2] && word[2] == 'G') || (attempt_2[3] == word[4] && word[4] == 'G') || (attempt_2[4] == word[1] && word[1] == 'G') || (attempt_2[4] == word[0] && word[0] == 'G') || (attempt_2[4] == word[3] && word[3] == 'G') || (attempt_2[4] == word[2] && word[2] == 'G') || (attempt_3[0] == word[1] && word[1] == 'G') || (attempt_3[0] == word[2] && word[2] == 'G') || (attempt_3[0] == word[3] && word[3] == 'G') || (attempt_3[0] == word[4] && word[4] == 'G') || (attempt_3[1] == word[0] && word[0] == 'G') || (attempt_3[1] == word[2] && word[2] == 'G') || (attempt_3[1] == word[3] && word[3] == 'G') || (attempt_3[1] == word[4] && word[4] == 'G') || (attempt_3[2] == word[1] && word[1] == 'G') || (attempt_3[2] == word[0] && word[0] == 'G') || (attempt_3[2] == word[3] && word[3] == 'G') || (attempt_3[2] == word[4] && word[4] == 'G') || (attempt_3[3] == word[1] && word[1] == 'G') || (attempt_3[3] == word[0] && word[0] == 'G') || (attempt_3[3] == word[2] && word[2] == 'G') || (attempt_3[3] == word[4] && word[4] == 'G') || (attempt_3[4] == word[1] && word[1] == 'G') || (attempt_3[4] == word[0] && word[0] == 'G') || (attempt_3[4] == word[3] && word[3] == 'G') || (attempt_3[4] == word[2] && word[2] == 'G') || (attempt_4[0] == word[1] && word[1] == 'G') || (attempt_4[0] == word[2] && word[2] == 'G') || (attempt_4[0] == word[3] && word[3] == 'G') || (attempt_4[0] == word[4] && word[4] == 'G') || (attempt_4[1] == word[0] && word[0] == 'G') || (attempt_4[1] == word[2] && word[2] == 'G') || (attempt_4[1] == word[3] && word[3] == 'G') || (attempt_4[1] == word[4] && word[4] == 'G') || (attempt_4[2] == word[1] && word[1] == 'G') || (attempt_4[2] == word[0] && word[0] == 'G') || (attempt_4[2] == word[3] && word[3] == 'G') || (attempt_4[2] == word[4] && word[4] == 'G') || (attempt_4[3] == word[1] && word[1] == 'G') || (attempt_4[3] == word[0] && word[0] == 'G') || (attempt_4[3] == word[2] && word[2] == 'G') || (attempt_4[3] == word[4] && word[4] == 'G') || (attempt_4[4] == word[1] && word[1] == 'G') || (attempt_4[4] == word[0] && word[0] == 'G') || (attempt_4[4] == word[3] && word[3] == 'G') || (attempt_4[4] == word[2] && word[2] == 'G') || (attempt_5[0] == word[1] && word[1] == 'G') || (attempt_5[0] == word[2] && word[2] == 'G') || (attempt_5[0] == word[3] && word[3] == 'G') || (attempt_5[0] == word[4] && word[4] == 'G') || (attempt_5[1] == word[0] && word[0] == 'G') || (attempt_5[1] == word[2] && word[2] == 'G') || (attempt_5[1] == word[3] && word[3] == 'G') || (attempt_5[1] == word[4] && word[4] == 'G') || (attempt_5[2] == word[1] && word[1] == 'G') || (attempt_5[2] == word[0] && word[0] == 'G') || (attempt_5[2] == word[3] && word[3] == 'G') || (attempt_5[2] == word[4] && word[4] == 'G') || (attempt_5[3] == word[1] && word[1] == 'G') || (attempt_5[3] == word[0] && word[0] == 'G') || (attempt_5[3] == word[2] && word[2] == 'G') || (attempt_5[3] == word[4] && word[4] == 'G') || (attempt_5[4] == word[1] && word[1] == 'G') || (attempt_5[4] == word[0] && word[0] == 'G') || (attempt_5[4] == word[3] && word[3] == 'G') || (attempt_5[4] == word[2] && word[2] == 'G') || (attempt_6[0] == word[1] && word[1] == 'G') || (attempt_6[0] == word[2] && word[2] == 'G') || (attempt_6[0] == word[3] && word[3] == 'G') || (attempt_6[0] == word[4] && word[4] == 'G') || (attempt_6[1] == word[0] && word[0] == 'G') || (attempt_6[1] == word[2] && word[2] == 'G') || (attempt_6[1] == word[3] && word[3] == 'G') || (attempt_6[1] == word[4] && word[4] == 'G') || (attempt_6[2] == word[1] && word[1] == 'G') || (attempt_6[2] == word[0] && word[0] == 'G') || (attempt_6[2] == word[3] && word[3] == 'G') || (attempt_6[2] == word[4] && word[4] == 'G') || (attempt_6[3] == word[1] && word[1] == 'G') || (attempt_6[3] == word[0] && word[0] == 'G') || (attempt_6[3] == word[2] && word[2] == 'G') || (attempt_6[3] == word[4] && word[4] == 'G') || (attempt_6[4] == word[1] && word[1] == 'G') || (attempt_6[4] == word[0] && word[0] == 'G') || (attempt_6[4] == word[3] && word[3] == 'G') || (attempt_6[4] == word[2] && word[2] == 'G'))
    {
        cout << " ";
        c2();
        cout << " G ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'G') || (attempt_1[0] != word[2] && attempt_1[0] == 'G') || (attempt_1[0] != word[3] && attempt_1[0] == 'G') || (attempt_1[0] != word[4] && attempt_1[0] == 'G') || (attempt_1[1] != word[0] && attempt_1[1] == 'G') || (attempt_1[1] != word[2] && attempt_1[1] == 'G') || (attempt_1[1] != word[3] && attempt_1[1] == 'G') || (attempt_1[1] != word[4] && attempt_1[1] == 'G') || (attempt_1[2] != word[1] && attempt_1[2] == 'G') || (attempt_1[2] != word[0] && attempt_1[2] == 'G') || (attempt_1[2] != word[3] && attempt_1[2] == 'G') || (attempt_1[2] != word[4] && attempt_1[2] == 'G') || (attempt_1[3] != word[1] && attempt_1[3] == 'G') || (attempt_1[3] != word[2] && attempt_1[3] == 'G') || (attempt_1[3] != word[0] && attempt_1[3] == 'G') || (attempt_1[3] != word[4] && attempt_1[3] == 'G') || (attempt_1[4] != word[1] && attempt_1[4] == 'G') || (attempt_1[4] != word[2] && attempt_1[4] == 'G') || (attempt_1[4] != word[3] && attempt_1[4] == 'G') || (attempt_1[4] != word[0] && attempt_1[4] == 'G') || (attempt_2[0] != word[1] && attempt_2[0] == 'G') || (attempt_2[0] != word[2] && attempt_2[0] == 'G') || (attempt_2[0] != word[3] && attempt_2[0] == 'G') || (attempt_2[0] != word[4] && attempt_2[0] == 'G') || (attempt_2[1] != word[0] && attempt_2[1] == 'G') || (attempt_2[1] != word[2] && attempt_2[1] == 'G') || (attempt_2[1] != word[3] && attempt_2[1] == 'G') || (attempt_2[1] != word[4] && attempt_2[1] == 'G') || (attempt_2[2] != word[1] && attempt_2[2] == 'G') || (attempt_2[2] != word[0] && attempt_2[2] == 'G') || (attempt_2[2] != word[3] && attempt_2[2] == 'G') || (attempt_2[2] != word[4] && attempt_2[2] == 'G') || (attempt_2[3] != word[1] && attempt_2[3] == 'G') || (attempt_2[3] != word[2] && attempt_2[3] == 'G') || (attempt_2[3] != word[0] && attempt_2[3] == 'G') || (attempt_2[3] != word[4] && attempt_2[3] == 'G') || (attempt_2[4] != word[1] && attempt_2[4] == 'G') || (attempt_2[4] != word[2] && attempt_2[4] == 'G') || (attempt_2[4] != word[3] && attempt_2[4] == 'G') || (attempt_2[4] != word[0] && attempt_2[4] == 'G') || (attempt_3[0] != word[1] && attempt_3[0] == 'G') || (attempt_3[0] != word[2] && attempt_3[0] == 'G') || (attempt_3[0] != word[3] && attempt_3[0] == 'G') || (attempt_3[0] != word[4] && attempt_3[0] == 'G') || (attempt_3[1] != word[0] && attempt_3[1] == 'G') || (attempt_3[1] != word[2] && attempt_3[1] == 'G') || (attempt_3[1] != word[3] && attempt_3[1] == 'G') || (attempt_3[1] != word[4] && attempt_3[1] == 'G') || (attempt_3[2] != word[1] && attempt_3[2] == 'G') || (attempt_3[2] != word[0] && attempt_3[2] == 'G') || (attempt_3[2] != word[3] && attempt_3[2] == 'G') || (attempt_3[2] != word[4] && attempt_3[2] == 'G') || (attempt_3[3] != word[1] && attempt_3[3] == 'G') || (attempt_3[3] != word[2] && attempt_3[3] == 'G') || (attempt_3[3] != word[0] && attempt_3[3] == 'G') || (attempt_3[3] != word[4] && attempt_3[3] == 'G') || (attempt_3[4] != word[1] && attempt_3[4] == 'G') || (attempt_3[4] != word[2] && attempt_3[4] == 'G') || (attempt_3[4] != word[3] && attempt_3[4] == 'G') || (attempt_3[4] != word[0] && attempt_3[4] == 'G') || (attempt_4[0] != word[1] && attempt_4[0] == 'G') || (attempt_4[0] != word[2] && attempt_4[0] == 'G') || (attempt_4[0] != word[3] && attempt_4[0] == 'G') || (attempt_4[0] != word[4] && attempt_4[0] == 'G') || (attempt_4[1] != word[0] && attempt_4[1] == 'G') || (attempt_4[1] != word[2] && attempt_4[1] == 'G') || (attempt_4[1] != word[3] && attempt_4[1] == 'G') || (attempt_4[1] != word[4] && attempt_4[1] == 'G') || (attempt_4[2] != word[1] && attempt_4[2] == 'G') || (attempt_4[2] != word[0] && attempt_4[2] == 'G') || (attempt_4[2] != word[3] && attempt_4[2] == 'G') || (attempt_4[2] != word[4] && attempt_4[2] == 'G') || (attempt_4[3] != word[1] && attempt_4[3] == 'G') || (attempt_4[3] != word[2] && attempt_4[3] == 'G') || (attempt_4[3] != word[0] && attempt_4[3] == 'G') || (attempt_4[3] != word[4] && attempt_4[3] == 'G') || (attempt_4[4] != word[1] && attempt_4[4] == 'G') || (attempt_4[4] != word[2] && attempt_4[4] == 'G') || (attempt_4[4] != word[3] && attempt_4[4] == 'G') || (attempt_4[4] != word[0] && attempt_4[4] == 'G') || (attempt_5[0] != word[1] && attempt_5[0] == 'G') || (attempt_5[0] != word[2] && attempt_5[0] == 'G') || (attempt_5[0] != word[3] && attempt_5[0] == 'G') || (attempt_5[0] != word[4] && attempt_5[0] == 'G') || (attempt_5[1] != word[0] && attempt_5[1] == 'G') || (attempt_5[1] != word[2] && attempt_5[1] == 'G') || (attempt_5[1] != word[3] && attempt_5[1] == 'G') || (attempt_5[1] != word[4] && attempt_5[1] == 'G') || (attempt_5[2] != word[1] && attempt_5[2] == 'G') || (attempt_5[2] != word[0] && attempt_5[2] == 'G') || (attempt_5[2] != word[3] && attempt_5[2] == 'G') || (attempt_5[2] != word[4] && attempt_5[2] == 'G') || (attempt_5[3] != word[1] && attempt_5[3] == 'G') || (attempt_5[3] != word[2] && attempt_5[3] == 'G') || (attempt_5[3] != word[0] && attempt_5[3] == 'G') || (attempt_5[3] != word[4] && attempt_5[3] == 'G') || (attempt_5[4] != word[1] && attempt_5[4] == 'G') || (attempt_5[4] != word[2] && attempt_5[4] == 'G') || (attempt_5[4] != word[3] && attempt_5[4] == 'G') || (attempt_5[4] != word[0] && attempt_5[4] == 'G') || (attempt_6[0] != word[1] && attempt_6[0] == 'G') || (attempt_6[0] != word[2] && attempt_6[0] == 'G') || (attempt_6[0] != word[3] && attempt_6[0] == 'G') || (attempt_6[0] != word[4] && attempt_6[0] == 'G') || (attempt_6[1] != word[0] && attempt_6[1] == 'G') || (attempt_6[1] != word[2] && attempt_6[1] == 'G') || (attempt_6[1] != word[3] && attempt_6[1] == 'G') || (attempt_6[1] != word[4] && attempt_6[1] == 'G') || (attempt_6[2] != word[1] && attempt_6[2] == 'G') || (attempt_6[2] != word[0] && attempt_6[2] == 'G') || (attempt_6[2] != word[3] && attempt_6[2] == 'G') || (attempt_6[2] != word[4] && attempt_6[2] == 'G') || (attempt_6[3] != word[1] && attempt_6[3] == 'G') || (attempt_6[3] != word[2] && attempt_6[3] == 'G') || (attempt_6[3] != word[0] && attempt_6[3] == 'G') || (attempt_6[3] != word[4] && attempt_6[3] == 'G') || (attempt_6[4] != word[1] && attempt_6[4] == 'G') || (attempt_6[4] != word[2] && attempt_6[4] == 'G') || (attempt_6[4] != word[3] && attempt_6[4] == 'G') || (attempt_6[4] != word[0] && attempt_6[4] == 'G'))
    {
        cout << " ";
        c3();
        cout << " G ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " G ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'H') || (attempt_1[1] == word[1] && attempt_1[1] == 'H') || (attempt_1[2] == word[2] && attempt_1[2] == 'H') || (attempt_1[3] == word[3] && attempt_1[3] == 'H') || (attempt_1[4] == word[4] && attempt_1[4] == 'H') || (attempt_2[0] == word[0] && attempt_2[0] == 'H') || (attempt_2[1] == word[1] && attempt_2[1] == 'H') || (attempt_2[2] == word[2] && attempt_2[2] == 'H') || (attempt_2[3] == word[3] && attempt_2[3] == 'H') || (attempt_2[4] == word[4] && attempt_2[4] == 'H') || (attempt_3[0] == word[0] && attempt_3[0] == 'H') || (attempt_3[1] == word[1] && attempt_3[1] == 'H') || (attempt_3[2] == word[2] && attempt_3[2] == 'H') || (attempt_3[3] == word[3] && attempt_3[3] == 'H') || (attempt_3[4] == word[4] && attempt_3[4] == 'H') || (attempt_4[0] == word[0] && attempt_4[0] == 'H') || (attempt_4[1] == word[1] && attempt_4[1] == 'H') || (attempt_4[2] == word[2] && attempt_4[2] == 'H') || (attempt_4[3] == word[3] && attempt_4[3] == 'H') || (attempt_4[4] == word[4] && attempt_4[4] == 'H') || (attempt_5[0] == word[0] && attempt_5[0] == 'H') || (attempt_5[1] == word[1] && attempt_5[1] == 'H') || (attempt_5[2] == word[2] && attempt_5[2] == 'H') || (attempt_5[3] == word[3] && attempt_5[3] == 'H') || (attempt_5[4] == word[4] && attempt_5[4] == 'H') || (attempt_6[0] == word[0] && attempt_6[0] == 'H') || (attempt_6[1] == word[1] && attempt_6[1] == 'H') || (attempt_6[2] == word[2] && attempt_6[2] == 'H') || (attempt_6[3] == word[3] && attempt_6[3] == 'H') || (attempt_6[4] == word[4] && attempt_6[4] == 'H'))
    {
        cout << " ";
        c1();
        cout << " H ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'H') || (attempt_1[0] == word[2] && word[2] == 'H') || (attempt_1[0] == word[3] && word[3] == 'H') || (attempt_1[0] == word[4] && word[4] == 'H') || (attempt_1[1] == word[0] && word[0] == 'H') || (attempt_1[1] == word[2] && word[2] == 'H') || (attempt_1[1] == word[3] && word[3] == 'H') || (attempt_1[1] == word[4] && word[4] == 'H') || (attempt_1[2] == word[1] && word[1] == 'H') || (attempt_1[2] == word[0] && word[0] == 'H') || (attempt_1[2] == word[3] && word[3] == 'H') || (attempt_1[2] == word[4] && word[4] == 'H') || (attempt_1[3] == word[1] && word[1] == 'H') || (attempt_1[3] == word[0] && word[0] == 'H') || (attempt_1[3] == word[2] && word[2] == 'H') || (attempt_1[3] == word[4] && word[4] == 'H') || (attempt_1[4] == word[1] && word[1] == 'H') || (attempt_1[4] == word[0] && word[0] == 'H') || (attempt_1[4] == word[3] && word[3] == 'H') || (attempt_1[4] == word[2] && word[2] == 'H') || (attempt_2[0] == word[1] && word[1] == 'H') || (attempt_2[0] == word[2] && word[2] == 'H') || (attempt_2[0] == word[3] && word[3] == 'H') || (attempt_2[0] == word[4] && word[4] == 'H') || (attempt_2[1] == word[0] && word[0] == 'H') || (attempt_2[1] == word[2] && word[2] == 'H') || (attempt_2[1] == word[3] && word[3] == 'H') || (attempt_2[1] == word[4] && word[4] == 'H') || (attempt_2[2] == word[1] && word[1] == 'H') || (attempt_2[2] == word[0] && word[0] == 'H') || (attempt_2[2] == word[3] && word[3] == 'H') || (attempt_2[2] == word[4] && word[4] == 'H') || (attempt_2[3] == word[1] && word[1] == 'H') || (attempt_2[3] == word[0] && word[0] == 'H') || (attempt_2[3] == word[2] && word[2] == 'H') || (attempt_2[3] == word[4] && word[4] == 'H') || (attempt_2[4] == word[1] && word[1] == 'H') || (attempt_2[4] == word[0] && word[0] == 'H') || (attempt_2[4] == word[3] && word[3] == 'H') || (attempt_2[4] == word[2] && word[2] == 'H') || (attempt_3[0] == word[1] && word[1] == 'H') || (attempt_3[0] == word[2] && word[2] == 'H') || (attempt_3[0] == word[3] && word[3] == 'H') || (attempt_3[0] == word[4] && word[4] == 'H') || (attempt_3[1] == word[0] && word[0] == 'H') || (attempt_3[1] == word[2] && word[2] == 'H') || (attempt_3[1] == word[3] && word[3] == 'H') || (attempt_3[1] == word[4] && word[4] == 'H') || (attempt_3[2] == word[1] && word[1] == 'H') || (attempt_3[2] == word[0] && word[0] == 'H') || (attempt_3[2] == word[3] && word[3] == 'H') || (attempt_3[2] == word[4] && word[4] == 'H') || (attempt_3[3] == word[1] && word[1] == 'H') || (attempt_3[3] == word[0] && word[0] == 'H') || (attempt_3[3] == word[2] && word[2] == 'H') || (attempt_3[3] == word[4] && word[4] == 'H') || (attempt_3[4] == word[1] && word[1] == 'H') || (attempt_3[4] == word[0] && word[0] == 'H') || (attempt_3[4] == word[3] && word[3] == 'H') || (attempt_3[4] == word[2] && word[2] == 'H') || (attempt_4[0] == word[1] && word[1] == 'H') || (attempt_4[0] == word[2] && word[2] == 'H') || (attempt_4[0] == word[3] && word[3] == 'H') || (attempt_4[0] == word[4] && word[4] == 'H') || (attempt_4[1] == word[0] && word[0] == 'H') || (attempt_4[1] == word[2] && word[2] == 'H') || (attempt_4[1] == word[3] && word[3] == 'H') || (attempt_4[1] == word[4] && word[4] == 'H') || (attempt_4[2] == word[1] && word[1] == 'H') || (attempt_4[2] == word[0] && word[0] == 'H') || (attempt_4[2] == word[3] && word[3] == 'H') || (attempt_4[2] == word[4] && word[4] == 'H') || (attempt_4[3] == word[1] && word[1] == 'H') || (attempt_4[3] == word[0] && word[0] == 'H') || (attempt_4[3] == word[2] && word[2] == 'H') || (attempt_4[3] == word[4] && word[4] == 'H') || (attempt_4[4] == word[1] && word[1] == 'H') || (attempt_4[4] == word[0] && word[0] == 'H') || (attempt_4[4] == word[3] && word[3] == 'H') || (attempt_4[4] == word[2] && word[2] == 'H') || (attempt_5[0] == word[1] && word[1] == 'H') || (attempt_5[0] == word[2] && word[2] == 'H') || (attempt_5[0] == word[3] && word[3] == 'H') || (attempt_5[0] == word[4] && word[4] == 'H') || (attempt_5[1] == word[0] && word[0] == 'H') || (attempt_5[1] == word[2] && word[2] == 'H') || (attempt_5[1] == word[3] && word[3] == 'H') || (attempt_5[1] == word[4] && word[4] == 'H') || (attempt_5[2] == word[1] && word[1] == 'H') || (attempt_5[2] == word[0] && word[0] == 'H') || (attempt_5[2] == word[3] && word[3] == 'H') || (attempt_5[2] == word[4] && word[4] == 'H') || (attempt_5[3] == word[1] && word[1] == 'H') || (attempt_5[3] == word[0] && word[0] == 'H') || (attempt_5[3] == word[2] && word[2] == 'H') || (attempt_5[3] == word[4] && word[4] == 'H') || (attempt_5[4] == word[1] && word[1] == 'H') || (attempt_5[4] == word[0] && word[0] == 'H') || (attempt_5[4] == word[3] && word[3] == 'H') || (attempt_5[4] == word[2] && word[2] == 'H') || (attempt_6[0] == word[1] && word[1] == 'H') || (attempt_6[0] == word[2] && word[2] == 'H') || (attempt_6[0] == word[3] && word[3] == 'H') || (attempt_6[0] == word[4] && word[4] == 'H') || (attempt_6[1] == word[0] && word[0] == 'H') || (attempt_6[1] == word[2] && word[2] == 'H') || (attempt_6[1] == word[3] && word[3] == 'H') || (attempt_6[1] == word[4] && word[4] == 'H') || (attempt_6[2] == word[1] && word[1] == 'H') || (attempt_6[2] == word[0] && word[0] == 'H') || (attempt_6[2] == word[3] && word[3] == 'H') || (attempt_6[2] == word[4] && word[4] == 'H') || (attempt_6[3] == word[1] && word[1] == 'H') || (attempt_6[3] == word[0] && word[0] == 'H') || (attempt_6[3] == word[2] && word[2] == 'H') || (attempt_6[3] == word[4] && word[4] == 'H') || (attempt_6[4] == word[1] && word[1] == 'H') || (attempt_6[4] == word[0] && word[0] == 'H') || (attempt_6[4] == word[3] && word[3] == 'H') || (attempt_6[4] == word[2] && word[2] == 'H'))
    {
        cout << " ";
        c2();
        cout << " H ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'H') || (attempt_1[0] != word[2] && attempt_1[0] == 'H') || (attempt_1[0] != word[3] && attempt_1[0] == 'H') || (attempt_1[0] != word[4] && attempt_1[0] == 'H') || (attempt_1[1] != word[0] && attempt_1[1] == 'H') || (attempt_1[1] != word[2] && attempt_1[1] == 'H') || (attempt_1[1] != word[3] && attempt_1[1] == 'H') || (attempt_1[1] != word[4] && attempt_1[1] == 'H') || (attempt_1[2] != word[1] && attempt_1[2] == 'H') || (attempt_1[2] != word[0] && attempt_1[2] == 'H') || (attempt_1[2] != word[3] && attempt_1[2] == 'H') || (attempt_1[2] != word[4] && attempt_1[2] == 'H') || (attempt_1[3] != word[1] && attempt_1[3] == 'H') || (attempt_1[3] != word[2] && attempt_1[3] == 'H') || (attempt_1[3] != word[0] && attempt_1[3] == 'H') || (attempt_1[3] != word[4] && attempt_1[3] == 'H') || (attempt_1[4] != word[1] && attempt_1[4] == 'H') || (attempt_1[4] != word[2] && attempt_1[4] == 'H') || (attempt_1[4] != word[3] && attempt_1[4] == 'H') || (attempt_1[4] != word[0] && attempt_1[4] == 'H') || (attempt_2[0] != word[1] && attempt_2[0] == 'H') || (attempt_2[0] != word[2] && attempt_2[0] == 'H') || (attempt_2[0] != word[3] && attempt_2[0] == 'H') || (attempt_2[0] != word[4] && attempt_2[0] == 'H') || (attempt_2[1] != word[0] && attempt_2[1] == 'H') || (attempt_2[1] != word[2] && attempt_2[1] == 'H') || (attempt_2[1] != word[3] && attempt_2[1] == 'H') || (attempt_2[1] != word[4] && attempt_2[1] == 'H') || (attempt_2[2] != word[1] && attempt_2[2] == 'H') || (attempt_2[2] != word[0] && attempt_2[2] == 'H') || (attempt_2[2] != word[3] && attempt_2[2] == 'H') || (attempt_2[2] != word[4] && attempt_2[2] == 'H') || (attempt_2[3] != word[1] && attempt_2[3] == 'H') || (attempt_2[3] != word[2] && attempt_2[3] == 'H') || (attempt_2[3] != word[0] && attempt_2[3] == 'H') || (attempt_2[3] != word[4] && attempt_2[3] == 'H') || (attempt_2[4] != word[1] && attempt_2[4] == 'H') || (attempt_2[4] != word[2] && attempt_2[4] == 'H') || (attempt_2[4] != word[3] && attempt_2[4] == 'H') || (attempt_2[4] != word[0] && attempt_2[4] == 'H') || (attempt_3[0] != word[1] && attempt_3[0] == 'H') || (attempt_3[0] != word[2] && attempt_3[0] == 'H') || (attempt_3[0] != word[3] && attempt_3[0] == 'H') || (attempt_3[0] != word[4] && attempt_3[0] == 'H') || (attempt_3[1] != word[0] && attempt_3[1] == 'H') || (attempt_3[1] != word[2] && attempt_3[1] == 'H') || (attempt_3[1] != word[3] && attempt_3[1] == 'H') || (attempt_3[1] != word[4] && attempt_3[1] == 'H') || (attempt_3[2] != word[1] && attempt_3[2] == 'H') || (attempt_3[2] != word[0] && attempt_3[2] == 'H') || (attempt_3[2] != word[3] && attempt_3[2] == 'H') || (attempt_3[2] != word[4] && attempt_3[2] == 'H') || (attempt_3[3] != word[1] && attempt_3[3] == 'H') || (attempt_3[3] != word[2] && attempt_3[3] == 'H') || (attempt_3[3] != word[0] && attempt_3[3] == 'H') || (attempt_3[3] != word[4] && attempt_3[3] == 'H') || (attempt_3[4] != word[1] && attempt_3[4] == 'H') || (attempt_3[4] != word[2] && attempt_3[4] == 'H') || (attempt_3[4] != word[3] && attempt_3[4] == 'H') || (attempt_3[4] != word[0] && attempt_3[4] == 'H') || (attempt_4[0] != word[1] && attempt_4[0] == 'H') || (attempt_4[0] != word[2] && attempt_4[0] == 'H') || (attempt_4[0] != word[3] && attempt_4[0] == 'H') || (attempt_4[0] != word[4] && attempt_4[0] == 'H') || (attempt_4[1] != word[0] && attempt_4[1] == 'H') || (attempt_4[1] != word[2] && attempt_4[1] == 'H') || (attempt_4[1] != word[3] && attempt_4[1] == 'H') || (attempt_4[1] != word[4] && attempt_4[1] == 'H') || (attempt_4[2] != word[1] && attempt_4[2] == 'H') || (attempt_4[2] != word[0] && attempt_4[2] == 'H') || (attempt_4[2] != word[3] && attempt_4[2] == 'H') || (attempt_4[2] != word[4] && attempt_4[2] == 'H') || (attempt_4[3] != word[1] && attempt_4[3] == 'H') || (attempt_4[3] != word[2] && attempt_4[3] == 'H') || (attempt_4[3] != word[0] && attempt_4[3] == 'H') || (attempt_4[3] != word[4] && attempt_4[3] == 'H') || (attempt_4[4] != word[1] && attempt_4[4] == 'H') || (attempt_4[4] != word[2] && attempt_4[4] == 'H') || (attempt_4[4] != word[3] && attempt_4[4] == 'H') || (attempt_4[4] != word[0] && attempt_4[4] == 'H') || (attempt_5[0] != word[1] && attempt_5[0] == 'H') || (attempt_5[0] != word[2] && attempt_5[0] == 'H') || (attempt_5[0] != word[3] && attempt_5[0] == 'H') || (attempt_5[0] != word[4] && attempt_5[0] == 'H') || (attempt_5[1] != word[0] && attempt_5[1] == 'H') || (attempt_5[1] != word[2] && attempt_5[1] == 'H') || (attempt_5[1] != word[3] && attempt_5[1] == 'H') || (attempt_5[1] != word[4] && attempt_5[1] == 'H') || (attempt_5[2] != word[1] && attempt_5[2] == 'H') || (attempt_5[2] != word[0] && attempt_5[2] == 'H') || (attempt_5[2] != word[3] && attempt_5[2] == 'H') || (attempt_5[2] != word[4] && attempt_5[2] == 'H') || (attempt_5[3] != word[1] && attempt_5[3] == 'H') || (attempt_5[3] != word[2] && attempt_5[3] == 'H') || (attempt_5[3] != word[0] && attempt_5[3] == 'H') || (attempt_5[3] != word[4] && attempt_5[3] == 'H') || (attempt_5[4] != word[1] && attempt_5[4] == 'H') || (attempt_5[4] != word[2] && attempt_5[4] == 'H') || (attempt_5[4] != word[3] && attempt_5[4] == 'H') || (attempt_5[4] != word[0] && attempt_5[4] == 'H') || (attempt_6[0] != word[1] && attempt_6[0] == 'H') || (attempt_6[0] != word[2] && attempt_6[0] == 'H') || (attempt_6[0] != word[3] && attempt_6[0] == 'H') || (attempt_6[0] != word[4] && attempt_6[0] == 'H') || (attempt_6[1] != word[0] && attempt_6[1] == 'H') || (attempt_6[1] != word[2] && attempt_6[1] == 'H') || (attempt_6[1] != word[3] && attempt_6[1] == 'H') || (attempt_6[1] != word[4] && attempt_6[1] == 'H') || (attempt_6[2] != word[1] && attempt_6[2] == 'H') || (attempt_6[2] != word[0] && attempt_6[2] == 'H') || (attempt_6[2] != word[3] && attempt_6[2] == 'H') || (attempt_6[2] != word[4] && attempt_6[2] == 'H') || (attempt_6[3] != word[1] && attempt_6[3] == 'H') || (attempt_6[3] != word[2] && attempt_6[3] == 'H') || (attempt_6[3] != word[0] && attempt_6[3] == 'H') || (attempt_6[3] != word[4] && attempt_6[3] == 'H') || (attempt_6[4] != word[1] && attempt_6[4] == 'H') || (attempt_6[4] != word[2] && attempt_6[4] == 'H') || (attempt_6[4] != word[3] && attempt_6[4] == 'H') || (attempt_6[4] != word[0] && attempt_6[4] == 'H'))
    {
        cout << " ";
        c3();
        cout << " H ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " H ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'J') || (attempt_1[1] == word[1] && attempt_1[1] == 'J') || (attempt_1[2] == word[2] && attempt_1[2] == 'J') || (attempt_1[3] == word[3] && attempt_1[3] == 'J') || (attempt_1[4] == word[4] && attempt_1[4] == 'J') || (attempt_2[0] == word[0] && attempt_2[0] == 'J') || (attempt_2[1] == word[1] && attempt_2[1] == 'J') || (attempt_2[2] == word[2] && attempt_2[2] == 'J') || (attempt_2[3] == word[3] && attempt_2[3] == 'J') || (attempt_2[4] == word[4] && attempt_2[4] == 'J') || (attempt_3[0] == word[0] && attempt_3[0] == 'J') || (attempt_3[1] == word[1] && attempt_3[1] == 'J') || (attempt_3[2] == word[2] && attempt_3[2] == 'J') || (attempt_3[3] == word[3] && attempt_3[3] == 'J') || (attempt_3[4] == word[4] && attempt_3[4] == 'J') || (attempt_4[0] == word[0] && attempt_4[0] == 'J') || (attempt_4[1] == word[1] && attempt_4[1] == 'J') || (attempt_4[2] == word[2] && attempt_4[2] == 'J') || (attempt_4[3] == word[3] && attempt_4[3] == 'J') || (attempt_4[4] == word[4] && attempt_4[4] == 'J') || (attempt_5[0] == word[0] && attempt_5[0] == 'J') || (attempt_5[1] == word[1] && attempt_5[1] == 'J') || (attempt_5[2] == word[2] && attempt_5[2] == 'J') || (attempt_5[3] == word[3] && attempt_5[3] == 'J') || (attempt_5[4] == word[4] && attempt_5[4] == 'J') || (attempt_6[0] == word[0] && attempt_6[0] == 'J') || (attempt_6[1] == word[1] && attempt_6[1] == 'J') || (attempt_6[2] == word[2] && attempt_6[2] == 'J') || (attempt_6[3] == word[3] && attempt_6[3] == 'J') || (attempt_6[4] == word[4] && attempt_6[4] == 'J'))
    {
        cout << " ";
        c1();
        cout << " J ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'J') || (attempt_1[0] == word[2] && word[2] == 'J') || (attempt_1[0] == word[3] && word[3] == 'J') || (attempt_1[0] == word[4] && word[4] == 'J') || (attempt_1[1] == word[0] && word[0] == 'J') || (attempt_1[1] == word[2] && word[2] == 'J') || (attempt_1[1] == word[3] && word[3] == 'J') || (attempt_1[1] == word[4] && word[4] == 'J') || (attempt_1[2] == word[1] && word[1] == 'J') || (attempt_1[2] == word[0] && word[0] == 'J') || (attempt_1[2] == word[3] && word[3] == 'J') || (attempt_1[2] == word[4] && word[4] == 'J') || (attempt_1[3] == word[1] && word[1] == 'J') || (attempt_1[3] == word[0] && word[0] == 'J') || (attempt_1[3] == word[2] && word[2] == 'J') || (attempt_1[3] == word[4] && word[4] == 'J') || (attempt_1[4] == word[1] && word[1] == 'J') || (attempt_1[4] == word[0] && word[0] == 'J') || (attempt_1[4] == word[3] && word[3] == 'J') || (attempt_1[4] == word[2] && word[2] == 'J') || (attempt_2[0] == word[1] && word[1] == 'J') || (attempt_2[0] == word[2] && word[2] == 'J') || (attempt_2[0] == word[3] && word[3] == 'J') || (attempt_2[0] == word[4] && word[4] == 'J') || (attempt_2[1] == word[0] && word[0] == 'J') || (attempt_2[1] == word[2] && word[2] == 'J') || (attempt_2[1] == word[3] && word[3] == 'J') || (attempt_2[1] == word[4] && word[4] == 'J') || (attempt_2[2] == word[1] && word[1] == 'J') || (attempt_2[2] == word[0] && word[0] == 'J') || (attempt_2[2] == word[3] && word[3] == 'J') || (attempt_2[2] == word[4] && word[4] == 'J') || (attempt_2[3] == word[1] && word[1] == 'J') || (attempt_2[3] == word[0] && word[0] == 'J') || (attempt_2[3] == word[2] && word[2] == 'J') || (attempt_2[3] == word[4] && word[4] == 'J') || (attempt_2[4] == word[1] && word[1] == 'J') || (attempt_2[4] == word[0] && word[0] == 'J') || (attempt_2[4] == word[3] && word[3] == 'J') || (attempt_2[4] == word[2] && word[2] == 'J') || (attempt_3[0] == word[1] && word[1] == 'J') || (attempt_3[0] == word[2] && word[2] == 'J') || (attempt_3[0] == word[3] && word[3] == 'J') || (attempt_3[0] == word[4] && word[4] == 'J') || (attempt_3[1] == word[0] && word[0] == 'J') || (attempt_3[1] == word[2] && word[2] == 'J') || (attempt_3[1] == word[3] && word[3] == 'J') || (attempt_3[1] == word[4] && word[4] == 'J') || (attempt_3[2] == word[1] && word[1] == 'J') || (attempt_3[2] == word[0] && word[0] == 'J') || (attempt_3[2] == word[3] && word[3] == 'J') || (attempt_3[2] == word[4] && word[4] == 'J') || (attempt_3[3] == word[1] && word[1] == 'J') || (attempt_3[3] == word[0] && word[0] == 'J') || (attempt_3[3] == word[2] && word[2] == 'J') || (attempt_3[3] == word[4] && word[4] == 'J') || (attempt_3[4] == word[1] && word[1] == 'J') || (attempt_3[4] == word[0] && word[0] == 'J') || (attempt_3[4] == word[3] && word[3] == 'J') || (attempt_3[4] == word[2] && word[2] == 'J') || (attempt_4[0] == word[1] && word[1] == 'J') || (attempt_4[0] == word[2] && word[2] == 'J') || (attempt_4[0] == word[3] && word[3] == 'J') || (attempt_4[0] == word[4] && word[4] == 'J') || (attempt_4[1] == word[0] && word[0] == 'J') || (attempt_4[1] == word[2] && word[2] == 'J') || (attempt_4[1] == word[3] && word[3] == 'J') || (attempt_4[1] == word[4] && word[4] == 'J') || (attempt_4[2] == word[1] && word[1] == 'J') || (attempt_4[2] == word[0] && word[0] == 'J') || (attempt_4[2] == word[3] && word[3] == 'J') || (attempt_4[2] == word[4] && word[4] == 'J') || (attempt_4[3] == word[1] && word[1] == 'J') || (attempt_4[3] == word[0] && word[0] == 'J') || (attempt_4[3] == word[2] && word[2] == 'J') || (attempt_4[3] == word[4] && word[4] == 'J') || (attempt_4[4] == word[1] && word[1] == 'J') || (attempt_4[4] == word[0] && word[0] == 'J') || (attempt_4[4] == word[3] && word[3] == 'J') || (attempt_4[4] == word[2] && word[2] == 'J') || (attempt_5[0] == word[1] && word[1] == 'J') || (attempt_5[0] == word[2] && word[2] == 'J') || (attempt_5[0] == word[3] && word[3] == 'J') || (attempt_5[0] == word[4] && word[4] == 'J') || (attempt_5[1] == word[0] && word[0] == 'J') || (attempt_5[1] == word[2] && word[2] == 'J') || (attempt_5[1] == word[3] && word[3] == 'J') || (attempt_5[1] == word[4] && word[4] == 'J') || (attempt_5[2] == word[1] && word[1] == 'J') || (attempt_5[2] == word[0] && word[0] == 'J') || (attempt_5[2] == word[3] && word[3] == 'J') || (attempt_5[2] == word[4] && word[4] == 'J') || (attempt_5[3] == word[1] && word[1] == 'J') || (attempt_5[3] == word[0] && word[0] == 'J') || (attempt_5[3] == word[2] && word[2] == 'J') || (attempt_5[3] == word[4] && word[4] == 'J') || (attempt_5[4] == word[1] && word[1] == 'J') || (attempt_5[4] == word[0] && word[0] == 'J') || (attempt_5[4] == word[3] && word[3] == 'J') || (attempt_5[4] == word[2] && word[2] == 'J') || (attempt_6[0] == word[1] && word[1] == 'J') || (attempt_6[0] == word[2] && word[2] == 'J') || (attempt_6[0] == word[3] && word[3] == 'J') || (attempt_6[0] == word[4] && word[4] == 'J') || (attempt_6[1] == word[0] && word[0] == 'J') || (attempt_6[1] == word[2] && word[2] == 'J') || (attempt_6[1] == word[3] && word[3] == 'J') || (attempt_6[1] == word[4] && word[4] == 'J') || (attempt_6[2] == word[1] && word[1] == 'J') || (attempt_6[2] == word[0] && word[0] == 'J') || (attempt_6[2] == word[3] && word[3] == 'J') || (attempt_6[2] == word[4] && word[4] == 'J') || (attempt_6[3] == word[1] && word[1] == 'J') || (attempt_6[3] == word[0] && word[0] == 'J') || (attempt_6[3] == word[2] && word[2] == 'J') || (attempt_6[3] == word[4] && word[4] == 'J') || (attempt_6[4] == word[1] && word[1] == 'J') || (attempt_6[4] == word[0] && word[0] == 'J') || (attempt_6[4] == word[3] && word[3] == 'J') || (attempt_6[4] == word[2] && word[2] == 'J'))
    {
        cout << " ";
        c2();
        cout << " J ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'J') || (attempt_1[0] != word[2] && attempt_1[0] == 'J') || (attempt_1[0] != word[3] && attempt_1[0] == 'J') || (attempt_1[0] != word[4] && attempt_1[0] == 'J') || (attempt_1[1] != word[0] && attempt_1[1] == 'J') || (attempt_1[1] != word[2] && attempt_1[1] == 'J') || (attempt_1[1] != word[3] && attempt_1[1] == 'J') || (attempt_1[1] != word[4] && attempt_1[1] == 'J') || (attempt_1[2] != word[1] && attempt_1[2] == 'J') || (attempt_1[2] != word[0] && attempt_1[2] == 'J') || (attempt_1[2] != word[3] && attempt_1[2] == 'J') || (attempt_1[2] != word[4] && attempt_1[2] == 'J') || (attempt_1[3] != word[1] && attempt_1[3] == 'J') || (attempt_1[3] != word[2] && attempt_1[3] == 'J') || (attempt_1[3] != word[0] && attempt_1[3] == 'J') || (attempt_1[3] != word[4] && attempt_1[3] == 'J') || (attempt_1[4] != word[1] && attempt_1[4] == 'J') || (attempt_1[4] != word[2] && attempt_1[4] == 'J') || (attempt_1[4] != word[3] && attempt_1[4] == 'J') || (attempt_1[4] != word[0] && attempt_1[4] == 'J') || (attempt_2[0] != word[1] && attempt_2[0] == 'J') || (attempt_2[0] != word[2] && attempt_2[0] == 'J') || (attempt_2[0] != word[3] && attempt_2[0] == 'J') || (attempt_2[0] != word[4] && attempt_2[0] == 'J') || (attempt_2[1] != word[0] && attempt_2[1] == 'J') || (attempt_2[1] != word[2] && attempt_2[1] == 'J') || (attempt_2[1] != word[3] && attempt_2[1] == 'J') || (attempt_2[1] != word[4] && attempt_2[1] == 'J') || (attempt_2[2] != word[1] && attempt_2[2] == 'J') || (attempt_2[2] != word[0] && attempt_2[2] == 'J') || (attempt_2[2] != word[3] && attempt_2[2] == 'J') || (attempt_2[2] != word[4] && attempt_2[2] == 'J') || (attempt_2[3] != word[1] && attempt_2[3] == 'J') || (attempt_2[3] != word[2] && attempt_2[3] == 'J') || (attempt_2[3] != word[0] && attempt_2[3] == 'J') || (attempt_2[3] != word[4] && attempt_2[3] == 'J') || (attempt_2[4] != word[1] && attempt_2[4] == 'J') || (attempt_2[4] != word[2] && attempt_2[4] == 'J') || (attempt_2[4] != word[3] && attempt_2[4] == 'J') || (attempt_2[4] != word[0] && attempt_2[4] == 'J') || (attempt_3[0] != word[1] && attempt_3[0] == 'J') || (attempt_3[0] != word[2] && attempt_3[0] == 'J') || (attempt_3[0] != word[3] && attempt_3[0] == 'J') || (attempt_3[0] != word[4] && attempt_3[0] == 'J') || (attempt_3[1] != word[0] && attempt_3[1] == 'J') || (attempt_3[1] != word[2] && attempt_3[1] == 'J') || (attempt_3[1] != word[3] && attempt_3[1] == 'J') || (attempt_3[1] != word[4] && attempt_3[1] == 'J') || (attempt_3[2] != word[1] && attempt_3[2] == 'J') || (attempt_3[2] != word[0] && attempt_3[2] == 'J') || (attempt_3[2] != word[3] && attempt_3[2] == 'J') || (attempt_3[2] != word[4] && attempt_3[2] == 'J') || (attempt_3[3] != word[1] && attempt_3[3] == 'J') || (attempt_3[3] != word[2] && attempt_3[3] == 'J') || (attempt_3[3] != word[0] && attempt_3[3] == 'J') || (attempt_3[3] != word[4] && attempt_3[3] == 'J') || (attempt_3[4] != word[1] && attempt_3[4] == 'J') || (attempt_3[4] != word[2] && attempt_3[4] == 'J') || (attempt_3[4] != word[3] && attempt_3[4] == 'J') || (attempt_3[4] != word[0] && attempt_3[4] == 'J') || (attempt_4[0] != word[1] && attempt_4[0] == 'J') || (attempt_4[0] != word[2] && attempt_4[0] == 'J') || (attempt_4[0] != word[3] && attempt_4[0] == 'J') || (attempt_4[0] != word[4] && attempt_4[0] == 'J') || (attempt_4[1] != word[0] && attempt_4[1] == 'J') || (attempt_4[1] != word[2] && attempt_4[1] == 'J') || (attempt_4[1] != word[3] && attempt_4[1] == 'J') || (attempt_4[1] != word[4] && attempt_4[1] == 'J') || (attempt_4[2] != word[1] && attempt_4[2] == 'J') || (attempt_4[2] != word[0] && attempt_4[2] == 'J') || (attempt_4[2] != word[3] && attempt_4[2] == 'J') || (attempt_4[2] != word[4] && attempt_4[2] == 'J') || (attempt_4[3] != word[1] && attempt_4[3] == 'J') || (attempt_4[3] != word[2] && attempt_4[3] == 'J') || (attempt_4[3] != word[0] && attempt_4[3] == 'J') || (attempt_4[3] != word[4] && attempt_4[3] == 'J') || (attempt_4[4] != word[1] && attempt_4[4] == 'J') || (attempt_4[4] != word[2] && attempt_4[4] == 'J') || (attempt_4[4] != word[3] && attempt_4[4] == 'J') || (attempt_4[4] != word[0] && attempt_4[4] == 'J') || (attempt_5[0] != word[1] && attempt_5[0] == 'J') || (attempt_5[0] != word[2] && attempt_5[0] == 'J') || (attempt_5[0] != word[3] && attempt_5[0] == 'J') || (attempt_5[0] != word[4] && attempt_5[0] == 'J') || (attempt_5[1] != word[0] && attempt_5[1] == 'J') || (attempt_5[1] != word[2] && attempt_5[1] == 'J') || (attempt_5[1] != word[3] && attempt_5[1] == 'J') || (attempt_5[1] != word[4] && attempt_5[1] == 'J') || (attempt_5[2] != word[1] && attempt_5[2] == 'J') || (attempt_5[2] != word[0] && attempt_5[2] == 'J') || (attempt_5[2] != word[3] && attempt_5[2] == 'J') || (attempt_5[2] != word[4] && attempt_5[2] == 'J') || (attempt_5[3] != word[1] && attempt_5[3] == 'J') || (attempt_5[3] != word[2] && attempt_5[3] == 'J') || (attempt_5[3] != word[0] && attempt_5[3] == 'J') || (attempt_5[3] != word[4] && attempt_5[3] == 'J') || (attempt_5[4] != word[1] && attempt_5[4] == 'J') || (attempt_5[4] != word[2] && attempt_5[4] == 'J') || (attempt_5[4] != word[3] && attempt_5[4] == 'J') || (attempt_5[4] != word[0] && attempt_5[4] == 'J') || (attempt_6[0] != word[1] && attempt_6[0] == 'J') || (attempt_6[0] != word[2] && attempt_6[0] == 'J') || (attempt_6[0] != word[3] && attempt_6[0] == 'J') || (attempt_6[0] != word[4] && attempt_6[0] == 'J') || (attempt_6[1] != word[0] && attempt_6[1] == 'J') || (attempt_6[1] != word[2] && attempt_6[1] == 'J') || (attempt_6[1] != word[3] && attempt_6[1] == 'J') || (attempt_6[1] != word[4] && attempt_6[1] == 'J') || (attempt_6[2] != word[1] && attempt_6[2] == 'J') || (attempt_6[2] != word[0] && attempt_6[2] == 'J') || (attempt_6[2] != word[3] && attempt_6[2] == 'J') || (attempt_6[2] != word[4] && attempt_6[2] == 'J') || (attempt_6[3] != word[1] && attempt_6[3] == 'J') || (attempt_6[3] != word[2] && attempt_6[3] == 'J') || (attempt_6[3] != word[0] && attempt_6[3] == 'J') || (attempt_6[3] != word[4] && attempt_6[3] == 'J') || (attempt_6[4] != word[1] && attempt_6[4] == 'J') || (attempt_6[4] != word[2] && attempt_6[4] == 'J') || (attempt_6[4] != word[3] && attempt_6[4] == 'J') || (attempt_6[4] != word[0] && attempt_6[4] == 'J'))
    {
        cout << " ";
        c3();
        cout << " J ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " J ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'K') || (attempt_1[1] == word[1] && attempt_1[1] == 'K') || (attempt_1[2] == word[2] && attempt_1[2] == 'K') || (attempt_1[3] == word[3] && attempt_1[3] == 'K') || (attempt_1[4] == word[4] && attempt_1[4] == 'K') || (attempt_2[0] == word[0] && attempt_2[0] == 'K') || (attempt_2[1] == word[1] && attempt_2[1] == 'K') || (attempt_2[2] == word[2] && attempt_2[2] == 'K') || (attempt_2[3] == word[3] && attempt_2[3] == 'K') || (attempt_2[4] == word[4] && attempt_2[4] == 'K') || (attempt_3[0] == word[0] && attempt_3[0] == 'K') || (attempt_3[1] == word[1] && attempt_3[1] == 'K') || (attempt_3[2] == word[2] && attempt_3[2] == 'K') || (attempt_3[3] == word[3] && attempt_3[3] == 'K') || (attempt_3[4] == word[4] && attempt_3[4] == 'K') || (attempt_4[0] == word[0] && attempt_4[0] == 'K') || (attempt_4[1] == word[1] && attempt_4[1] == 'K') || (attempt_4[2] == word[2] && attempt_4[2] == 'K') || (attempt_4[3] == word[3] && attempt_4[3] == 'K') || (attempt_4[4] == word[4] && attempt_4[4] == 'K') || (attempt_5[0] == word[0] && attempt_5[0] == 'K') || (attempt_5[1] == word[1] && attempt_5[1] == 'K') || (attempt_5[2] == word[2] && attempt_5[2] == 'K') || (attempt_5[3] == word[3] && attempt_5[3] == 'K') || (attempt_5[4] == word[4] && attempt_5[4] == 'K') || (attempt_6[0] == word[0] && attempt_6[0] == 'K') || (attempt_6[1] == word[1] && attempt_6[1] == 'K') || (attempt_6[2] == word[2] && attempt_6[2] == 'K') || (attempt_6[3] == word[3] && attempt_6[3] == 'K') || (attempt_6[4] == word[4] && attempt_6[4] == 'K'))
    {
        cout << " ";
        c1();
        cout << " K ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'K') || (attempt_1[0] == word[2] && word[2] == 'K') || (attempt_1[0] == word[3] && word[3] == 'K') || (attempt_1[0] == word[4] && word[4] == 'K') || (attempt_1[1] == word[0] && word[0] == 'K') || (attempt_1[1] == word[2] && word[2] == 'K') || (attempt_1[1] == word[3] && word[3] == 'K') || (attempt_1[1] == word[4] && word[4] == 'K') || (attempt_1[2] == word[1] && word[1] == 'K') || (attempt_1[2] == word[0] && word[0] == 'K') || (attempt_1[2] == word[3] && word[3] == 'K') || (attempt_1[2] == word[4] && word[4] == 'K') || (attempt_1[3] == word[1] && word[1] == 'K') || (attempt_1[3] == word[0] && word[0] == 'K') || (attempt_1[3] == word[2] && word[2] == 'K') || (attempt_1[3] == word[4] && word[4] == 'K') || (attempt_1[4] == word[1] && word[1] == 'K') || (attempt_1[4] == word[0] && word[0] == 'K') || (attempt_1[4] == word[3] && word[3] == 'K') || (attempt_1[4] == word[2] && word[2] == 'K') || (attempt_2[0] == word[1] && word[1] == 'K') || (attempt_2[0] == word[2] && word[2] == 'K') || (attempt_2[0] == word[3] && word[3] == 'K') || (attempt_2[0] == word[4] && word[4] == 'K') || (attempt_2[1] == word[0] && word[0] == 'K') || (attempt_2[1] == word[2] && word[2] == 'K') || (attempt_2[1] == word[3] && word[3] == 'K') || (attempt_2[1] == word[4] && word[4] == 'K') || (attempt_2[2] == word[1] && word[1] == 'K') || (attempt_2[2] == word[0] && word[0] == 'K') || (attempt_2[2] == word[3] && word[3] == 'K') || (attempt_2[2] == word[4] && word[4] == 'K') || (attempt_2[3] == word[1] && word[1] == 'K') || (attempt_2[3] == word[0] && word[0] == 'K') || (attempt_2[3] == word[2] && word[2] == 'K') || (attempt_2[3] == word[4] && word[4] == 'K') || (attempt_2[4] == word[1] && word[1] == 'K') || (attempt_2[4] == word[0] && word[0] == 'K') || (attempt_2[4] == word[3] && word[3] == 'K') || (attempt_2[4] == word[2] && word[2] == 'K') || (attempt_3[0] == word[1] && word[1] == 'K') || (attempt_3[0] == word[2] && word[2] == 'K') || (attempt_3[0] == word[3] && word[3] == 'K') || (attempt_3[0] == word[4] && word[4] == 'K') || (attempt_3[1] == word[0] && word[0] == 'K') || (attempt_3[1] == word[2] && word[2] == 'K') || (attempt_3[1] == word[3] && word[3] == 'K') || (attempt_3[1] == word[4] && word[4] == 'K') || (attempt_3[2] == word[1] && word[1] == 'K') || (attempt_3[2] == word[0] && word[0] == 'K') || (attempt_3[2] == word[3] && word[3] == 'K') || (attempt_3[2] == word[4] && word[4] == 'K') || (attempt_3[3] == word[1] && word[1] == 'K') || (attempt_3[3] == word[0] && word[0] == 'K') || (attempt_3[3] == word[2] && word[2] == 'K') || (attempt_3[3] == word[4] && word[4] == 'K') || (attempt_3[4] == word[1] && word[1] == 'K') || (attempt_3[4] == word[0] && word[0] == 'K') || (attempt_3[4] == word[3] && word[3] == 'K') || (attempt_3[4] == word[2] && word[2] == 'K') || (attempt_4[0] == word[1] && word[1] == 'K') || (attempt_4[0] == word[2] && word[2] == 'K') || (attempt_4[0] == word[3] && word[3] == 'K') || (attempt_4[0] == word[4] && word[4] == 'K') || (attempt_4[1] == word[0] && word[0] == 'K') || (attempt_4[1] == word[2] && word[2] == 'K') || (attempt_4[1] == word[3] && word[3] == 'K') || (attempt_4[1] == word[4] && word[4] == 'K') || (attempt_4[2] == word[1] && word[1] == 'K') || (attempt_4[2] == word[0] && word[0] == 'K') || (attempt_4[2] == word[3] && word[3] == 'K') || (attempt_4[2] == word[4] && word[4] == 'K') || (attempt_4[3] == word[1] && word[1] == 'K') || (attempt_4[3] == word[0] && word[0] == 'K') || (attempt_4[3] == word[2] && word[2] == 'K') || (attempt_4[3] == word[4] && word[4] == 'K') || (attempt_4[4] == word[1] && word[1] == 'K') || (attempt_4[4] == word[0] && word[0] == 'K') || (attempt_4[4] == word[3] && word[3] == 'K') || (attempt_4[4] == word[2] && word[2] == 'K') || (attempt_5[0] == word[1] && word[1] == 'K') || (attempt_5[0] == word[2] && word[2] == 'K') || (attempt_5[0] == word[3] && word[3] == 'K') || (attempt_5[0] == word[4] && word[4] == 'K') || (attempt_5[1] == word[0] && word[0] == 'K') || (attempt_5[1] == word[2] && word[2] == 'K') || (attempt_5[1] == word[3] && word[3] == 'K') || (attempt_5[1] == word[4] && word[4] == 'K') || (attempt_5[2] == word[1] && word[1] == 'K') || (attempt_5[2] == word[0] && word[0] == 'K') || (attempt_5[2] == word[3] && word[3] == 'K') || (attempt_5[2] == word[4] && word[4] == 'K') || (attempt_5[3] == word[1] && word[1] == 'K') || (attempt_5[3] == word[0] && word[0] == 'K') || (attempt_5[3] == word[2] && word[2] == 'K') || (attempt_5[3] == word[4] && word[4] == 'K') || (attempt_5[4] == word[1] && word[1] == 'K') || (attempt_5[4] == word[0] && word[0] == 'K') || (attempt_5[4] == word[3] && word[3] == 'K') || (attempt_5[4] == word[2] && word[2] == 'K') || (attempt_6[0] == word[1] && word[1] == 'K') || (attempt_6[0] == word[2] && word[2] == 'K') || (attempt_6[0] == word[3] && word[3] == 'K') || (attempt_6[0] == word[4] && word[4] == 'K') || (attempt_6[1] == word[0] && word[0] == 'K') || (attempt_6[1] == word[2] && word[2] == 'K') || (attempt_6[1] == word[3] && word[3] == 'K') || (attempt_6[1] == word[4] && word[4] == 'K') || (attempt_6[2] == word[1] && word[1] == 'K') || (attempt_6[2] == word[0] && word[0] == 'K') || (attempt_6[2] == word[3] && word[3] == 'K') || (attempt_6[2] == word[4] && word[4] == 'K') || (attempt_6[3] == word[1] && word[1] == 'K') || (attempt_6[3] == word[0] && word[0] == 'K') || (attempt_6[3] == word[2] && word[2] == 'K') || (attempt_6[3] == word[4] && word[4] == 'K') || (attempt_6[4] == word[1] && word[1] == 'K') || (attempt_6[4] == word[0] && word[0] == 'K') || (attempt_6[4] == word[3] && word[3] == 'K') || (attempt_6[4] == word[2] && word[2] == 'K'))
    {
        cout << " ";
        c2();
        cout << " K ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'K') || (attempt_1[0] != word[2] && attempt_1[0] == 'K') || (attempt_1[0] != word[3] && attempt_1[0] == 'K') || (attempt_1[0] != word[4] && attempt_1[0] == 'K') || (attempt_1[1] != word[0] && attempt_1[1] == 'K') || (attempt_1[1] != word[2] && attempt_1[1] == 'K') || (attempt_1[1] != word[3] && attempt_1[1] == 'K') || (attempt_1[1] != word[4] && attempt_1[1] == 'K') || (attempt_1[2] != word[1] && attempt_1[2] == 'K') || (attempt_1[2] != word[0] && attempt_1[2] == 'K') || (attempt_1[2] != word[3] && attempt_1[2] == 'K') || (attempt_1[2] != word[4] && attempt_1[2] == 'K') || (attempt_1[3] != word[1] && attempt_1[3] == 'K') || (attempt_1[3] != word[2] && attempt_1[3] == 'K') || (attempt_1[3] != word[0] && attempt_1[3] == 'K') || (attempt_1[3] != word[4] && attempt_1[3] == 'K') || (attempt_1[4] != word[1] && attempt_1[4] == 'K') || (attempt_1[4] != word[2] && attempt_1[4] == 'K') || (attempt_1[4] != word[3] && attempt_1[4] == 'K') || (attempt_1[4] != word[0] && attempt_1[4] == 'K') || (attempt_2[0] != word[1] && attempt_2[0] == 'K') || (attempt_2[0] != word[2] && attempt_2[0] == 'K') || (attempt_2[0] != word[3] && attempt_2[0] == 'K') || (attempt_2[0] != word[4] && attempt_2[0] == 'K') || (attempt_2[1] != word[0] && attempt_2[1] == 'K') || (attempt_2[1] != word[2] && attempt_2[1] == 'K') || (attempt_2[1] != word[3] && attempt_2[1] == 'K') || (attempt_2[1] != word[4] && attempt_2[1] == 'K') || (attempt_2[2] != word[1] && attempt_2[2] == 'K') || (attempt_2[2] != word[0] && attempt_2[2] == 'K') || (attempt_2[2] != word[3] && attempt_2[2] == 'K') || (attempt_2[2] != word[4] && attempt_2[2] == 'K') || (attempt_2[3] != word[1] && attempt_2[3] == 'K') || (attempt_2[3] != word[2] && attempt_2[3] == 'K') || (attempt_2[3] != word[0] && attempt_2[3] == 'K') || (attempt_2[3] != word[4] && attempt_2[3] == 'K') || (attempt_2[4] != word[1] && attempt_2[4] == 'K') || (attempt_2[4] != word[2] && attempt_2[4] == 'K') || (attempt_2[4] != word[3] && attempt_2[4] == 'K') || (attempt_2[4] != word[0] && attempt_2[4] == 'K') || (attempt_3[0] != word[1] && attempt_3[0] == 'K') || (attempt_3[0] != word[2] && attempt_3[0] == 'K') || (attempt_3[0] != word[3] && attempt_3[0] == 'K') || (attempt_3[0] != word[4] && attempt_3[0] == 'K') || (attempt_3[1] != word[0] && attempt_3[1] == 'K') || (attempt_3[1] != word[2] && attempt_3[1] == 'K') || (attempt_3[1] != word[3] && attempt_3[1] == 'K') || (attempt_3[1] != word[4] && attempt_3[1] == 'K') || (attempt_3[2] != word[1] && attempt_3[2] == 'K') || (attempt_3[2] != word[0] && attempt_3[2] == 'K') || (attempt_3[2] != word[3] && attempt_3[2] == 'K') || (attempt_3[2] != word[4] && attempt_3[2] == 'K') || (attempt_3[3] != word[1] && attempt_3[3] == 'K') || (attempt_3[3] != word[2] && attempt_3[3] == 'K') || (attempt_3[3] != word[0] && attempt_3[3] == 'K') || (attempt_3[3] != word[4] && attempt_3[3] == 'K') || (attempt_3[4] != word[1] && attempt_3[4] == 'K') || (attempt_3[4] != word[2] && attempt_3[4] == 'K') || (attempt_3[4] != word[3] && attempt_3[4] == 'K') || (attempt_3[4] != word[0] && attempt_3[4] == 'K') || (attempt_4[0] != word[1] && attempt_4[0] == 'K') || (attempt_4[0] != word[2] && attempt_4[0] == 'K') || (attempt_4[0] != word[3] && attempt_4[0] == 'K') || (attempt_4[0] != word[4] && attempt_4[0] == 'K') || (attempt_4[1] != word[0] && attempt_4[1] == 'K') || (attempt_4[1] != word[2] && attempt_4[1] == 'K') || (attempt_4[1] != word[3] && attempt_4[1] == 'K') || (attempt_4[1] != word[4] && attempt_4[1] == 'K') || (attempt_4[2] != word[1] && attempt_4[2] == 'K') || (attempt_4[2] != word[0] && attempt_4[2] == 'K') || (attempt_4[2] != word[3] && attempt_4[2] == 'K') || (attempt_4[2] != word[4] && attempt_4[2] == 'K') || (attempt_4[3] != word[1] && attempt_4[3] == 'K') || (attempt_4[3] != word[2] && attempt_4[3] == 'K') || (attempt_4[3] != word[0] && attempt_4[3] == 'K') || (attempt_4[3] != word[4] && attempt_4[3] == 'K') || (attempt_4[4] != word[1] && attempt_4[4] == 'K') || (attempt_4[4] != word[2] && attempt_4[4] == 'K') || (attempt_4[4] != word[3] && attempt_4[4] == 'K') || (attempt_4[4] != word[0] && attempt_4[4] == 'K') || (attempt_5[0] != word[1] && attempt_5[0] == 'K') || (attempt_5[0] != word[2] && attempt_5[0] == 'K') || (attempt_5[0] != word[3] && attempt_5[0] == 'K') || (attempt_5[0] != word[4] && attempt_5[0] == 'K') || (attempt_5[1] != word[0] && attempt_5[1] == 'K') || (attempt_5[1] != word[2] && attempt_5[1] == 'K') || (attempt_5[1] != word[3] && attempt_5[1] == 'K') || (attempt_5[1] != word[4] && attempt_5[1] == 'K') || (attempt_5[2] != word[1] && attempt_5[2] == 'K') || (attempt_5[2] != word[0] && attempt_5[2] == 'K') || (attempt_5[2] != word[3] && attempt_5[2] == 'K') || (attempt_5[2] != word[4] && attempt_5[2] == 'K') || (attempt_5[3] != word[1] && attempt_5[3] == 'K') || (attempt_5[3] != word[2] && attempt_5[3] == 'K') || (attempt_5[3] != word[0] && attempt_5[3] == 'K') || (attempt_5[3] != word[4] && attempt_5[3] == 'K') || (attempt_5[4] != word[1] && attempt_5[4] == 'K') || (attempt_5[4] != word[2] && attempt_5[4] == 'K') || (attempt_5[4] != word[3] && attempt_5[4] == 'K') || (attempt_5[4] != word[0] && attempt_5[4] == 'K') || (attempt_6[0] != word[1] && attempt_6[0] == 'K') || (attempt_6[0] != word[2] && attempt_6[0] == 'K') || (attempt_6[0] != word[3] && attempt_6[0] == 'K') || (attempt_6[0] != word[4] && attempt_6[0] == 'K') || (attempt_6[1] != word[0] && attempt_6[1] == 'K') || (attempt_6[1] != word[2] && attempt_6[1] == 'K') || (attempt_6[1] != word[3] && attempt_6[1] == 'K') || (attempt_6[1] != word[4] && attempt_6[1] == 'K') || (attempt_6[2] != word[1] && attempt_6[2] == 'K') || (attempt_6[2] != word[0] && attempt_6[2] == 'K') || (attempt_6[2] != word[3] && attempt_6[2] == 'K') || (attempt_6[2] != word[4] && attempt_6[2] == 'K') || (attempt_6[3] != word[1] && attempt_6[3] == 'K') || (attempt_6[3] != word[2] && attempt_6[3] == 'K') || (attempt_6[3] != word[0] && attempt_6[3] == 'K') || (attempt_6[3] != word[4] && attempt_6[3] == 'K') || (attempt_6[4] != word[1] && attempt_6[4] == 'K') || (attempt_6[4] != word[2] && attempt_6[4] == 'K') || (attempt_6[4] != word[3] && attempt_6[4] == 'K') || (attempt_6[4] != word[0] && attempt_6[4] == 'K'))
    {
        cout << " ";
        c3();
        cout << " K ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " K ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'L') || (attempt_1[1] == word[1] && attempt_1[1] == 'L') || (attempt_1[2] == word[2] && attempt_1[2] == 'L') || (attempt_1[3] == word[3] && attempt_1[3] == 'L') || (attempt_1[4] == word[4] && attempt_1[4] == 'L') || (attempt_2[0] == word[0] && attempt_2[0] == 'L') || (attempt_2[1] == word[1] && attempt_2[1] == 'L') || (attempt_2[2] == word[2] && attempt_2[2] == 'L') || (attempt_2[3] == word[3] && attempt_2[3] == 'L') || (attempt_2[4] == word[4] && attempt_2[4] == 'L') || (attempt_3[0] == word[0] && attempt_3[0] == 'L') || (attempt_3[1] == word[1] && attempt_3[1] == 'L') || (attempt_3[2] == word[2] && attempt_3[2] == 'L') || (attempt_3[3] == word[3] && attempt_3[3] == 'L') || (attempt_3[4] == word[4] && attempt_3[4] == 'L') || (attempt_4[0] == word[0] && attempt_4[0] == 'L') || (attempt_4[1] == word[1] && attempt_4[1] == 'L') || (attempt_4[2] == word[2] && attempt_4[2] == 'L') || (attempt_4[3] == word[3] && attempt_4[3] == 'L') || (attempt_4[4] == word[4] && attempt_4[4] == 'L') || (attempt_5[0] == word[0] && attempt_5[0] == 'L') || (attempt_5[1] == word[1] && attempt_5[1] == 'L') || (attempt_5[2] == word[2] && attempt_5[2] == 'L') || (attempt_5[3] == word[3] && attempt_5[3] == 'L') || (attempt_5[4] == word[4] && attempt_5[4] == 'L') || (attempt_6[0] == word[0] && attempt_6[0] == 'L') || (attempt_6[1] == word[1] && attempt_6[1] == 'L') || (attempt_6[2] == word[2] && attempt_6[2] == 'L') || (attempt_6[3] == word[3] && attempt_6[3] == 'L') || (attempt_6[4] == word[4] && attempt_6[4] == 'L'))
    {
        cout << " ";
        c1();
        cout << " L ";
        cout << RESET;
        cout << " ";
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'L') || (attempt_1[0] == word[2] && word[2] == 'L') || (attempt_1[0] == word[3] && word[3] == 'L') || (attempt_1[0] == word[4] && word[4] == 'L') || (attempt_1[1] == word[0] && word[0] == 'L') || (attempt_1[1] == word[2] && word[2] == 'L') || (attempt_1[1] == word[3] && word[3] == 'L') || (attempt_1[1] == word[4] && word[4] == 'L') || (attempt_1[2] == word[1] && word[1] == 'L') || (attempt_1[2] == word[0] && word[0] == 'L') || (attempt_1[2] == word[3] && word[3] == 'L') || (attempt_1[2] == word[4] && word[4] == 'L') || (attempt_1[3] == word[1] && word[1] == 'L') || (attempt_1[3] == word[0] && word[0] == 'L') || (attempt_1[3] == word[2] && word[2] == 'L') || (attempt_1[3] == word[4] && word[4] == 'L') || (attempt_1[4] == word[1] && word[1] == 'L') || (attempt_1[4] == word[0] && word[0] == 'L') || (attempt_1[4] == word[3] && word[3] == 'L') || (attempt_1[4] == word[2] && word[2] == 'L') || (attempt_2[0] == word[1] && word[1] == 'L') || (attempt_2[0] == word[2] && word[2] == 'L') || (attempt_2[0] == word[3] && word[3] == 'L') || (attempt_2[0] == word[4] && word[4] == 'L') || (attempt_2[1] == word[0] && word[0] == 'L') || (attempt_2[1] == word[2] && word[2] == 'L') || (attempt_2[1] == word[3] && word[3] == 'L') || (attempt_2[1] == word[4] && word[4] == 'L') || (attempt_2[2] == word[1] && word[1] == 'L') || (attempt_2[2] == word[0] && word[0] == 'L') || (attempt_2[2] == word[3] && word[3] == 'L') || (attempt_2[2] == word[4] && word[4] == 'L') || (attempt_2[3] == word[1] && word[1] == 'L') || (attempt_2[3] == word[0] && word[0] == 'L') || (attempt_2[3] == word[2] && word[2] == 'L') || (attempt_2[3] == word[4] && word[4] == 'L') || (attempt_2[4] == word[1] && word[1] == 'L') || (attempt_2[4] == word[0] && word[0] == 'L') || (attempt_2[4] == word[3] && word[3] == 'L') || (attempt_2[4] == word[2] && word[2] == 'L') || (attempt_3[0] == word[1] && word[1] == 'L') || (attempt_3[0] == word[2] && word[2] == 'L') || (attempt_3[0] == word[3] && word[3] == 'L') || (attempt_3[0] == word[4] && word[4] == 'L') || (attempt_3[1] == word[0] && word[0] == 'L') || (attempt_3[1] == word[2] && word[2] == 'L') || (attempt_3[1] == word[3] && word[3] == 'L') || (attempt_3[1] == word[4] && word[4] == 'L') || (attempt_3[2] == word[1] && word[1] == 'L') || (attempt_3[2] == word[0] && word[0] == 'L') || (attempt_3[2] == word[3] && word[3] == 'L') || (attempt_3[2] == word[4] && word[4] == 'L') || (attempt_3[3] == word[1] && word[1] == 'L') || (attempt_3[3] == word[0] && word[0] == 'L') || (attempt_3[3] == word[2] && word[2] == 'L') || (attempt_3[3] == word[4] && word[4] == 'L') || (attempt_3[4] == word[1] && word[1] == 'L') || (attempt_3[4] == word[0] && word[0] == 'L') || (attempt_3[4] == word[3] && word[3] == 'L') || (attempt_3[4] == word[2] && word[2] == 'L') || (attempt_4[0] == word[1] && word[1] == 'L') || (attempt_4[0] == word[2] && word[2] == 'L') || (attempt_4[0] == word[3] && word[3] == 'L') || (attempt_4[0] == word[4] && word[4] == 'L') || (attempt_4[1] == word[0] && word[0] == 'L') || (attempt_4[1] == word[2] && word[2] == 'L') || (attempt_4[1] == word[3] && word[3] == 'L') || (attempt_4[1] == word[4] && word[4] == 'L') || (attempt_4[2] == word[1] && word[1] == 'L') || (attempt_4[2] == word[0] && word[0] == 'L') || (attempt_4[2] == word[3] && word[3] == 'L') || (attempt_4[2] == word[4] && word[4] == 'L') || (attempt_4[3] == word[1] && word[1] == 'L') || (attempt_4[3] == word[0] && word[0] == 'L') || (attempt_4[3] == word[2] && word[2] == 'L') || (attempt_4[3] == word[4] && word[4] == 'L') || (attempt_4[4] == word[1] && word[1] == 'L') || (attempt_4[4] == word[0] && word[0] == 'L') || (attempt_4[4] == word[3] && word[3] == 'L') || (attempt_4[4] == word[2] && word[2] == 'L') || (attempt_5[0] == word[1] && word[1] == 'L') || (attempt_5[0] == word[2] && word[2] == 'L') || (attempt_5[0] == word[3] && word[3] == 'L') || (attempt_5[0] == word[4] && word[4] == 'L') || (attempt_5[1] == word[0] && word[0] == 'L') || (attempt_5[1] == word[2] && word[2] == 'L') || (attempt_5[1] == word[3] && word[3] == 'L') || (attempt_5[1] == word[4] && word[4] == 'L') || (attempt_5[2] == word[1] && word[1] == 'L') || (attempt_5[2] == word[0] && word[0] == 'L') || (attempt_5[2] == word[3] && word[3] == 'L') || (attempt_5[2] == word[4] && word[4] == 'L') || (attempt_5[3] == word[1] && word[1] == 'L') || (attempt_5[3] == word[0] && word[0] == 'L') || (attempt_5[3] == word[2] && word[2] == 'L') || (attempt_5[3] == word[4] && word[4] == 'L') || (attempt_5[4] == word[1] && word[1] == 'L') || (attempt_5[4] == word[0] && word[0] == 'L') || (attempt_5[4] == word[3] && word[3] == 'L') || (attempt_5[4] == word[2] && word[2] == 'L') || (attempt_6[0] == word[1] && word[1] == 'L') || (attempt_6[0] == word[2] && word[2] == 'L') || (attempt_6[0] == word[3] && word[3] == 'L') || (attempt_6[0] == word[4] && word[4] == 'L') || (attempt_6[1] == word[0] && word[0] == 'L') || (attempt_6[1] == word[2] && word[2] == 'L') || (attempt_6[1] == word[3] && word[3] == 'L') || (attempt_6[1] == word[4] && word[4] == 'L') || (attempt_6[2] == word[1] && word[1] == 'L') || (attempt_6[2] == word[0] && word[0] == 'L') || (attempt_6[2] == word[3] && word[3] == 'L') || (attempt_6[2] == word[4] && word[4] == 'L') || (attempt_6[3] == word[1] && word[1] == 'L') || (attempt_6[3] == word[0] && word[0] == 'L') || (attempt_6[3] == word[2] && word[2] == 'L') || (attempt_6[3] == word[4] && word[4] == 'L') || (attempt_6[4] == word[1] && word[1] == 'L') || (attempt_6[4] == word[0] && word[0] == 'L') || (attempt_6[4] == word[3] && word[3] == 'L') || (attempt_6[4] == word[2] && word[2] == 'L'))
    {
        cout << " ";
        c2();
        cout << " L ";
        cout << RESET;
        cout << " ";
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'L') || (attempt_1[0] != word[2] && attempt_1[0] == 'L') || (attempt_1[0] != word[3] && attempt_1[0] == 'L') || (attempt_1[0] != word[4] && attempt_1[0] == 'L') || (attempt_1[1] != word[0] && attempt_1[1] == 'L') || (attempt_1[1] != word[2] && attempt_1[1] == 'L') || (attempt_1[1] != word[3] && attempt_1[1] == 'L') || (attempt_1[1] != word[4] && attempt_1[1] == 'L') || (attempt_1[2] != word[1] && attempt_1[2] == 'L') || (attempt_1[2] != word[0] && attempt_1[2] == 'L') || (attempt_1[2] != word[3] && attempt_1[2] == 'L') || (attempt_1[2] != word[4] && attempt_1[2] == 'L') || (attempt_1[3] != word[1] && attempt_1[3] == 'L') || (attempt_1[3] != word[2] && attempt_1[3] == 'L') || (attempt_1[3] != word[0] && attempt_1[3] == 'L') || (attempt_1[3] != word[4] && attempt_1[3] == 'L') || (attempt_1[4] != word[1] && attempt_1[4] == 'L') || (attempt_1[4] != word[2] && attempt_1[4] == 'L') || (attempt_1[4] != word[3] && attempt_1[4] == 'L') || (attempt_1[4] != word[0] && attempt_1[4] == 'L') || (attempt_2[0] != word[1] && attempt_2[0] == 'L') || (attempt_2[0] != word[2] && attempt_2[0] == 'L') || (attempt_2[0] != word[3] && attempt_2[0] == 'L') || (attempt_2[0] != word[4] && attempt_2[0] == 'L') || (attempt_2[1] != word[0] && attempt_2[1] == 'L') || (attempt_2[1] != word[2] && attempt_2[1] == 'L') || (attempt_2[1] != word[3] && attempt_2[1] == 'L') || (attempt_2[1] != word[4] && attempt_2[1] == 'L') || (attempt_2[2] != word[1] && attempt_2[2] == 'L') || (attempt_2[2] != word[0] && attempt_2[2] == 'L') || (attempt_2[2] != word[3] && attempt_2[2] == 'L') || (attempt_2[2] != word[4] && attempt_2[2] == 'L') || (attempt_2[3] != word[1] && attempt_2[3] == 'L') || (attempt_2[3] != word[2] && attempt_2[3] == 'L') || (attempt_2[3] != word[0] && attempt_2[3] == 'L') || (attempt_2[3] != word[4] && attempt_2[3] == 'L') || (attempt_2[4] != word[1] && attempt_2[4] == 'L') || (attempt_2[4] != word[2] && attempt_2[4] == 'L') || (attempt_2[4] != word[3] && attempt_2[4] == 'L') || (attempt_2[4] != word[0] && attempt_2[4] == 'L') || (attempt_3[0] != word[1] && attempt_3[0] == 'L') || (attempt_3[0] != word[2] && attempt_3[0] == 'L') || (attempt_3[0] != word[3] && attempt_3[0] == 'L') || (attempt_3[0] != word[4] && attempt_3[0] == 'L') || (attempt_3[1] != word[0] && attempt_3[1] == 'L') || (attempt_3[1] != word[2] && attempt_3[1] == 'L') || (attempt_3[1] != word[3] && attempt_3[1] == 'L') || (attempt_3[1] != word[4] && attempt_3[1] == 'L') || (attempt_3[2] != word[1] && attempt_3[2] == 'L') || (attempt_3[2] != word[0] && attempt_3[2] == 'L') || (attempt_3[2] != word[3] && attempt_3[2] == 'L') || (attempt_3[2] != word[4] && attempt_3[2] == 'L') || (attempt_3[3] != word[1] && attempt_3[3] == 'L') || (attempt_3[3] != word[2] && attempt_3[3] == 'L') || (attempt_3[3] != word[0] && attempt_3[3] == 'L') || (attempt_3[3] != word[4] && attempt_3[3] == 'L') || (attempt_3[4] != word[1] && attempt_3[4] == 'L') || (attempt_3[4] != word[2] && attempt_3[4] == 'L') || (attempt_3[4] != word[3] && attempt_3[4] == 'L') || (attempt_3[4] != word[0] && attempt_3[4] == 'L') || (attempt_4[0] != word[1] && attempt_4[0] == 'L') || (attempt_4[0] != word[2] && attempt_4[0] == 'L') || (attempt_4[0] != word[3] && attempt_4[0] == 'L') || (attempt_4[0] != word[4] && attempt_4[0] == 'L') || (attempt_4[1] != word[0] && attempt_4[1] == 'L') || (attempt_4[1] != word[2] && attempt_4[1] == 'L') || (attempt_4[1] != word[3] && attempt_4[1] == 'L') || (attempt_4[1] != word[4] && attempt_4[1] == 'L') || (attempt_4[2] != word[1] && attempt_4[2] == 'L') || (attempt_4[2] != word[0] && attempt_4[2] == 'L') || (attempt_4[2] != word[3] && attempt_4[2] == 'L') || (attempt_4[2] != word[4] && attempt_4[2] == 'L') || (attempt_4[3] != word[1] && attempt_4[3] == 'L') || (attempt_4[3] != word[2] && attempt_4[3] == 'L') || (attempt_4[3] != word[0] && attempt_4[3] == 'L') || (attempt_4[3] != word[4] && attempt_4[3] == 'L') || (attempt_4[4] != word[1] && attempt_4[4] == 'L') || (attempt_4[4] != word[2] && attempt_4[4] == 'L') || (attempt_4[4] != word[3] && attempt_4[4] == 'L') || (attempt_4[4] != word[0] && attempt_4[4] == 'L') || (attempt_5[0] != word[1] && attempt_5[0] == 'L') || (attempt_5[0] != word[2] && attempt_5[0] == 'L') || (attempt_5[0] != word[3] && attempt_5[0] == 'L') || (attempt_5[0] != word[4] && attempt_5[0] == 'L') || (attempt_5[1] != word[0] && attempt_5[1] == 'L') || (attempt_5[1] != word[2] && attempt_5[1] == 'L') || (attempt_5[1] != word[3] && attempt_5[1] == 'L') || (attempt_5[1] != word[4] && attempt_5[1] == 'L') || (attempt_5[2] != word[1] && attempt_5[2] == 'L') || (attempt_5[2] != word[0] && attempt_5[2] == 'L') || (attempt_5[2] != word[3] && attempt_5[2] == 'L') || (attempt_5[2] != word[4] && attempt_5[2] == 'L') || (attempt_5[3] != word[1] && attempt_5[3] == 'L') || (attempt_5[3] != word[2] && attempt_5[3] == 'L') || (attempt_5[3] != word[0] && attempt_5[3] == 'L') || (attempt_5[3] != word[4] && attempt_5[3] == 'L') || (attempt_5[4] != word[1] && attempt_5[4] == 'L') || (attempt_5[4] != word[2] && attempt_5[4] == 'L') || (attempt_5[4] != word[3] && attempt_5[4] == 'L') || (attempt_5[4] != word[0] && attempt_5[4] == 'L') || (attempt_6[0] != word[1] && attempt_6[0] == 'L') || (attempt_6[0] != word[2] && attempt_6[0] == 'L') || (attempt_6[0] != word[3] && attempt_6[0] == 'L') || (attempt_6[0] != word[4] && attempt_6[0] == 'L') || (attempt_6[1] != word[0] && attempt_6[1] == 'L') || (attempt_6[1] != word[2] && attempt_6[1] == 'L') || (attempt_6[1] != word[3] && attempt_6[1] == 'L') || (attempt_6[1] != word[4] && attempt_6[1] == 'L') || (attempt_6[2] != word[1] && attempt_6[2] == 'L') || (attempt_6[2] != word[0] && attempt_6[2] == 'L') || (attempt_6[2] != word[3] && attempt_6[2] == 'L') || (attempt_6[2] != word[4] && attempt_6[2] == 'L') || (attempt_6[3] != word[1] && attempt_6[3] == 'L') || (attempt_6[3] != word[2] && attempt_6[3] == 'L') || (attempt_6[3] != word[0] && attempt_6[3] == 'L') || (attempt_6[3] != word[4] && attempt_6[3] == 'L') || (attempt_6[4] != word[1] && attempt_6[4] == 'L') || (attempt_6[4] != word[2] && attempt_6[4] == 'L') || (attempt_6[4] != word[3] && attempt_6[4] == 'L') || (attempt_6[4] != word[0] && attempt_6[4] == 'L'))
    {
        cout << " ";
        c3();
        cout << " L ";
        cout << RESET;
        cout << " ";
    }
    else
    {
        cout << " ";
        cout << " L ";
        cout << " ";
    }
    cout << endl << endl;
    cout << "                                          ";
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'Z') || (attempt_1[1] == word[1] && attempt_1[1] == 'Z') || (attempt_1[2] == word[2] && attempt_1[2] == 'Z') || (attempt_1[3] == word[3] && attempt_1[3] == 'Z') || (attempt_1[4] == word[4] && attempt_1[4] == 'Z') || (attempt_2[0] == word[0] && attempt_2[0] == 'Z') || (attempt_2[1] == word[1] && attempt_2[1] == 'Z') || (attempt_2[2] == word[2] && attempt_2[2] == 'Z') || (attempt_2[3] == word[3] && attempt_2[3] == 'Z') || (attempt_2[4] == word[4] && attempt_2[4] == 'Z') || (attempt_3[0] == word[0] && attempt_3[0] == 'Z') || (attempt_3[1] == word[1] && attempt_3[1] == 'Z') || (attempt_3[2] == word[2] && attempt_3[2] == 'Z') || (attempt_3[3] == word[3] && attempt_3[3] == 'Z') || (attempt_3[4] == word[4] && attempt_3[4] == 'Z') || (attempt_4[0] == word[0] && attempt_4[0] == 'Z') || (attempt_4[1] == word[1] && attempt_4[1] == 'Z') || (attempt_4[2] == word[2] && attempt_4[2] == 'Z') || (attempt_4[3] == word[3] && attempt_4[3] == 'Z') || (attempt_4[4] == word[4] && attempt_4[4] == 'Z') || (attempt_5[0] == word[0] && attempt_5[0] == 'Z') || (attempt_5[1] == word[1] && attempt_5[1] == 'Z') || (attempt_5[2] == word[2] && attempt_5[2] == 'Z') || (attempt_5[3] == word[3] && attempt_5[3] == 'Z') || (attempt_5[4] == word[4] && attempt_5[4] == 'Z') || (attempt_6[0] == word[0] && attempt_6[0] == 'Z') || (attempt_6[1] == word[1] && attempt_6[1] == 'Z') || (attempt_6[2] == word[2] && attempt_6[2] == 'Z') || (attempt_6[3] == word[3] && attempt_6[3] == 'Z') || (attempt_6[4] == word[4] && attempt_6[4] == 'Z'))
    {
        cout << " ";
        c1();
        cout << " Z ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'Z') || (attempt_1[0] == word[2] && word[2] == 'Z') || (attempt_1[0] == word[3] && word[3] == 'Z') || (attempt_1[0] == word[4] && word[4] == 'Z') || (attempt_1[1] == word[0] && word[0] == 'Z') || (attempt_1[1] == word[2] && word[2] == 'Z') || (attempt_1[1] == word[3] && word[3] == 'Z') || (attempt_1[1] == word[4] && word[4] == 'Z') || (attempt_1[2] == word[1] && word[1] == 'Z') || (attempt_1[2] == word[0] && word[0] == 'Z') || (attempt_1[2] == word[3] && word[3] == 'Z') || (attempt_1[2] == word[4] && word[4] == 'Z') || (attempt_1[3] == word[1] && word[1] == 'Z') || (attempt_1[3] == word[0] && word[0] == 'Z') || (attempt_1[3] == word[2] && word[2] == 'Z') || (attempt_1[3] == word[4] && word[4] == 'Z') || (attempt_1[4] == word[1] && word[1] == 'Z') || (attempt_1[4] == word[0] && word[0] == 'Z') || (attempt_1[4] == word[3] && word[3] == 'Z') || (attempt_1[4] == word[2] && word[2] == 'Z') || (attempt_2[0] == word[1] && word[1] == 'Z') || (attempt_2[0] == word[2] && word[2] == 'Z') || (attempt_2[0] == word[3] && word[3] == 'Z') || (attempt_2[0] == word[4] && word[4] == 'Z') || (attempt_2[1] == word[0] && word[0] == 'Z') || (attempt_2[1] == word[2] && word[2] == 'Z') || (attempt_2[1] == word[3] && word[3] == 'Z') || (attempt_2[1] == word[4] && word[4] == 'Z') || (attempt_2[2] == word[1] && word[1] == 'Z') || (attempt_2[2] == word[0] && word[0] == 'Z') || (attempt_2[2] == word[3] && word[3] == 'Z') || (attempt_2[2] == word[4] && word[4] == 'Z') || (attempt_2[3] == word[1] && word[1] == 'Z') || (attempt_2[3] == word[0] && word[0] == 'Z') || (attempt_2[3] == word[2] && word[2] == 'Z') || (attempt_2[3] == word[4] && word[4] == 'Z') || (attempt_2[4] == word[1] && word[1] == 'Z') || (attempt_2[4] == word[0] && word[0] == 'Z') || (attempt_2[4] == word[3] && word[3] == 'Z') || (attempt_2[4] == word[2] && word[2] == 'Z') || (attempt_3[0] == word[1] && word[1] == 'Z') || (attempt_3[0] == word[2] && word[2] == 'Z') || (attempt_3[0] == word[3] && word[3] == 'Z') || (attempt_3[0] == word[4] && word[4] == 'Z') || (attempt_3[1] == word[0] && word[0] == 'Z') || (attempt_3[1] == word[2] && word[2] == 'Z') || (attempt_3[1] == word[3] && word[3] == 'Z') || (attempt_3[1] == word[4] && word[4] == 'Z') || (attempt_3[2] == word[1] && word[1] == 'Z') || (attempt_3[2] == word[0] && word[0] == 'Z') || (attempt_3[2] == word[3] && word[3] == 'Z') || (attempt_3[2] == word[4] && word[4] == 'Z') || (attempt_3[3] == word[1] && word[1] == 'Z') || (attempt_3[3] == word[0] && word[0] == 'Z') || (attempt_3[3] == word[2] && word[2] == 'Z') || (attempt_3[3] == word[4] && word[4] == 'Z') || (attempt_3[4] == word[1] && word[1] == 'Z') || (attempt_3[4] == word[0] && word[0] == 'Z') || (attempt_3[4] == word[3] && word[3] == 'Z') || (attempt_3[4] == word[2] && word[2] == 'Z') || (attempt_4[0] == word[1] && word[1] == 'Z') || (attempt_4[0] == word[2] && word[2] == 'Z') || (attempt_4[0] == word[3] && word[3] == 'Z') || (attempt_4[0] == word[4] && word[4] == 'Z') || (attempt_4[1] == word[0] && word[0] == 'Z') || (attempt_4[1] == word[2] && word[2] == 'Z') || (attempt_4[1] == word[3] && word[3] == 'Z') || (attempt_4[1] == word[4] && word[4] == 'Z') || (attempt_4[2] == word[1] && word[1] == 'Z') || (attempt_4[2] == word[0] && word[0] == 'Z') || (attempt_4[2] == word[3] && word[3] == 'Z') || (attempt_4[2] == word[4] && word[4] == 'Z') || (attempt_4[3] == word[1] && word[1] == 'Z') || (attempt_4[3] == word[0] && word[0] == 'Z') || (attempt_4[3] == word[2] && word[2] == 'Z') || (attempt_4[3] == word[4] && word[4] == 'Z') || (attempt_4[4] == word[1] && word[1] == 'Z') || (attempt_4[4] == word[0] && word[0] == 'Z') || (attempt_4[4] == word[3] && word[3] == 'Z') || (attempt_4[4] == word[2] && word[2] == 'Z') || (attempt_5[0] == word[1] && word[1] == 'Z') || (attempt_5[0] == word[2] && word[2] == 'Z') || (attempt_5[0] == word[3] && word[3] == 'Z') || (attempt_5[0] == word[4] && word[4] == 'Z') || (attempt_5[1] == word[0] && word[0] == 'Z') || (attempt_5[1] == word[2] && word[2] == 'Z') || (attempt_5[1] == word[3] && word[3] == 'Z') || (attempt_5[1] == word[4] && word[4] == 'Z') || (attempt_5[2] == word[1] && word[1] == 'Z') || (attempt_5[2] == word[0] && word[0] == 'Z') || (attempt_5[2] == word[3] && word[3] == 'Z') || (attempt_5[2] == word[4] && word[4] == 'Z') || (attempt_5[3] == word[1] && word[1] == 'Z') || (attempt_5[3] == word[0] && word[0] == 'Z') || (attempt_5[3] == word[2] && word[2] == 'Z') || (attempt_5[3] == word[4] && word[4] == 'Z') || (attempt_5[4] == word[1] && word[1] == 'Z') || (attempt_5[4] == word[0] && word[0] == 'Z') || (attempt_5[4] == word[3] && word[3] == 'Z') || (attempt_5[4] == word[2] && word[2] == 'Z') || (attempt_6[0] == word[1] && word[1] == 'Z') || (attempt_6[0] == word[2] && word[2] == 'Z') || (attempt_6[0] == word[3] && word[3] == 'Z') || (attempt_6[0] == word[4] && word[4] == 'Z') || (attempt_6[1] == word[0] && word[0] == 'Z') || (attempt_6[1] == word[2] && word[2] == 'Z') || (attempt_6[1] == word[3] && word[3] == 'Z') || (attempt_6[1] == word[4] && word[4] == 'Z') || (attempt_6[2] == word[1] && word[1] == 'Z') || (attempt_6[2] == word[0] && word[0] == 'Z') || (attempt_6[2] == word[3] && word[3] == 'Z') || (attempt_6[2] == word[4] && word[4] == 'Z') || (attempt_6[3] == word[1] && word[1] == 'Z') || (attempt_6[3] == word[0] && word[0] == 'Z') || (attempt_6[3] == word[2] && word[2] == 'Z') || (attempt_6[3] == word[4] && word[4] == 'Z') || (attempt_6[4] == word[1] && word[1] == 'Z') || (attempt_6[4] == word[0] && word[0] == 'Z') || (attempt_6[4] == word[3] && word[3] == 'Z') || (attempt_6[4] == word[2] && word[2] == 'Z'))
    {
        cout << " ";
        c2();
        cout << " Z ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'Z') || (attempt_1[0] != word[2] && attempt_1[0] == 'Z') || (attempt_1[0] != word[3] && attempt_1[0] == 'Z') || (attempt_1[0] != word[4] && attempt_1[0] == 'Z') || (attempt_1[1] != word[0] && attempt_1[1] == 'Z') || (attempt_1[1] != word[2] && attempt_1[1] == 'Z') || (attempt_1[1] != word[3] && attempt_1[1] == 'Z') || (attempt_1[1] != word[4] && attempt_1[1] == 'Z') || (attempt_1[2] != word[1] && attempt_1[2] == 'Z') || (attempt_1[2] != word[0] && attempt_1[2] == 'Z') || (attempt_1[2] != word[3] && attempt_1[2] == 'Z') || (attempt_1[2] != word[4] && attempt_1[2] == 'Z') || (attempt_1[3] != word[1] && attempt_1[3] == 'Z') || (attempt_1[3] != word[2] && attempt_1[3] == 'Z') || (attempt_1[3] != word[0] && attempt_1[3] == 'Z') || (attempt_1[3] != word[4] && attempt_1[3] == 'Z') || (attempt_1[4] != word[1] && attempt_1[4] == 'Z') || (attempt_1[4] != word[2] && attempt_1[4] == 'Z') || (attempt_1[4] != word[3] && attempt_1[4] == 'Z') || (attempt_1[4] != word[0] && attempt_1[4] == 'Z') || (attempt_2[0] != word[1] && attempt_2[0] == 'Z') || (attempt_2[0] != word[2] && attempt_2[0] == 'Z') || (attempt_2[0] != word[3] && attempt_2[0] == 'Z') || (attempt_2[0] != word[4] && attempt_2[0] == 'Z') || (attempt_2[1] != word[0] && attempt_2[1] == 'Z') || (attempt_2[1] != word[2] && attempt_2[1] == 'Z') || (attempt_2[1] != word[3] && attempt_2[1] == 'Z') || (attempt_2[1] != word[4] && attempt_2[1] == 'Z') || (attempt_2[2] != word[1] && attempt_2[2] == 'Z') || (attempt_2[2] != word[0] && attempt_2[2] == 'Z') || (attempt_2[2] != word[3] && attempt_2[2] == 'Z') || (attempt_2[2] != word[4] && attempt_2[2] == 'Z') || (attempt_2[3] != word[1] && attempt_2[3] == 'Z') || (attempt_2[3] != word[2] && attempt_2[3] == 'Z') || (attempt_2[3] != word[0] && attempt_2[3] == 'Z') || (attempt_2[3] != word[4] && attempt_2[3] == 'Z') || (attempt_2[4] != word[1] && attempt_2[4] == 'Z') || (attempt_2[4] != word[2] && attempt_2[4] == 'Z') || (attempt_2[4] != word[3] && attempt_2[4] == 'Z') || (attempt_2[4] != word[0] && attempt_2[4] == 'Z') || (attempt_3[0] != word[1] && attempt_3[0] == 'Z') || (attempt_3[0] != word[2] && attempt_3[0] == 'Z') || (attempt_3[0] != word[3] && attempt_3[0] == 'Z') || (attempt_3[0] != word[4] && attempt_3[0] == 'Z') || (attempt_3[1] != word[0] && attempt_3[1] == 'Z') || (attempt_3[1] != word[2] && attempt_3[1] == 'Z') || (attempt_3[1] != word[3] && attempt_3[1] == 'Z') || (attempt_3[1] != word[4] && attempt_3[1] == 'Z') || (attempt_3[2] != word[1] && attempt_3[2] == 'Z') || (attempt_3[2] != word[0] && attempt_3[2] == 'Z') || (attempt_3[2] != word[3] && attempt_3[2] == 'Z') || (attempt_3[2] != word[4] && attempt_3[2] == 'Z') || (attempt_3[3] != word[1] && attempt_3[3] == 'Z') || (attempt_3[3] != word[2] && attempt_3[3] == 'Z') || (attempt_3[3] != word[0] && attempt_3[3] == 'Z') || (attempt_3[3] != word[4] && attempt_3[3] == 'Z') || (attempt_3[4] != word[1] && attempt_3[4] == 'Z') || (attempt_3[4] != word[2] && attempt_3[4] == 'Z') || (attempt_3[4] != word[3] && attempt_3[4] == 'Z') || (attempt_3[4] != word[0] && attempt_3[4] == 'Z') || (attempt_4[0] != word[1] && attempt_4[0] == 'Z') || (attempt_4[0] != word[2] && attempt_4[0] == 'Z') || (attempt_4[0] != word[3] && attempt_4[0] == 'Z') || (attempt_4[0] != word[4] && attempt_4[0] == 'Z') || (attempt_4[1] != word[0] && attempt_4[1] == 'Z') || (attempt_4[1] != word[2] && attempt_4[1] == 'Z') || (attempt_4[1] != word[3] && attempt_4[1] == 'Z') || (attempt_4[1] != word[4] && attempt_4[1] == 'Z') || (attempt_4[2] != word[1] && attempt_4[2] == 'Z') || (attempt_4[2] != word[0] && attempt_4[2] == 'Z') || (attempt_4[2] != word[3] && attempt_4[2] == 'Z') || (attempt_4[2] != word[4] && attempt_4[2] == 'Z') || (attempt_4[3] != word[1] && attempt_4[3] == 'Z') || (attempt_4[3] != word[2] && attempt_4[3] == 'Z') || (attempt_4[3] != word[0] && attempt_4[3] == 'Z') || (attempt_4[3] != word[4] && attempt_4[3] == 'Z') || (attempt_4[4] != word[1] && attempt_4[4] == 'Z') || (attempt_4[4] != word[2] && attempt_4[4] == 'Z') || (attempt_4[4] != word[3] && attempt_4[4] == 'Z') || (attempt_4[4] != word[0] && attempt_4[4] == 'Z') || (attempt_5[0] != word[1] && attempt_5[0] == 'Z') || (attempt_5[0] != word[2] && attempt_5[0] == 'Z') || (attempt_5[0] != word[3] && attempt_5[0] == 'Z') || (attempt_5[0] != word[4] && attempt_5[0] == 'Z') || (attempt_5[1] != word[0] && attempt_5[1] == 'Z') || (attempt_5[1] != word[2] && attempt_5[1] == 'Z') || (attempt_5[1] != word[3] && attempt_5[1] == 'Z') || (attempt_5[1] != word[4] && attempt_5[1] == 'Z') || (attempt_5[2] != word[1] && attempt_5[2] == 'Z') || (attempt_5[2] != word[0] && attempt_5[2] == 'Z') || (attempt_5[2] != word[3] && attempt_5[2] == 'Z') || (attempt_5[2] != word[4] && attempt_5[2] == 'Z') || (attempt_5[3] != word[1] && attempt_5[3] == 'Z') || (attempt_5[3] != word[2] && attempt_5[3] == 'Z') || (attempt_5[3] != word[0] && attempt_5[3] == 'Z') || (attempt_5[3] != word[4] && attempt_5[3] == 'Z') || (attempt_5[4] != word[1] && attempt_5[4] == 'Z') || (attempt_5[4] != word[2] && attempt_5[4] == 'Z') || (attempt_5[4] != word[3] && attempt_5[4] == 'Z') || (attempt_5[4] != word[0] && attempt_5[4] == 'Z') || (attempt_6[0] != word[1] && attempt_6[0] == 'Z') || (attempt_6[0] != word[2] && attempt_6[0] == 'Z') || (attempt_6[0] != word[3] && attempt_6[0] == 'Z') || (attempt_6[0] != word[4] && attempt_6[0] == 'Z') || (attempt_6[1] != word[0] && attempt_6[1] == 'Z') || (attempt_6[1] != word[2] && attempt_6[1] == 'Z') || (attempt_6[1] != word[3] && attempt_6[1] == 'Z') || (attempt_6[1] != word[4] && attempt_6[1] == 'Z') || (attempt_6[2] != word[1] && attempt_6[2] == 'Z') || (attempt_6[2] != word[0] && attempt_6[2] == 'Z') || (attempt_6[2] != word[3] && attempt_6[2] == 'Z') || (attempt_6[2] != word[4] && attempt_6[2] == 'Z') || (attempt_6[3] != word[1] && attempt_6[3] == 'Z') || (attempt_6[3] != word[2] && attempt_6[3] == 'Z') || (attempt_6[3] != word[0] && attempt_6[3] == 'Z') || (attempt_6[3] != word[4] && attempt_6[3] == 'Z') || (attempt_6[4] != word[1] && attempt_6[4] == 'Z') || (attempt_6[4] != word[2] && attempt_6[4] == 'Z') || (attempt_6[4] != word[3] && attempt_6[4] == 'Z') || (attempt_6[4] != word[0] && attempt_6[4] == 'Z'))
    {
        cout << " ";
        c3();
        cout << " Z ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " Z ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'X') || (attempt_1[1] == word[1] && attempt_1[1] == 'X') || (attempt_1[2] == word[2] && attempt_1[2] == 'X') || (attempt_1[3] == word[3] && attempt_1[3] == 'X') || (attempt_1[4] == word[4] && attempt_1[4] == 'X') || (attempt_2[0] == word[0] && attempt_2[0] == 'X') || (attempt_2[1] == word[1] && attempt_2[1] == 'X') || (attempt_2[2] == word[2] && attempt_2[2] == 'X') || (attempt_2[3] == word[3] && attempt_2[3] == 'X') || (attempt_2[4] == word[4] && attempt_2[4] == 'X') || (attempt_3[0] == word[0] && attempt_3[0] == 'X') || (attempt_3[1] == word[1] && attempt_3[1] == 'X') || (attempt_3[2] == word[2] && attempt_3[2] == 'X') || (attempt_3[3] == word[3] && attempt_3[3] == 'X') || (attempt_3[4] == word[4] && attempt_3[4] == 'X') || (attempt_4[0] == word[0] && attempt_4[0] == 'X') || (attempt_4[1] == word[1] && attempt_4[1] == 'X') || (attempt_4[2] == word[2] && attempt_4[2] == 'X') || (attempt_4[3] == word[3] && attempt_4[3] == 'X') || (attempt_4[4] == word[4] && attempt_4[4] == 'X') || (attempt_5[0] == word[0] && attempt_5[0] == 'X') || (attempt_5[1] == word[1] && attempt_5[1] == 'X') || (attempt_5[2] == word[2] && attempt_5[2] == 'X') || (attempt_5[3] == word[3] && attempt_5[3] == 'X') || (attempt_5[4] == word[4] && attempt_5[4] == 'X') || (attempt_6[0] == word[0] && attempt_6[0] == 'X') || (attempt_6[1] == word[1] && attempt_6[1] == 'X') || (attempt_6[2] == word[2] && attempt_6[2] == 'X') || (attempt_6[3] == word[3] && attempt_6[3] == 'X') || (attempt_6[4] == word[4] && attempt_6[4] == 'X'))
    {
        cout << " ";
        c1();
        cout << " X ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'X') || (attempt_1[0] == word[2] && word[2] == 'X') || (attempt_1[0] == word[3] && word[3] == 'X') || (attempt_1[0] == word[4] && word[4] == 'X') || (attempt_1[1] == word[0] && word[0] == 'X') || (attempt_1[1] == word[2] && word[2] == 'X') || (attempt_1[1] == word[3] && word[3] == 'X') || (attempt_1[1] == word[4] && word[4] == 'X') || (attempt_1[2] == word[1] && word[1] == 'X') || (attempt_1[2] == word[0] && word[0] == 'X') || (attempt_1[2] == word[3] && word[3] == 'X') || (attempt_1[2] == word[4] && word[4] == 'X') || (attempt_1[3] == word[1] && word[1] == 'X') || (attempt_1[3] == word[0] && word[0] == 'X') || (attempt_1[3] == word[2] && word[2] == 'X') || (attempt_1[3] == word[4] && word[4] == 'X') || (attempt_1[4] == word[1] && word[1] == 'X') || (attempt_1[4] == word[0] && word[0] == 'X') || (attempt_1[4] == word[3] && word[3] == 'X') || (attempt_1[4] == word[2] && word[2] == 'X') || (attempt_2[0] == word[1] && word[1] == 'X') || (attempt_2[0] == word[2] && word[2] == 'X') || (attempt_2[0] == word[3] && word[3] == 'X') || (attempt_2[0] == word[4] && word[4] == 'X') || (attempt_2[1] == word[0] && word[0] == 'X') || (attempt_2[1] == word[2] && word[2] == 'X') || (attempt_2[1] == word[3] && word[3] == 'X') || (attempt_2[1] == word[4] && word[4] == 'X') || (attempt_2[2] == word[1] && word[1] == 'X') || (attempt_2[2] == word[0] && word[0] == 'X') || (attempt_2[2] == word[3] && word[3] == 'X') || (attempt_2[2] == word[4] && word[4] == 'X') || (attempt_2[3] == word[1] && word[1] == 'X') || (attempt_2[3] == word[0] && word[0] == 'X') || (attempt_2[3] == word[2] && word[2] == 'X') || (attempt_2[3] == word[4] && word[4] == 'X') || (attempt_2[4] == word[1] && word[1] == 'X') || (attempt_2[4] == word[0] && word[0] == 'X') || (attempt_2[4] == word[3] && word[3] == 'X') || (attempt_2[4] == word[2] && word[2] == 'X') || (attempt_3[0] == word[1] && word[1] == 'X') || (attempt_3[0] == word[2] && word[2] == 'X') || (attempt_3[0] == word[3] && word[3] == 'X') || (attempt_3[0] == word[4] && word[4] == 'X') || (attempt_3[1] == word[0] && word[0] == 'X') || (attempt_3[1] == word[2] && word[2] == 'X') || (attempt_3[1] == word[3] && word[3] == 'X') || (attempt_3[1] == word[4] && word[4] == 'X') || (attempt_3[2] == word[1] && word[1] == 'X') || (attempt_3[2] == word[0] && word[0] == 'X') || (attempt_3[2] == word[3] && word[3] == 'X') || (attempt_3[2] == word[4] && word[4] == 'X') || (attempt_3[3] == word[1] && word[1] == 'X') || (attempt_3[3] == word[0] && word[0] == 'X') || (attempt_3[3] == word[2] && word[2] == 'X') || (attempt_3[3] == word[4] && word[4] == 'X') || (attempt_3[4] == word[1] && word[1] == 'X') || (attempt_3[4] == word[0] && word[0] == 'X') || (attempt_3[4] == word[3] && word[3] == 'X') || (attempt_3[4] == word[2] && word[2] == 'X') || (attempt_4[0] == word[1] && word[1] == 'X') || (attempt_4[0] == word[2] && word[2] == 'X') || (attempt_4[0] == word[3] && word[3] == 'X') || (attempt_4[0] == word[4] && word[4] == 'X') || (attempt_4[1] == word[0] && word[0] == 'X') || (attempt_4[1] == word[2] && word[2] == 'X') || (attempt_4[1] == word[3] && word[3] == 'X') || (attempt_4[1] == word[4] && word[4] == 'X') || (attempt_4[2] == word[1] && word[1] == 'X') || (attempt_4[2] == word[0] && word[0] == 'X') || (attempt_4[2] == word[3] && word[3] == 'X') || (attempt_4[2] == word[4] && word[4] == 'X') || (attempt_4[3] == word[1] && word[1] == 'X') || (attempt_4[3] == word[0] && word[0] == 'X') || (attempt_4[3] == word[2] && word[2] == 'X') || (attempt_4[3] == word[4] && word[4] == 'X') || (attempt_4[4] == word[1] && word[1] == 'X') || (attempt_4[4] == word[0] && word[0] == 'X') || (attempt_4[4] == word[3] && word[3] == 'X') || (attempt_4[4] == word[2] && word[2] == 'X') || (attempt_5[0] == word[1] && word[1] == 'X') || (attempt_5[0] == word[2] && word[2] == 'X') || (attempt_5[0] == word[3] && word[3] == 'X') || (attempt_5[0] == word[4] && word[4] == 'X') || (attempt_5[1] == word[0] && word[0] == 'X') || (attempt_5[1] == word[2] && word[2] == 'X') || (attempt_5[1] == word[3] && word[3] == 'X') || (attempt_5[1] == word[4] && word[4] == 'X') || (attempt_5[2] == word[1] && word[1] == 'X') || (attempt_5[2] == word[0] && word[0] == 'X') || (attempt_5[2] == word[3] && word[3] == 'X') || (attempt_5[2] == word[4] && word[4] == 'X') || (attempt_5[3] == word[1] && word[1] == 'X') || (attempt_5[3] == word[0] && word[0] == 'X') || (attempt_5[3] == word[2] && word[2] == 'X') || (attempt_5[3] == word[4] && word[4] == 'X') || (attempt_5[4] == word[1] && word[1] == 'X') || (attempt_5[4] == word[0] && word[0] == 'X') || (attempt_5[4] == word[3] && word[3] == 'X') || (attempt_5[4] == word[2] && word[2] == 'X') || (attempt_6[0] == word[1] && word[1] == 'X') || (attempt_6[0] == word[2] && word[2] == 'X') || (attempt_6[0] == word[3] && word[3] == 'X') || (attempt_6[0] == word[4] && word[4] == 'X') || (attempt_6[1] == word[0] && word[0] == 'X') || (attempt_6[1] == word[2] && word[2] == 'X') || (attempt_6[1] == word[3] && word[3] == 'X') || (attempt_6[1] == word[4] && word[4] == 'X') || (attempt_6[2] == word[1] && word[1] == 'X') || (attempt_6[2] == word[0] && word[0] == 'X') || (attempt_6[2] == word[3] && word[3] == 'X') || (attempt_6[2] == word[4] && word[4] == 'X') || (attempt_6[3] == word[1] && word[1] == 'X') || (attempt_6[3] == word[0] && word[0] == 'X') || (attempt_6[3] == word[2] && word[2] == 'X') || (attempt_6[3] == word[4] && word[4] == 'X') || (attempt_6[4] == word[1] && word[1] == 'X') || (attempt_6[4] == word[0] && word[0] == 'X') || (attempt_6[4] == word[3] && word[3] == 'X') || (attempt_6[4] == word[2] && word[2] == 'X'))
    {
        cout << " ";
        c2();
        cout << " X ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'X') || (attempt_1[0] != word[2] && attempt_1[0] == 'X') || (attempt_1[0] != word[3] && attempt_1[0] == 'X') || (attempt_1[0] != word[4] && attempt_1[0] == 'X') || (attempt_1[1] != word[0] && attempt_1[1] == 'X') || (attempt_1[1] != word[2] && attempt_1[1] == 'X') || (attempt_1[1] != word[3] && attempt_1[1] == 'X') || (attempt_1[1] != word[4] && attempt_1[1] == 'X') || (attempt_1[2] != word[1] && attempt_1[2] == 'X') || (attempt_1[2] != word[0] && attempt_1[2] == 'X') || (attempt_1[2] != word[3] && attempt_1[2] == 'X') || (attempt_1[2] != word[4] && attempt_1[2] == 'X') || (attempt_1[3] != word[1] && attempt_1[3] == 'X') || (attempt_1[3] != word[2] && attempt_1[3] == 'X') || (attempt_1[3] != word[0] && attempt_1[3] == 'X') || (attempt_1[3] != word[4] && attempt_1[3] == 'X') || (attempt_1[4] != word[1] && attempt_1[4] == 'X') || (attempt_1[4] != word[2] && attempt_1[4] == 'X') || (attempt_1[4] != word[3] && attempt_1[4] == 'X') || (attempt_1[4] != word[0] && attempt_1[4] == 'X') || (attempt_2[0] != word[1] && attempt_2[0] == 'X') || (attempt_2[0] != word[2] && attempt_2[0] == 'X') || (attempt_2[0] != word[3] && attempt_2[0] == 'X') || (attempt_2[0] != word[4] && attempt_2[0] == 'X') || (attempt_2[1] != word[0] && attempt_2[1] == 'X') || (attempt_2[1] != word[2] && attempt_2[1] == 'X') || (attempt_2[1] != word[3] && attempt_2[1] == 'X') || (attempt_2[1] != word[4] && attempt_2[1] == 'X') || (attempt_2[2] != word[1] && attempt_2[2] == 'X') || (attempt_2[2] != word[0] && attempt_2[2] == 'X') || (attempt_2[2] != word[3] && attempt_2[2] == 'X') || (attempt_2[2] != word[4] && attempt_2[2] == 'X') || (attempt_2[3] != word[1] && attempt_2[3] == 'X') || (attempt_2[3] != word[2] && attempt_2[3] == 'X') || (attempt_2[3] != word[0] && attempt_2[3] == 'X') || (attempt_2[3] != word[4] && attempt_2[3] == 'X') || (attempt_2[4] != word[1] && attempt_2[4] == 'X') || (attempt_2[4] != word[2] && attempt_2[4] == 'X') || (attempt_2[4] != word[3] && attempt_2[4] == 'X') || (attempt_2[4] != word[0] && attempt_2[4] == 'X') || (attempt_3[0] != word[1] && attempt_3[0] == 'X') || (attempt_3[0] != word[2] && attempt_3[0] == 'X') || (attempt_3[0] != word[3] && attempt_3[0] == 'X') || (attempt_3[0] != word[4] && attempt_3[0] == 'X') || (attempt_3[1] != word[0] && attempt_3[1] == 'X') || (attempt_3[1] != word[2] && attempt_3[1] == 'X') || (attempt_3[1] != word[3] && attempt_3[1] == 'X') || (attempt_3[1] != word[4] && attempt_3[1] == 'X') || (attempt_3[2] != word[1] && attempt_3[2] == 'X') || (attempt_3[2] != word[0] && attempt_3[2] == 'X') || (attempt_3[2] != word[3] && attempt_3[2] == 'X') || (attempt_3[2] != word[4] && attempt_3[2] == 'X') || (attempt_3[3] != word[1] && attempt_3[3] == 'X') || (attempt_3[3] != word[2] && attempt_3[3] == 'X') || (attempt_3[3] != word[0] && attempt_3[3] == 'X') || (attempt_3[3] != word[4] && attempt_3[3] == 'X') || (attempt_3[4] != word[1] && attempt_3[4] == 'X') || (attempt_3[4] != word[2] && attempt_3[4] == 'X') || (attempt_3[4] != word[3] && attempt_3[4] == 'X') || (attempt_3[4] != word[0] && attempt_3[4] == 'X') || (attempt_4[0] != word[1] && attempt_4[0] == 'X') || (attempt_4[0] != word[2] && attempt_4[0] == 'X') || (attempt_4[0] != word[3] && attempt_4[0] == 'X') || (attempt_4[0] != word[4] && attempt_4[0] == 'X') || (attempt_4[1] != word[0] && attempt_4[1] == 'X') || (attempt_4[1] != word[2] && attempt_4[1] == 'X') || (attempt_4[1] != word[3] && attempt_4[1] == 'X') || (attempt_4[1] != word[4] && attempt_4[1] == 'X') || (attempt_4[2] != word[1] && attempt_4[2] == 'X') || (attempt_4[2] != word[0] && attempt_4[2] == 'X') || (attempt_4[2] != word[3] && attempt_4[2] == 'X') || (attempt_4[2] != word[4] && attempt_4[2] == 'X') || (attempt_4[3] != word[1] && attempt_4[3] == 'X') || (attempt_4[3] != word[2] && attempt_4[3] == 'X') || (attempt_4[3] != word[0] && attempt_4[3] == 'X') || (attempt_4[3] != word[4] && attempt_4[3] == 'X') || (attempt_4[4] != word[1] && attempt_4[4] == 'X') || (attempt_4[4] != word[2] && attempt_4[4] == 'X') || (attempt_4[4] != word[3] && attempt_4[4] == 'X') || (attempt_4[4] != word[0] && attempt_4[4] == 'X') || (attempt_5[0] != word[1] && attempt_5[0] == 'X') || (attempt_5[0] != word[2] && attempt_5[0] == 'X') || (attempt_5[0] != word[3] && attempt_5[0] == 'X') || (attempt_5[0] != word[4] && attempt_5[0] == 'X') || (attempt_5[1] != word[0] && attempt_5[1] == 'X') || (attempt_5[1] != word[2] && attempt_5[1] == 'X') || (attempt_5[1] != word[3] && attempt_5[1] == 'X') || (attempt_5[1] != word[4] && attempt_5[1] == 'X') || (attempt_5[2] != word[1] && attempt_5[2] == 'X') || (attempt_5[2] != word[0] && attempt_5[2] == 'X') || (attempt_5[2] != word[3] && attempt_5[2] == 'X') || (attempt_5[2] != word[4] && attempt_5[2] == 'X') || (attempt_5[3] != word[1] && attempt_5[3] == 'X') || (attempt_5[3] != word[2] && attempt_5[3] == 'X') || (attempt_5[3] != word[0] && attempt_5[3] == 'X') || (attempt_5[3] != word[4] && attempt_5[3] == 'X') || (attempt_5[4] != word[1] && attempt_5[4] == 'X') || (attempt_5[4] != word[2] && attempt_5[4] == 'X') || (attempt_5[4] != word[3] && attempt_5[4] == 'X') || (attempt_5[4] != word[0] && attempt_5[4] == 'X') || (attempt_6[0] != word[1] && attempt_6[0] == 'X') || (attempt_6[0] != word[2] && attempt_6[0] == 'X') || (attempt_6[0] != word[3] && attempt_6[0] == 'X') || (attempt_6[0] != word[4] && attempt_6[0] == 'X') || (attempt_6[1] != word[0] && attempt_6[1] == 'X') || (attempt_6[1] != word[2] && attempt_6[1] == 'X') || (attempt_6[1] != word[3] && attempt_6[1] == 'X') || (attempt_6[1] != word[4] && attempt_6[1] == 'X') || (attempt_6[2] != word[1] && attempt_6[2] == 'X') || (attempt_6[2] != word[0] && attempt_6[2] == 'X') || (attempt_6[2] != word[3] && attempt_6[2] == 'X') || (attempt_6[2] != word[4] && attempt_6[2] == 'X') || (attempt_6[3] != word[1] && attempt_6[3] == 'X') || (attempt_6[3] != word[2] && attempt_6[3] == 'X') || (attempt_6[3] != word[0] && attempt_6[3] == 'X') || (attempt_6[3] != word[4] && attempt_6[3] == 'X') || (attempt_6[4] != word[1] && attempt_6[4] == 'X') || (attempt_6[4] != word[2] && attempt_6[4] == 'X') || (attempt_6[4] != word[3] && attempt_6[4] == 'X') || (attempt_6[4] != word[0] && attempt_6[4] == 'X'))
    {
        cout << " ";
        c3();
        cout << " X ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " X ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'C') || (attempt_1[1] == word[1] && attempt_1[1] == 'C') || (attempt_1[2] == word[2] && attempt_1[2] == 'C') || (attempt_1[3] == word[3] && attempt_1[3] == 'C') || (attempt_1[4] == word[4] && attempt_1[4] == 'C') || (attempt_2[0] == word[0] && attempt_2[0] == 'C') || (attempt_2[1] == word[1] && attempt_2[1] == 'C') || (attempt_2[2] == word[2] && attempt_2[2] == 'C') || (attempt_2[3] == word[3] && attempt_2[3] == 'C') || (attempt_2[4] == word[4] && attempt_2[4] == 'C') || (attempt_3[0] == word[0] && attempt_3[0] == 'C') || (attempt_3[1] == word[1] && attempt_3[1] == 'C') || (attempt_3[2] == word[2] && attempt_3[2] == 'C') || (attempt_3[3] == word[3] && attempt_3[3] == 'C') || (attempt_3[4] == word[4] && attempt_3[4] == 'C') || (attempt_4[0] == word[0] && attempt_4[0] == 'C') || (attempt_4[1] == word[1] && attempt_4[1] == 'C') || (attempt_4[2] == word[2] && attempt_4[2] == 'C') || (attempt_4[3] == word[3] && attempt_4[3] == 'C') || (attempt_4[4] == word[4] && attempt_4[4] == 'C') || (attempt_5[0] == word[0] && attempt_5[0] == 'C') || (attempt_5[1] == word[1] && attempt_5[1] == 'C') || (attempt_5[2] == word[2] && attempt_5[2] == 'C') || (attempt_5[3] == word[3] && attempt_5[3] == 'C') || (attempt_5[4] == word[4] && attempt_5[4] == 'C') || (attempt_6[0] == word[0] && attempt_6[0] == 'C') || (attempt_6[1] == word[1] && attempt_6[1] == 'C') || (attempt_6[2] == word[2] && attempt_6[2] == 'C') || (attempt_6[3] == word[3] && attempt_6[3] == 'C') || (attempt_6[4] == word[4] && attempt_6[4] == 'C'))
    {
        cout << " ";
        c1();
        cout << " C ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'C') || (attempt_1[0] == word[2] && word[2] == 'C') || (attempt_1[0] == word[3] && word[3] == 'C') || (attempt_1[0] == word[4] && word[4] == 'C') || (attempt_1[1] == word[0] && word[0] == 'C') || (attempt_1[1] == word[2] && word[2] == 'C') || (attempt_1[1] == word[3] && word[3] == 'C') || (attempt_1[1] == word[4] && word[4] == 'C') || (attempt_1[2] == word[1] && word[1] == 'C') || (attempt_1[2] == word[0] && word[0] == 'C') || (attempt_1[2] == word[3] && word[3] == 'C') || (attempt_1[2] == word[4] && word[4] == 'C') || (attempt_1[3] == word[1] && word[1] == 'C') || (attempt_1[3] == word[0] && word[0] == 'C') || (attempt_1[3] == word[2] && word[2] == 'C') || (attempt_1[3] == word[4] && word[4] == 'C') || (attempt_1[4] == word[1] && word[1] == 'C') || (attempt_1[4] == word[0] && word[0] == 'C') || (attempt_1[4] == word[3] && word[3] == 'C') || (attempt_1[4] == word[2] && word[2] == 'C') || (attempt_2[0] == word[1] && word[1] == 'C') || (attempt_2[0] == word[2] && word[2] == 'C') || (attempt_2[0] == word[3] && word[3] == 'C') || (attempt_2[0] == word[4] && word[4] == 'C') || (attempt_2[1] == word[0] && word[0] == 'C') || (attempt_2[1] == word[2] && word[2] == 'C') || (attempt_2[1] == word[3] && word[3] == 'C') || (attempt_2[1] == word[4] && word[4] == 'C') || (attempt_2[2] == word[1] && word[1] == 'C') || (attempt_2[2] == word[0] && word[0] == 'C') || (attempt_2[2] == word[3] && word[3] == 'C') || (attempt_2[2] == word[4] && word[4] == 'C') || (attempt_2[3] == word[1] && word[1] == 'C') || (attempt_2[3] == word[0] && word[0] == 'C') || (attempt_2[3] == word[2] && word[2] == 'C') || (attempt_2[3] == word[4] && word[4] == 'C') || (attempt_2[4] == word[1] && word[1] == 'C') || (attempt_2[4] == word[0] && word[0] == 'C') || (attempt_2[4] == word[3] && word[3] == 'C') || (attempt_2[4] == word[2] && word[2] == 'C') || (attempt_3[0] == word[1] && word[1] == 'C') || (attempt_3[0] == word[2] && word[2] == 'C') || (attempt_3[0] == word[3] && word[3] == 'C') || (attempt_3[0] == word[4] && word[4] == 'C') || (attempt_3[1] == word[0] && word[0] == 'C') || (attempt_3[1] == word[2] && word[2] == 'C') || (attempt_3[1] == word[3] && word[3] == 'C') || (attempt_3[1] == word[4] && word[4] == 'C') || (attempt_3[2] == word[1] && word[1] == 'C') || (attempt_3[2] == word[0] && word[0] == 'C') || (attempt_3[2] == word[3] && word[3] == 'C') || (attempt_3[2] == word[4] && word[4] == 'C') || (attempt_3[3] == word[1] && word[1] == 'C') || (attempt_3[3] == word[0] && word[0] == 'C') || (attempt_3[3] == word[2] && word[2] == 'C') || (attempt_3[3] == word[4] && word[4] == 'C') || (attempt_3[4] == word[1] && word[1] == 'C') || (attempt_3[4] == word[0] && word[0] == 'C') || (attempt_3[4] == word[3] && word[3] == 'C') || (attempt_3[4] == word[2] && word[2] == 'C') || (attempt_4[0] == word[1] && word[1] == 'C') || (attempt_4[0] == word[2] && word[2] == 'C') || (attempt_4[0] == word[3] && word[3] == 'C') || (attempt_4[0] == word[4] && word[4] == 'C') || (attempt_4[1] == word[0] && word[0] == 'C') || (attempt_4[1] == word[2] && word[2] == 'C') || (attempt_4[1] == word[3] && word[3] == 'C') || (attempt_4[1] == word[4] && word[4] == 'C') || (attempt_4[2] == word[1] && word[1] == 'C') || (attempt_4[2] == word[0] && word[0] == 'C') || (attempt_4[2] == word[3] && word[3] == 'C') || (attempt_4[2] == word[4] && word[4] == 'C') || (attempt_4[3] == word[1] && word[1] == 'C') || (attempt_4[3] == word[0] && word[0] == 'C') || (attempt_4[3] == word[2] && word[2] == 'C') || (attempt_4[3] == word[4] && word[4] == 'C') || (attempt_4[4] == word[1] && word[1] == 'C') || (attempt_4[4] == word[0] && word[0] == 'C') || (attempt_4[4] == word[3] && word[3] == 'C') || (attempt_4[4] == word[2] && word[2] == 'C') || (attempt_5[0] == word[1] && word[1] == 'C') || (attempt_5[0] == word[2] && word[2] == 'C') || (attempt_5[0] == word[3] && word[3] == 'C') || (attempt_5[0] == word[4] && word[4] == 'C') || (attempt_5[1] == word[0] && word[0] == 'C') || (attempt_5[1] == word[2] && word[2] == 'C') || (attempt_5[1] == word[3] && word[3] == 'C') || (attempt_5[1] == word[4] && word[4] == 'C') || (attempt_5[2] == word[1] && word[1] == 'C') || (attempt_5[2] == word[0] && word[0] == 'C') || (attempt_5[2] == word[3] && word[3] == 'C') || (attempt_5[2] == word[4] && word[4] == 'C') || (attempt_5[3] == word[1] && word[1] == 'C') || (attempt_5[3] == word[0] && word[0] == 'C') || (attempt_5[3] == word[2] && word[2] == 'C') || (attempt_5[3] == word[4] && word[4] == 'C') || (attempt_5[4] == word[1] && word[1] == 'C') || (attempt_5[4] == word[0] && word[0] == 'C') || (attempt_5[4] == word[3] && word[3] == 'C') || (attempt_5[4] == word[2] && word[2] == 'C') || (attempt_6[0] == word[1] && word[1] == 'C') || (attempt_6[0] == word[2] && word[2] == 'C') || (attempt_6[0] == word[3] && word[3] == 'C') || (attempt_6[0] == word[4] && word[4] == 'C') || (attempt_6[1] == word[0] && word[0] == 'C') || (attempt_6[1] == word[2] && word[2] == 'C') || (attempt_6[1] == word[3] && word[3] == 'C') || (attempt_6[1] == word[4] && word[4] == 'C') || (attempt_6[2] == word[1] && word[1] == 'C') || (attempt_6[2] == word[0] && word[0] == 'C') || (attempt_6[2] == word[3] && word[3] == 'C') || (attempt_6[2] == word[4] && word[4] == 'C') || (attempt_6[3] == word[1] && word[1] == 'C') || (attempt_6[3] == word[0] && word[0] == 'C') || (attempt_6[3] == word[2] && word[2] == 'C') || (attempt_6[3] == word[4] && word[4] == 'C') || (attempt_6[4] == word[1] && word[1] == 'C') || (attempt_6[4] == word[0] && word[0] == 'C') || (attempt_6[4] == word[3] && word[3] == 'C') || (attempt_6[4] == word[2] && word[2] == 'C'))
    {
        cout << " ";
        c2();
        cout << " C ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'C') || (attempt_1[0] != word[2] && attempt_1[0] == 'C') || (attempt_1[0] != word[3] && attempt_1[0] == 'C') || (attempt_1[0] != word[4] && attempt_1[0] == 'C') || (attempt_1[1] != word[0] && attempt_1[1] == 'C') || (attempt_1[1] != word[2] && attempt_1[1] == 'C') || (attempt_1[1] != word[3] && attempt_1[1] == 'C') || (attempt_1[1] != word[4] && attempt_1[1] == 'C') || (attempt_1[2] != word[1] && attempt_1[2] == 'C') || (attempt_1[2] != word[0] && attempt_1[2] == 'C') || (attempt_1[2] != word[3] && attempt_1[2] == 'C') || (attempt_1[2] != word[4] && attempt_1[2] == 'C') || (attempt_1[3] != word[1] && attempt_1[3] == 'C') || (attempt_1[3] != word[2] && attempt_1[3] == 'C') || (attempt_1[3] != word[0] && attempt_1[3] == 'C') || (attempt_1[3] != word[4] && attempt_1[3] == 'C') || (attempt_1[4] != word[1] && attempt_1[4] == 'C') || (attempt_1[4] != word[2] && attempt_1[4] == 'C') || (attempt_1[4] != word[3] && attempt_1[4] == 'C') || (attempt_1[4] != word[0] && attempt_1[4] == 'C') || (attempt_2[0] != word[1] && attempt_2[0] == 'C') || (attempt_2[0] != word[2] && attempt_2[0] == 'C') || (attempt_2[0] != word[3] && attempt_2[0] == 'C') || (attempt_2[0] != word[4] && attempt_2[0] == 'C') || (attempt_2[1] != word[0] && attempt_2[1] == 'C') || (attempt_2[1] != word[2] && attempt_2[1] == 'C') || (attempt_2[1] != word[3] && attempt_2[1] == 'C') || (attempt_2[1] != word[4] && attempt_2[1] == 'C') || (attempt_2[2] != word[1] && attempt_2[2] == 'C') || (attempt_2[2] != word[0] && attempt_2[2] == 'C') || (attempt_2[2] != word[3] && attempt_2[2] == 'C') || (attempt_2[2] != word[4] && attempt_2[2] == 'C') || (attempt_2[3] != word[1] && attempt_2[3] == 'C') || (attempt_2[3] != word[2] && attempt_2[3] == 'C') || (attempt_2[3] != word[0] && attempt_2[3] == 'C') || (attempt_2[3] != word[4] && attempt_2[3] == 'C') || (attempt_2[4] != word[1] && attempt_2[4] == 'C') || (attempt_2[4] != word[2] && attempt_2[4] == 'C') || (attempt_2[4] != word[3] && attempt_2[4] == 'C') || (attempt_2[4] != word[0] && attempt_2[4] == 'C') || (attempt_3[0] != word[1] && attempt_3[0] == 'C') || (attempt_3[0] != word[2] && attempt_3[0] == 'C') || (attempt_3[0] != word[3] && attempt_3[0] == 'C') || (attempt_3[0] != word[4] && attempt_3[0] == 'C') || (attempt_3[1] != word[0] && attempt_3[1] == 'C') || (attempt_3[1] != word[2] && attempt_3[1] == 'C') || (attempt_3[1] != word[3] && attempt_3[1] == 'C') || (attempt_3[1] != word[4] && attempt_3[1] == 'C') || (attempt_3[2] != word[1] && attempt_3[2] == 'C') || (attempt_3[2] != word[0] && attempt_3[2] == 'C') || (attempt_3[2] != word[3] && attempt_3[2] == 'C') || (attempt_3[2] != word[4] && attempt_3[2] == 'C') || (attempt_3[3] != word[1] && attempt_3[3] == 'C') || (attempt_3[3] != word[2] && attempt_3[3] == 'C') || (attempt_3[3] != word[0] && attempt_3[3] == 'C') || (attempt_3[3] != word[4] && attempt_3[3] == 'C') || (attempt_3[4] != word[1] && attempt_3[4] == 'C') || (attempt_3[4] != word[2] && attempt_3[4] == 'C') || (attempt_3[4] != word[3] && attempt_3[4] == 'C') || (attempt_3[4] != word[0] && attempt_3[4] == 'C') || (attempt_4[0] != word[1] && attempt_4[0] == 'C') || (attempt_4[0] != word[2] && attempt_4[0] == 'C') || (attempt_4[0] != word[3] && attempt_4[0] == 'C') || (attempt_4[0] != word[4] && attempt_4[0] == 'C') || (attempt_4[1] != word[0] && attempt_4[1] == 'C') || (attempt_4[1] != word[2] && attempt_4[1] == 'C') || (attempt_4[1] != word[3] && attempt_4[1] == 'C') || (attempt_4[1] != word[4] && attempt_4[1] == 'C') || (attempt_4[2] != word[1] && attempt_4[2] == 'C') || (attempt_4[2] != word[0] && attempt_4[2] == 'C') || (attempt_4[2] != word[3] && attempt_4[2] == 'C') || (attempt_4[2] != word[4] && attempt_4[2] == 'C') || (attempt_4[3] != word[1] && attempt_4[3] == 'C') || (attempt_4[3] != word[2] && attempt_4[3] == 'C') || (attempt_4[3] != word[0] && attempt_4[3] == 'C') || (attempt_4[3] != word[4] && attempt_4[3] == 'C') || (attempt_4[4] != word[1] && attempt_4[4] == 'C') || (attempt_4[4] != word[2] && attempt_4[4] == 'C') || (attempt_4[4] != word[3] && attempt_4[4] == 'C') || (attempt_4[4] != word[0] && attempt_4[4] == 'C') || (attempt_5[0] != word[1] && attempt_5[0] == 'C') || (attempt_5[0] != word[2] && attempt_5[0] == 'C') || (attempt_5[0] != word[3] && attempt_5[0] == 'C') || (attempt_5[0] != word[4] && attempt_5[0] == 'C') || (attempt_5[1] != word[0] && attempt_5[1] == 'C') || (attempt_5[1] != word[2] && attempt_5[1] == 'C') || (attempt_5[1] != word[3] && attempt_5[1] == 'C') || (attempt_5[1] != word[4] && attempt_5[1] == 'C') || (attempt_5[2] != word[1] && attempt_5[2] == 'C') || (attempt_5[2] != word[0] && attempt_5[2] == 'C') || (attempt_5[2] != word[3] && attempt_5[2] == 'C') || (attempt_5[2] != word[4] && attempt_5[2] == 'C') || (attempt_5[3] != word[1] && attempt_5[3] == 'C') || (attempt_5[3] != word[2] && attempt_5[3] == 'C') || (attempt_5[3] != word[0] && attempt_5[3] == 'C') || (attempt_5[3] != word[4] && attempt_5[3] == 'C') || (attempt_5[4] != word[1] && attempt_5[4] == 'C') || (attempt_5[4] != word[2] && attempt_5[4] == 'C') || (attempt_5[4] != word[3] && attempt_5[4] == 'C') || (attempt_5[4] != word[0] && attempt_5[4] == 'C') || (attempt_6[0] != word[1] && attempt_6[0] == 'C') || (attempt_6[0] != word[2] && attempt_6[0] == 'C') || (attempt_6[0] != word[3] && attempt_6[0] == 'C') || (attempt_6[0] != word[4] && attempt_6[0] == 'C') || (attempt_6[1] != word[0] && attempt_6[1] == 'C') || (attempt_6[1] != word[2] && attempt_6[1] == 'C') || (attempt_6[1] != word[3] && attempt_6[1] == 'C') || (attempt_6[1] != word[4] && attempt_6[1] == 'C') || (attempt_6[2] != word[1] && attempt_6[2] == 'C') || (attempt_6[2] != word[0] && attempt_6[2] == 'C') || (attempt_6[2] != word[3] && attempt_6[2] == 'C') || (attempt_6[2] != word[4] && attempt_6[2] == 'C') || (attempt_6[3] != word[1] && attempt_6[3] == 'C') || (attempt_6[3] != word[2] && attempt_6[3] == 'C') || (attempt_6[3] != word[0] && attempt_6[3] == 'C') || (attempt_6[3] != word[4] && attempt_6[3] == 'C') || (attempt_6[4] != word[1] && attempt_6[4] == 'C') || (attempt_6[4] != word[2] && attempt_6[4] == 'C') || (attempt_6[4] != word[3] && attempt_6[4] == 'C') || (attempt_6[4] != word[0] && attempt_6[4] == 'C'))
    {
        cout << " ";
        c3();
        cout << " C ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " C ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'V') || (attempt_1[1] == word[1] && attempt_1[1] == 'V') || (attempt_1[2] == word[2] && attempt_1[2] == 'V') || (attempt_1[3] == word[3] && attempt_1[3] == 'V') || (attempt_1[4] == word[4] && attempt_1[4] == 'V') || (attempt_2[0] == word[0] && attempt_2[0] == 'V') || (attempt_2[1] == word[1] && attempt_2[1] == 'V') || (attempt_2[2] == word[2] && attempt_2[2] == 'V') || (attempt_2[3] == word[3] && attempt_2[3] == 'V') || (attempt_2[4] == word[4] && attempt_2[4] == 'V') || (attempt_3[0] == word[0] && attempt_3[0] == 'V') || (attempt_3[1] == word[1] && attempt_3[1] == 'V') || (attempt_3[2] == word[2] && attempt_3[2] == 'V') || (attempt_3[3] == word[3] && attempt_3[3] == 'V') || (attempt_3[4] == word[4] && attempt_3[4] == 'V') || (attempt_4[0] == word[0] && attempt_4[0] == 'V') || (attempt_4[1] == word[1] && attempt_4[1] == 'V') || (attempt_4[2] == word[2] && attempt_4[2] == 'V') || (attempt_4[3] == word[3] && attempt_4[3] == 'V') || (attempt_4[4] == word[4] && attempt_4[4] == 'V') || (attempt_5[0] == word[0] && attempt_5[0] == 'V') || (attempt_5[1] == word[1] && attempt_5[1] == 'V') || (attempt_5[2] == word[2] && attempt_5[2] == 'V') || (attempt_5[3] == word[3] && attempt_5[3] == 'V') || (attempt_5[4] == word[4] && attempt_5[4] == 'V') || (attempt_6[0] == word[0] && attempt_6[0] == 'V') || (attempt_6[1] == word[1] && attempt_6[1] == 'V') || (attempt_6[2] == word[2] && attempt_6[2] == 'V') || (attempt_6[3] == word[3] && attempt_6[3] == 'V') || (attempt_6[4] == word[4] && attempt_6[4] == 'V'))
    {
        cout << " ";
        c1();
        cout << " V ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'V') || (attempt_1[0] == word[2] && word[2] == 'V') || (attempt_1[0] == word[3] && word[3] == 'V') || (attempt_1[0] == word[4] && word[4] == 'V') || (attempt_1[1] == word[0] && word[0] == 'V') || (attempt_1[1] == word[2] && word[2] == 'V') || (attempt_1[1] == word[3] && word[3] == 'V') || (attempt_1[1] == word[4] && word[4] == 'V') || (attempt_1[2] == word[1] && word[1] == 'V') || (attempt_1[2] == word[0] && word[0] == 'V') || (attempt_1[2] == word[3] && word[3] == 'V') || (attempt_1[2] == word[4] && word[4] == 'V') || (attempt_1[3] == word[1] && word[1] == 'V') || (attempt_1[3] == word[0] && word[0] == 'V') || (attempt_1[3] == word[2] && word[2] == 'V') || (attempt_1[3] == word[4] && word[4] == 'V') || (attempt_1[4] == word[1] && word[1] == 'V') || (attempt_1[4] == word[0] && word[0] == 'V') || (attempt_1[4] == word[3] && word[3] == 'V') || (attempt_1[4] == word[2] && word[2] == 'V') || (attempt_2[0] == word[1] && word[1] == 'V') || (attempt_2[0] == word[2] && word[2] == 'V') || (attempt_2[0] == word[3] && word[3] == 'V') || (attempt_2[0] == word[4] && word[4] == 'V') || (attempt_2[1] == word[0] && word[0] == 'V') || (attempt_2[1] == word[2] && word[2] == 'V') || (attempt_2[1] == word[3] && word[3] == 'V') || (attempt_2[1] == word[4] && word[4] == 'V') || (attempt_2[2] == word[1] && word[1] == 'V') || (attempt_2[2] == word[0] && word[0] == 'V') || (attempt_2[2] == word[3] && word[3] == 'V') || (attempt_2[2] == word[4] && word[4] == 'V') || (attempt_2[3] == word[1] && word[1] == 'V') || (attempt_2[3] == word[0] && word[0] == 'V') || (attempt_2[3] == word[2] && word[2] == 'V') || (attempt_2[3] == word[4] && word[4] == 'V') || (attempt_2[4] == word[1] && word[1] == 'V') || (attempt_2[4] == word[0] && word[0] == 'V') || (attempt_2[4] == word[3] && word[3] == 'V') || (attempt_2[4] == word[2] && word[2] == 'V') || (attempt_3[0] == word[1] && word[1] == 'V') || (attempt_3[0] == word[2] && word[2] == 'V') || (attempt_3[0] == word[3] && word[3] == 'V') || (attempt_3[0] == word[4] && word[4] == 'V') || (attempt_3[1] == word[0] && word[0] == 'V') || (attempt_3[1] == word[2] && word[2] == 'V') || (attempt_3[1] == word[3] && word[3] == 'V') || (attempt_3[1] == word[4] && word[4] == 'V') || (attempt_3[2] == word[1] && word[1] == 'V') || (attempt_3[2] == word[0] && word[0] == 'V') || (attempt_3[2] == word[3] && word[3] == 'V') || (attempt_3[2] == word[4] && word[4] == 'V') || (attempt_3[3] == word[1] && word[1] == 'V') || (attempt_3[3] == word[0] && word[0] == 'V') || (attempt_3[3] == word[2] && word[2] == 'V') || (attempt_3[3] == word[4] && word[4] == 'V') || (attempt_3[4] == word[1] && word[1] == 'V') || (attempt_3[4] == word[0] && word[0] == 'V') || (attempt_3[4] == word[3] && word[3] == 'V') || (attempt_3[4] == word[2] && word[2] == 'V') || (attempt_4[0] == word[1] && word[1] == 'V') || (attempt_4[0] == word[2] && word[2] == 'V') || (attempt_4[0] == word[3] && word[3] == 'V') || (attempt_4[0] == word[4] && word[4] == 'V') || (attempt_4[1] == word[0] && word[0] == 'V') || (attempt_4[1] == word[2] && word[2] == 'V') || (attempt_4[1] == word[3] && word[3] == 'V') || (attempt_4[1] == word[4] && word[4] == 'V') || (attempt_4[2] == word[1] && word[1] == 'V') || (attempt_4[2] == word[0] && word[0] == 'V') || (attempt_4[2] == word[3] && word[3] == 'V') || (attempt_4[2] == word[4] && word[4] == 'V') || (attempt_4[3] == word[1] && word[1] == 'V') || (attempt_4[3] == word[0] && word[0] == 'V') || (attempt_4[3] == word[2] && word[2] == 'V') || (attempt_4[3] == word[4] && word[4] == 'V') || (attempt_4[4] == word[1] && word[1] == 'V') || (attempt_4[4] == word[0] && word[0] == 'V') || (attempt_4[4] == word[3] && word[3] == 'V') || (attempt_4[4] == word[2] && word[2] == 'V') || (attempt_5[0] == word[1] && word[1] == 'V') || (attempt_5[0] == word[2] && word[2] == 'V') || (attempt_5[0] == word[3] && word[3] == 'V') || (attempt_5[0] == word[4] && word[4] == 'V') || (attempt_5[1] == word[0] && word[0] == 'V') || (attempt_5[1] == word[2] && word[2] == 'V') || (attempt_5[1] == word[3] && word[3] == 'V') || (attempt_5[1] == word[4] && word[4] == 'V') || (attempt_5[2] == word[1] && word[1] == 'V') || (attempt_5[2] == word[0] && word[0] == 'V') || (attempt_5[2] == word[3] && word[3] == 'V') || (attempt_5[2] == word[4] && word[4] == 'V') || (attempt_5[3] == word[1] && word[1] == 'V') || (attempt_5[3] == word[0] && word[0] == 'V') || (attempt_5[3] == word[2] && word[2] == 'V') || (attempt_5[3] == word[4] && word[4] == 'V') || (attempt_5[4] == word[1] && word[1] == 'V') || (attempt_5[4] == word[0] && word[0] == 'V') || (attempt_5[4] == word[3] && word[3] == 'V') || (attempt_5[4] == word[2] && word[2] == 'V') || (attempt_6[0] == word[1] && word[1] == 'V') || (attempt_6[0] == word[2] && word[2] == 'V') || (attempt_6[0] == word[3] && word[3] == 'V') || (attempt_6[0] == word[4] && word[4] == 'V') || (attempt_6[1] == word[0] && word[0] == 'V') || (attempt_6[1] == word[2] && word[2] == 'V') || (attempt_6[1] == word[3] && word[3] == 'V') || (attempt_6[1] == word[4] && word[4] == 'V') || (attempt_6[2] == word[1] && word[1] == 'V') || (attempt_6[2] == word[0] && word[0] == 'V') || (attempt_6[2] == word[3] && word[3] == 'V') || (attempt_6[2] == word[4] && word[4] == 'V') || (attempt_6[3] == word[1] && word[1] == 'V') || (attempt_6[3] == word[0] && word[0] == 'V') || (attempt_6[3] == word[2] && word[2] == 'V') || (attempt_6[3] == word[4] && word[4] == 'V') || (attempt_6[4] == word[1] && word[1] == 'V') || (attempt_6[4] == word[0] && word[0] == 'V') || (attempt_6[4] == word[3] && word[3] == 'V') || (attempt_6[4] == word[2] && word[2] == 'V'))
    {
        cout << " ";
        c2();
        cout << " V ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'V') || (attempt_1[0] != word[2] && attempt_1[0] == 'V') || (attempt_1[0] != word[3] && attempt_1[0] == 'V') || (attempt_1[0] != word[4] && attempt_1[0] == 'V') || (attempt_1[1] != word[0] && attempt_1[1] == 'V') || (attempt_1[1] != word[2] && attempt_1[1] == 'V') || (attempt_1[1] != word[3] && attempt_1[1] == 'V') || (attempt_1[1] != word[4] && attempt_1[1] == 'V') || (attempt_1[2] != word[1] && attempt_1[2] == 'V') || (attempt_1[2] != word[0] && attempt_1[2] == 'V') || (attempt_1[2] != word[3] && attempt_1[2] == 'V') || (attempt_1[2] != word[4] && attempt_1[2] == 'V') || (attempt_1[3] != word[1] && attempt_1[3] == 'V') || (attempt_1[3] != word[2] && attempt_1[3] == 'V') || (attempt_1[3] != word[0] && attempt_1[3] == 'V') || (attempt_1[3] != word[4] && attempt_1[3] == 'V') || (attempt_1[4] != word[1] && attempt_1[4] == 'V') || (attempt_1[4] != word[2] && attempt_1[4] == 'V') || (attempt_1[4] != word[3] && attempt_1[4] == 'V') || (attempt_1[4] != word[0] && attempt_1[4] == 'V') || (attempt_2[0] != word[1] && attempt_2[0] == 'V') || (attempt_2[0] != word[2] && attempt_2[0] == 'V') || (attempt_2[0] != word[3] && attempt_2[0] == 'V') || (attempt_2[0] != word[4] && attempt_2[0] == 'V') || (attempt_2[1] != word[0] && attempt_2[1] == 'V') || (attempt_2[1] != word[2] && attempt_2[1] == 'V') || (attempt_2[1] != word[3] && attempt_2[1] == 'V') || (attempt_2[1] != word[4] && attempt_2[1] == 'V') || (attempt_2[2] != word[1] && attempt_2[2] == 'V') || (attempt_2[2] != word[0] && attempt_2[2] == 'V') || (attempt_2[2] != word[3] && attempt_2[2] == 'V') || (attempt_2[2] != word[4] && attempt_2[2] == 'V') || (attempt_2[3] != word[1] && attempt_2[3] == 'V') || (attempt_2[3] != word[2] && attempt_2[3] == 'V') || (attempt_2[3] != word[0] && attempt_2[3] == 'V') || (attempt_2[3] != word[4] && attempt_2[3] == 'V') || (attempt_2[4] != word[1] && attempt_2[4] == 'V') || (attempt_2[4] != word[2] && attempt_2[4] == 'V') || (attempt_2[4] != word[3] && attempt_2[4] == 'V') || (attempt_2[4] != word[0] && attempt_2[4] == 'V') || (attempt_3[0] != word[1] && attempt_3[0] == 'V') || (attempt_3[0] != word[2] && attempt_3[0] == 'V') || (attempt_3[0] != word[3] && attempt_3[0] == 'V') || (attempt_3[0] != word[4] && attempt_3[0] == 'V') || (attempt_3[1] != word[0] && attempt_3[1] == 'V') || (attempt_3[1] != word[2] && attempt_3[1] == 'V') || (attempt_3[1] != word[3] && attempt_3[1] == 'V') || (attempt_3[1] != word[4] && attempt_3[1] == 'V') || (attempt_3[2] != word[1] && attempt_3[2] == 'V') || (attempt_3[2] != word[0] && attempt_3[2] == 'V') || (attempt_3[2] != word[3] && attempt_3[2] == 'V') || (attempt_3[2] != word[4] && attempt_3[2] == 'V') || (attempt_3[3] != word[1] && attempt_3[3] == 'V') || (attempt_3[3] != word[2] && attempt_3[3] == 'V') || (attempt_3[3] != word[0] && attempt_3[3] == 'V') || (attempt_3[3] != word[4] && attempt_3[3] == 'V') || (attempt_3[4] != word[1] && attempt_3[4] == 'V') || (attempt_3[4] != word[2] && attempt_3[4] == 'V') || (attempt_3[4] != word[3] && attempt_3[4] == 'V') || (attempt_3[4] != word[0] && attempt_3[4] == 'V') || (attempt_4[0] != word[1] && attempt_4[0] == 'V') || (attempt_4[0] != word[2] && attempt_4[0] == 'V') || (attempt_4[0] != word[3] && attempt_4[0] == 'V') || (attempt_4[0] != word[4] && attempt_4[0] == 'V') || (attempt_4[1] != word[0] && attempt_4[1] == 'V') || (attempt_4[1] != word[2] && attempt_4[1] == 'V') || (attempt_4[1] != word[3] && attempt_4[1] == 'V') || (attempt_4[1] != word[4] && attempt_4[1] == 'V') || (attempt_4[2] != word[1] && attempt_4[2] == 'V') || (attempt_4[2] != word[0] && attempt_4[2] == 'V') || (attempt_4[2] != word[3] && attempt_4[2] == 'V') || (attempt_4[2] != word[4] && attempt_4[2] == 'V') || (attempt_4[3] != word[1] && attempt_4[3] == 'V') || (attempt_4[3] != word[2] && attempt_4[3] == 'V') || (attempt_4[3] != word[0] && attempt_4[3] == 'V') || (attempt_4[3] != word[4] && attempt_4[3] == 'V') || (attempt_4[4] != word[1] && attempt_4[4] == 'V') || (attempt_4[4] != word[2] && attempt_4[4] == 'V') || (attempt_4[4] != word[3] && attempt_4[4] == 'V') || (attempt_4[4] != word[0] && attempt_4[4] == 'V') || (attempt_5[0] != word[1] && attempt_5[0] == 'V') || (attempt_5[0] != word[2] && attempt_5[0] == 'V') || (attempt_5[0] != word[3] && attempt_5[0] == 'V') || (attempt_5[0] != word[4] && attempt_5[0] == 'V') || (attempt_5[1] != word[0] && attempt_5[1] == 'V') || (attempt_5[1] != word[2] && attempt_5[1] == 'V') || (attempt_5[1] != word[3] && attempt_5[1] == 'V') || (attempt_5[1] != word[4] && attempt_5[1] == 'V') || (attempt_5[2] != word[1] && attempt_5[2] == 'V') || (attempt_5[2] != word[0] && attempt_5[2] == 'V') || (attempt_5[2] != word[3] && attempt_5[2] == 'V') || (attempt_5[2] != word[4] && attempt_5[2] == 'V') || (attempt_5[3] != word[1] && attempt_5[3] == 'V') || (attempt_5[3] != word[2] && attempt_5[3] == 'V') || (attempt_5[3] != word[0] && attempt_5[3] == 'V') || (attempt_5[3] != word[4] && attempt_5[3] == 'V') || (attempt_5[4] != word[1] && attempt_5[4] == 'V') || (attempt_5[4] != word[2] && attempt_5[4] == 'V') || (attempt_5[4] != word[3] && attempt_5[4] == 'V') || (attempt_5[4] != word[0] && attempt_5[4] == 'V') || (attempt_6[0] != word[1] && attempt_6[0] == 'V') || (attempt_6[0] != word[2] && attempt_6[0] == 'V') || (attempt_6[0] != word[3] && attempt_6[0] == 'V') || (attempt_6[0] != word[4] && attempt_6[0] == 'V') || (attempt_6[1] != word[0] && attempt_6[1] == 'V') || (attempt_6[1] != word[2] && attempt_6[1] == 'V') || (attempt_6[1] != word[3] && attempt_6[1] == 'V') || (attempt_6[1] != word[4] && attempt_6[1] == 'V') || (attempt_6[2] != word[1] && attempt_6[2] == 'V') || (attempt_6[2] != word[0] && attempt_6[2] == 'V') || (attempt_6[2] != word[3] && attempt_6[2] == 'V') || (attempt_6[2] != word[4] && attempt_6[2] == 'V') || (attempt_6[3] != word[1] && attempt_6[3] == 'V') || (attempt_6[3] != word[2] && attempt_6[3] == 'V') || (attempt_6[3] != word[0] && attempt_6[3] == 'V') || (attempt_6[3] != word[4] && attempt_6[3] == 'V') || (attempt_6[4] != word[1] && attempt_6[4] == 'V') || (attempt_6[4] != word[2] && attempt_6[4] == 'V') || (attempt_6[4] != word[3] && attempt_6[4] == 'V') || (attempt_6[4] != word[0] && attempt_6[4] == 'V'))
    {
        cout << " ";
        c3();
        cout << " V ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " V ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'B') || (attempt_1[1] == word[1] && attempt_1[1] == 'B') || (attempt_1[2] == word[2] && attempt_1[2] == 'B') || (attempt_1[3] == word[3] && attempt_1[3] == 'B') || (attempt_1[4] == word[4] && attempt_1[4] == 'B') || (attempt_2[0] == word[0] && attempt_2[0] == 'B') || (attempt_2[1] == word[1] && attempt_2[1] == 'B') || (attempt_2[2] == word[2] && attempt_2[2] == 'B') || (attempt_2[3] == word[3] && attempt_2[3] == 'B') || (attempt_2[4] == word[4] && attempt_2[4] == 'B') || (attempt_3[0] == word[0] && attempt_3[0] == 'B') || (attempt_3[1] == word[1] && attempt_3[1] == 'B') || (attempt_3[2] == word[2] && attempt_3[2] == 'B') || (attempt_3[3] == word[3] && attempt_3[3] == 'B') || (attempt_3[4] == word[4] && attempt_3[4] == 'B') || (attempt_4[0] == word[0] && attempt_4[0] == 'B') || (attempt_4[1] == word[1] && attempt_4[1] == 'B') || (attempt_4[2] == word[2] && attempt_4[2] == 'B') || (attempt_4[3] == word[3] && attempt_4[3] == 'B') || (attempt_4[4] == word[4] && attempt_4[4] == 'B') || (attempt_5[0] == word[0] && attempt_5[0] == 'B') || (attempt_5[1] == word[1] && attempt_5[1] == 'B') || (attempt_5[2] == word[2] && attempt_5[2] == 'B') || (attempt_5[3] == word[3] && attempt_5[3] == 'B') || (attempt_5[4] == word[4] && attempt_5[4] == 'B') || (attempt_6[0] == word[0] && attempt_6[0] == 'B') || (attempt_6[1] == word[1] && attempt_6[1] == 'B') || (attempt_6[2] == word[2] && attempt_6[2] == 'B') || (attempt_6[3] == word[3] && attempt_6[3] == 'B') || (attempt_6[4] == word[4] && attempt_6[4] == 'B'))
    {
        cout << " ";
        c1();
        cout << " B ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'B') || (attempt_1[0] == word[2] && word[2] == 'B') || (attempt_1[0] == word[3] && word[3] == 'B') || (attempt_1[0] == word[4] && word[4] == 'B') || (attempt_1[1] == word[0] && word[0] == 'B') || (attempt_1[1] == word[2] && word[2] == 'B') || (attempt_1[1] == word[3] && word[3] == 'B') || (attempt_1[1] == word[4] && word[4] == 'B') || (attempt_1[2] == word[1] && word[1] == 'B') || (attempt_1[2] == word[0] && word[0] == 'B') || (attempt_1[2] == word[3] && word[3] == 'B') || (attempt_1[2] == word[4] && word[4] == 'B') || (attempt_1[3] == word[1] && word[1] == 'B') || (attempt_1[3] == word[0] && word[0] == 'B') || (attempt_1[3] == word[2] && word[2] == 'B') || (attempt_1[3] == word[4] && word[4] == 'B') || (attempt_1[4] == word[1] && word[1] == 'B') || (attempt_1[4] == word[0] && word[0] == 'B') || (attempt_1[4] == word[3] && word[3] == 'B') || (attempt_1[4] == word[2] && word[2] == 'B') || (attempt_2[0] == word[1] && word[1] == 'B') || (attempt_2[0] == word[2] && word[2] == 'B') || (attempt_2[0] == word[3] && word[3] == 'B') || (attempt_2[0] == word[4] && word[4] == 'B') || (attempt_2[1] == word[0] && word[0] == 'B') || (attempt_2[1] == word[2] && word[2] == 'B') || (attempt_2[1] == word[3] && word[3] == 'B') || (attempt_2[1] == word[4] && word[4] == 'B') || (attempt_2[2] == word[1] && word[1] == 'B') || (attempt_2[2] == word[0] && word[0] == 'B') || (attempt_2[2] == word[3] && word[3] == 'B') || (attempt_2[2] == word[4] && word[4] == 'B') || (attempt_2[3] == word[1] && word[1] == 'B') || (attempt_2[3] == word[0] && word[0] == 'B') || (attempt_2[3] == word[2] && word[2] == 'B') || (attempt_2[3] == word[4] && word[4] == 'B') || (attempt_2[4] == word[1] && word[1] == 'B') || (attempt_2[4] == word[0] && word[0] == 'B') || (attempt_2[4] == word[3] && word[3] == 'B') || (attempt_2[4] == word[2] && word[2] == 'B') || (attempt_3[0] == word[1] && word[1] == 'B') || (attempt_3[0] == word[2] && word[2] == 'B') || (attempt_3[0] == word[3] && word[3] == 'B') || (attempt_3[0] == word[4] && word[4] == 'B') || (attempt_3[1] == word[0] && word[0] == 'B') || (attempt_3[1] == word[2] && word[2] == 'B') || (attempt_3[1] == word[3] && word[3] == 'B') || (attempt_3[1] == word[4] && word[4] == 'B') || (attempt_3[2] == word[1] && word[1] == 'B') || (attempt_3[2] == word[0] && word[0] == 'B') || (attempt_3[2] == word[3] && word[3] == 'B') || (attempt_3[2] == word[4] && word[4] == 'B') || (attempt_3[3] == word[1] && word[1] == 'B') || (attempt_3[3] == word[0] && word[0] == 'B') || (attempt_3[3] == word[2] && word[2] == 'B') || (attempt_3[3] == word[4] && word[4] == 'B') || (attempt_3[4] == word[1] && word[1] == 'B') || (attempt_3[4] == word[0] && word[0] == 'B') || (attempt_3[4] == word[3] && word[3] == 'B') || (attempt_3[4] == word[2] && word[2] == 'B') || (attempt_4[0] == word[1] && word[1] == 'B') || (attempt_4[0] == word[2] && word[2] == 'B') || (attempt_4[0] == word[3] && word[3] == 'B') || (attempt_4[0] == word[4] && word[4] == 'B') || (attempt_4[1] == word[0] && word[0] == 'B') || (attempt_4[1] == word[2] && word[2] == 'B') || (attempt_4[1] == word[3] && word[3] == 'B') || (attempt_4[1] == word[4] && word[4] == 'B') || (attempt_4[2] == word[1] && word[1] == 'B') || (attempt_4[2] == word[0] && word[0] == 'B') || (attempt_4[2] == word[3] && word[3] == 'B') || (attempt_4[2] == word[4] && word[4] == 'B') || (attempt_4[3] == word[1] && word[1] == 'B') || (attempt_4[3] == word[0] && word[0] == 'B') || (attempt_4[3] == word[2] && word[2] == 'B') || (attempt_4[3] == word[4] && word[4] == 'B') || (attempt_4[4] == word[1] && word[1] == 'B') || (attempt_4[4] == word[0] && word[0] == 'B') || (attempt_4[4] == word[3] && word[3] == 'B') || (attempt_4[4] == word[2] && word[2] == 'B') || (attempt_5[0] == word[1] && word[1] == 'B') || (attempt_5[0] == word[2] && word[2] == 'B') || (attempt_5[0] == word[3] && word[3] == 'B') || (attempt_5[0] == word[4] && word[4] == 'B') || (attempt_5[1] == word[0] && word[0] == 'B') || (attempt_5[1] == word[2] && word[2] == 'B') || (attempt_5[1] == word[3] && word[3] == 'B') || (attempt_5[1] == word[4] && word[4] == 'B') || (attempt_5[2] == word[1] && word[1] == 'B') || (attempt_5[2] == word[0] && word[0] == 'B') || (attempt_5[2] == word[3] && word[3] == 'B') || (attempt_5[2] == word[4] && word[4] == 'B') || (attempt_5[3] == word[1] && word[1] == 'B') || (attempt_5[3] == word[0] && word[0] == 'B') || (attempt_5[3] == word[2] && word[2] == 'B') || (attempt_5[3] == word[4] && word[4] == 'B') || (attempt_5[4] == word[1] && word[1] == 'B') || (attempt_5[4] == word[0] && word[0] == 'B') || (attempt_5[4] == word[3] && word[3] == 'B') || (attempt_5[4] == word[2] && word[2] == 'B') || (attempt_6[0] == word[1] && word[1] == 'B') || (attempt_6[0] == word[2] && word[2] == 'B') || (attempt_6[0] == word[3] && word[3] == 'B') || (attempt_6[0] == word[4] && word[4] == 'B') || (attempt_6[1] == word[0] && word[0] == 'B') || (attempt_6[1] == word[2] && word[2] == 'B') || (attempt_6[1] == word[3] && word[3] == 'B') || (attempt_6[1] == word[4] && word[4] == 'B') || (attempt_6[2] == word[1] && word[1] == 'B') || (attempt_6[2] == word[0] && word[0] == 'B') || (attempt_6[2] == word[3] && word[3] == 'B') || (attempt_6[2] == word[4] && word[4] == 'B') || (attempt_6[3] == word[1] && word[1] == 'B') || (attempt_6[3] == word[0] && word[0] == 'B') || (attempt_6[3] == word[2] && word[2] == 'B') || (attempt_6[3] == word[4] && word[4] == 'B') || (attempt_6[4] == word[1] && word[1] == 'B') || (attempt_6[4] == word[0] && word[0] == 'B') || (attempt_6[4] == word[3] && word[3] == 'B') || (attempt_6[4] == word[2] && word[2] == 'B'))
    {
        cout << " ";
        c2();
        cout << " B ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'B') || (attempt_1[0] != word[2] && attempt_1[0] == 'B') || (attempt_1[0] != word[3] && attempt_1[0] == 'B') || (attempt_1[0] != word[4] && attempt_1[0] == 'B') || (attempt_1[1] != word[0] && attempt_1[1] == 'B') || (attempt_1[1] != word[2] && attempt_1[1] == 'B') || (attempt_1[1] != word[3] && attempt_1[1] == 'B') || (attempt_1[1] != word[4] && attempt_1[1] == 'B') || (attempt_1[2] != word[1] && attempt_1[2] == 'B') || (attempt_1[2] != word[0] && attempt_1[2] == 'B') || (attempt_1[2] != word[3] && attempt_1[2] == 'B') || (attempt_1[2] != word[4] && attempt_1[2] == 'B') || (attempt_1[3] != word[1] && attempt_1[3] == 'B') || (attempt_1[3] != word[2] && attempt_1[3] == 'B') || (attempt_1[3] != word[0] && attempt_1[3] == 'B') || (attempt_1[3] != word[4] && attempt_1[3] == 'B') || (attempt_1[4] != word[1] && attempt_1[4] == 'B') || (attempt_1[4] != word[2] && attempt_1[4] == 'B') || (attempt_1[4] != word[3] && attempt_1[4] == 'B') || (attempt_1[4] != word[0] && attempt_1[4] == 'B') || (attempt_2[0] != word[1] && attempt_2[0] == 'B') || (attempt_2[0] != word[2] && attempt_2[0] == 'B') || (attempt_2[0] != word[3] && attempt_2[0] == 'B') || (attempt_2[0] != word[4] && attempt_2[0] == 'B') || (attempt_2[1] != word[0] && attempt_2[1] == 'B') || (attempt_2[1] != word[2] && attempt_2[1] == 'B') || (attempt_2[1] != word[3] && attempt_2[1] == 'B') || (attempt_2[1] != word[4] && attempt_2[1] == 'B') || (attempt_2[2] != word[1] && attempt_2[2] == 'B') || (attempt_2[2] != word[0] && attempt_2[2] == 'B') || (attempt_2[2] != word[3] && attempt_2[2] == 'B') || (attempt_2[2] != word[4] && attempt_2[2] == 'B') || (attempt_2[3] != word[1] && attempt_2[3] == 'B') || (attempt_2[3] != word[2] && attempt_2[3] == 'B') || (attempt_2[3] != word[0] && attempt_2[3] == 'B') || (attempt_2[3] != word[4] && attempt_2[3] == 'B') || (attempt_2[4] != word[1] && attempt_2[4] == 'B') || (attempt_2[4] != word[2] && attempt_2[4] == 'B') || (attempt_2[4] != word[3] && attempt_2[4] == 'B') || (attempt_2[4] != word[0] && attempt_2[4] == 'B') || (attempt_3[0] != word[1] && attempt_3[0] == 'B') || (attempt_3[0] != word[2] && attempt_3[0] == 'B') || (attempt_3[0] != word[3] && attempt_3[0] == 'B') || (attempt_3[0] != word[4] && attempt_3[0] == 'B') || (attempt_3[1] != word[0] && attempt_3[1] == 'B') || (attempt_3[1] != word[2] && attempt_3[1] == 'B') || (attempt_3[1] != word[3] && attempt_3[1] == 'B') || (attempt_3[1] != word[4] && attempt_3[1] == 'B') || (attempt_3[2] != word[1] && attempt_3[2] == 'B') || (attempt_3[2] != word[0] && attempt_3[2] == 'B') || (attempt_3[2] != word[3] && attempt_3[2] == 'B') || (attempt_3[2] != word[4] && attempt_3[2] == 'B') || (attempt_3[3] != word[1] && attempt_3[3] == 'B') || (attempt_3[3] != word[2] && attempt_3[3] == 'B') || (attempt_3[3] != word[0] && attempt_3[3] == 'B') || (attempt_3[3] != word[4] && attempt_3[3] == 'B') || (attempt_3[4] != word[1] && attempt_3[4] == 'B') || (attempt_3[4] != word[2] && attempt_3[4] == 'B') || (attempt_3[4] != word[3] && attempt_3[4] == 'B') || (attempt_3[4] != word[0] && attempt_3[4] == 'B') || (attempt_4[0] != word[1] && attempt_4[0] == 'B') || (attempt_4[0] != word[2] && attempt_4[0] == 'B') || (attempt_4[0] != word[3] && attempt_4[0] == 'B') || (attempt_4[0] != word[4] && attempt_4[0] == 'B') || (attempt_4[1] != word[0] && attempt_4[1] == 'B') || (attempt_4[1] != word[2] && attempt_4[1] == 'B') || (attempt_4[1] != word[3] && attempt_4[1] == 'B') || (attempt_4[1] != word[4] && attempt_4[1] == 'B') || (attempt_4[2] != word[1] && attempt_4[2] == 'B') || (attempt_4[2] != word[0] && attempt_4[2] == 'B') || (attempt_4[2] != word[3] && attempt_4[2] == 'B') || (attempt_4[2] != word[4] && attempt_4[2] == 'B') || (attempt_4[3] != word[1] && attempt_4[3] == 'B') || (attempt_4[3] != word[2] && attempt_4[3] == 'B') || (attempt_4[3] != word[0] && attempt_4[3] == 'B') || (attempt_4[3] != word[4] && attempt_4[3] == 'B') || (attempt_4[4] != word[1] && attempt_4[4] == 'B') || (attempt_4[4] != word[2] && attempt_4[4] == 'B') || (attempt_4[4] != word[3] && attempt_4[4] == 'B') || (attempt_4[4] != word[0] && attempt_4[4] == 'B') || (attempt_5[0] != word[1] && attempt_5[0] == 'B') || (attempt_5[0] != word[2] && attempt_5[0] == 'B') || (attempt_5[0] != word[3] && attempt_5[0] == 'B') || (attempt_5[0] != word[4] && attempt_5[0] == 'B') || (attempt_5[1] != word[0] && attempt_5[1] == 'B') || (attempt_5[1] != word[2] && attempt_5[1] == 'B') || (attempt_5[1] != word[3] && attempt_5[1] == 'B') || (attempt_5[1] != word[4] && attempt_5[1] == 'B') || (attempt_5[2] != word[1] && attempt_5[2] == 'B') || (attempt_5[2] != word[0] && attempt_5[2] == 'B') || (attempt_5[2] != word[3] && attempt_5[2] == 'B') || (attempt_5[2] != word[4] && attempt_5[2] == 'B') || (attempt_5[3] != word[1] && attempt_5[3] == 'B') || (attempt_5[3] != word[2] && attempt_5[3] == 'B') || (attempt_5[3] != word[0] && attempt_5[3] == 'B') || (attempt_5[3] != word[4] && attempt_5[3] == 'B') || (attempt_5[4] != word[1] && attempt_5[4] == 'B') || (attempt_5[4] != word[2] && attempt_5[4] == 'B') || (attempt_5[4] != word[3] && attempt_5[4] == 'B') || (attempt_5[4] != word[0] && attempt_5[4] == 'B') || (attempt_6[0] != word[1] && attempt_6[0] == 'B') || (attempt_6[0] != word[2] && attempt_6[0] == 'B') || (attempt_6[0] != word[3] && attempt_6[0] == 'B') || (attempt_6[0] != word[4] && attempt_6[0] == 'B') || (attempt_6[1] != word[0] && attempt_6[1] == 'B') || (attempt_6[1] != word[2] && attempt_6[1] == 'B') || (attempt_6[1] != word[3] && attempt_6[1] == 'B') || (attempt_6[1] != word[4] && attempt_6[1] == 'B') || (attempt_6[2] != word[1] && attempt_6[2] == 'B') || (attempt_6[2] != word[0] && attempt_6[2] == 'B') || (attempt_6[2] != word[3] && attempt_6[2] == 'B') || (attempt_6[2] != word[4] && attempt_6[2] == 'B') || (attempt_6[3] != word[1] && attempt_6[3] == 'B') || (attempt_6[3] != word[2] && attempt_6[3] == 'B') || (attempt_6[3] != word[0] && attempt_6[3] == 'B') || (attempt_6[3] != word[4] && attempt_6[3] == 'B') || (attempt_6[4] != word[1] && attempt_6[4] == 'B') || (attempt_6[4] != word[2] && attempt_6[4] == 'B') || (attempt_6[4] != word[3] && attempt_6[4] == 'B') || (attempt_6[4] != word[0] && attempt_6[4] == 'B'))
    {
        cout << " ";
        c3();
        cout << " B ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " B ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'N') || (attempt_1[1] == word[1] && attempt_1[1] == 'N') || (attempt_1[2] == word[2] && attempt_1[2] == 'N') || (attempt_1[3] == word[3] && attempt_1[3] == 'N') || (attempt_1[4] == word[4] && attempt_1[4] == 'N') || (attempt_2[0] == word[0] && attempt_2[0] == 'N') || (attempt_2[1] == word[1] && attempt_2[1] == 'N') || (attempt_2[2] == word[2] && attempt_2[2] == 'N') || (attempt_2[3] == word[3] && attempt_2[3] == 'N') || (attempt_2[4] == word[4] && attempt_2[4] == 'N') || (attempt_3[0] == word[0] && attempt_3[0] == 'N') || (attempt_3[1] == word[1] && attempt_3[1] == 'N') || (attempt_3[2] == word[2] && attempt_3[2] == 'N') || (attempt_3[3] == word[3] && attempt_3[3] == 'N') || (attempt_3[4] == word[4] && attempt_3[4] == 'N') || (attempt_4[0] == word[0] && attempt_4[0] == 'N') || (attempt_4[1] == word[1] && attempt_4[1] == 'N') || (attempt_4[2] == word[2] && attempt_4[2] == 'N') || (attempt_4[3] == word[3] && attempt_4[3] == 'N') || (attempt_4[4] == word[4] && attempt_4[4] == 'N') || (attempt_5[0] == word[0] && attempt_5[0] == 'N') || (attempt_5[1] == word[1] && attempt_5[1] == 'N') || (attempt_5[2] == word[2] && attempt_5[2] == 'N') || (attempt_5[3] == word[3] && attempt_5[3] == 'N') || (attempt_5[4] == word[4] && attempt_5[4] == 'N') || (attempt_6[0] == word[0] && attempt_6[0] == 'N') || (attempt_6[1] == word[1] && attempt_6[1] == 'N') || (attempt_6[2] == word[2] && attempt_6[2] == 'N') || (attempt_6[3] == word[3] && attempt_6[3] == 'N') || (attempt_6[4] == word[4] && attempt_6[4] == 'N'))
    {
        cout << " ";
        c1();
        cout << " N ";
        cout << RESET;
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'N') || (attempt_1[0] == word[2] && word[2] == 'N') || (attempt_1[0] == word[3] && word[3] == 'N') || (attempt_1[0] == word[4] && word[4] == 'N') || (attempt_1[1] == word[0] && word[0] == 'N') || (attempt_1[1] == word[2] && word[2] == 'N') || (attempt_1[1] == word[3] && word[3] == 'N') || (attempt_1[1] == word[4] && word[4] == 'N') || (attempt_1[2] == word[1] && word[1] == 'N') || (attempt_1[2] == word[0] && word[0] == 'N') || (attempt_1[2] == word[3] && word[3] == 'N') || (attempt_1[2] == word[4] && word[4] == 'N') || (attempt_1[3] == word[1] && word[1] == 'N') || (attempt_1[3] == word[0] && word[0] == 'N') || (attempt_1[3] == word[2] && word[2] == 'N') || (attempt_1[3] == word[4] && word[4] == 'N') || (attempt_1[4] == word[1] && word[1] == 'N') || (attempt_1[4] == word[0] && word[0] == 'N') || (attempt_1[4] == word[3] && word[3] == 'N') || (attempt_1[4] == word[2] && word[2] == 'N') || (attempt_2[0] == word[1] && word[1] == 'N') || (attempt_2[0] == word[2] && word[2] == 'N') || (attempt_2[0] == word[3] && word[3] == 'N') || (attempt_2[0] == word[4] && word[4] == 'N') || (attempt_2[1] == word[0] && word[0] == 'N') || (attempt_2[1] == word[2] && word[2] == 'N') || (attempt_2[1] == word[3] && word[3] == 'N') || (attempt_2[1] == word[4] && word[4] == 'N') || (attempt_2[2] == word[1] && word[1] == 'N') || (attempt_2[2] == word[0] && word[0] == 'N') || (attempt_2[2] == word[3] && word[3] == 'N') || (attempt_2[2] == word[4] && word[4] == 'N') || (attempt_2[3] == word[1] && word[1] == 'N') || (attempt_2[3] == word[0] && word[0] == 'N') || (attempt_2[3] == word[2] && word[2] == 'N') || (attempt_2[3] == word[4] && word[4] == 'N') || (attempt_2[4] == word[1] && word[1] == 'N') || (attempt_2[4] == word[0] && word[0] == 'N') || (attempt_2[4] == word[3] && word[3] == 'N') || (attempt_2[4] == word[2] && word[2] == 'N') || (attempt_3[0] == word[1] && word[1] == 'N') || (attempt_3[0] == word[2] && word[2] == 'N') || (attempt_3[0] == word[3] && word[3] == 'N') || (attempt_3[0] == word[4] && word[4] == 'N') || (attempt_3[1] == word[0] && word[0] == 'N') || (attempt_3[1] == word[2] && word[2] == 'N') || (attempt_3[1] == word[3] && word[3] == 'N') || (attempt_3[1] == word[4] && word[4] == 'N') || (attempt_3[2] == word[1] && word[1] == 'N') || (attempt_3[2] == word[0] && word[0] == 'N') || (attempt_3[2] == word[3] && word[3] == 'N') || (attempt_3[2] == word[4] && word[4] == 'N') || (attempt_3[3] == word[1] && word[1] == 'N') || (attempt_3[3] == word[0] && word[0] == 'N') || (attempt_3[3] == word[2] && word[2] == 'N') || (attempt_3[3] == word[4] && word[4] == 'N') || (attempt_3[4] == word[1] && word[1] == 'N') || (attempt_3[4] == word[0] && word[0] == 'N') || (attempt_3[4] == word[3] && word[3] == 'N') || (attempt_3[4] == word[2] && word[2] == 'N') || (attempt_4[0] == word[1] && word[1] == 'N') || (attempt_4[0] == word[2] && word[2] == 'N') || (attempt_4[0] == word[3] && word[3] == 'N') || (attempt_4[0] == word[4] && word[4] == 'N') || (attempt_4[1] == word[0] && word[0] == 'N') || (attempt_4[1] == word[2] && word[2] == 'N') || (attempt_4[1] == word[3] && word[3] == 'N') || (attempt_4[1] == word[4] && word[4] == 'N') || (attempt_4[2] == word[1] && word[1] == 'N') || (attempt_4[2] == word[0] && word[0] == 'N') || (attempt_4[2] == word[3] && word[3] == 'N') || (attempt_4[2] == word[4] && word[4] == 'N') || (attempt_4[3] == word[1] && word[1] == 'N') || (attempt_4[3] == word[0] && word[0] == 'N') || (attempt_4[3] == word[2] && word[2] == 'N') || (attempt_4[3] == word[4] && word[4] == 'N') || (attempt_4[4] == word[1] && word[1] == 'N') || (attempt_4[4] == word[0] && word[0] == 'N') || (attempt_4[4] == word[3] && word[3] == 'N') || (attempt_4[4] == word[2] && word[2] == 'N') || (attempt_5[0] == word[1] && word[1] == 'N') || (attempt_5[0] == word[2] && word[2] == 'N') || (attempt_5[0] == word[3] && word[3] == 'N') || (attempt_5[0] == word[4] && word[4] == 'N') || (attempt_5[1] == word[0] && word[0] == 'N') || (attempt_5[1] == word[2] && word[2] == 'N') || (attempt_5[1] == word[3] && word[3] == 'N') || (attempt_5[1] == word[4] && word[4] == 'N') || (attempt_5[2] == word[1] && word[1] == 'N') || (attempt_5[2] == word[0] && word[0] == 'N') || (attempt_5[2] == word[3] && word[3] == 'N') || (attempt_5[2] == word[4] && word[4] == 'N') || (attempt_5[3] == word[1] && word[1] == 'N') || (attempt_5[3] == word[0] && word[0] == 'N') || (attempt_5[3] == word[2] && word[2] == 'N') || (attempt_5[3] == word[4] && word[4] == 'N') || (attempt_5[4] == word[1] && word[1] == 'N') || (attempt_5[4] == word[0] && word[0] == 'N') || (attempt_5[4] == word[3] && word[3] == 'N') || (attempt_5[4] == word[2] && word[2] == 'N') || (attempt_6[0] == word[1] && word[1] == 'N') || (attempt_6[0] == word[2] && word[2] == 'N') || (attempt_6[0] == word[3] && word[3] == 'N') || (attempt_6[0] == word[4] && word[4] == 'N') || (attempt_6[1] == word[0] && word[0] == 'N') || (attempt_6[1] == word[2] && word[2] == 'N') || (attempt_6[1] == word[3] && word[3] == 'N') || (attempt_6[1] == word[4] && word[4] == 'N') || (attempt_6[2] == word[1] && word[1] == 'N') || (attempt_6[2] == word[0] && word[0] == 'N') || (attempt_6[2] == word[3] && word[3] == 'N') || (attempt_6[2] == word[4] && word[4] == 'N') || (attempt_6[3] == word[1] && word[1] == 'N') || (attempt_6[3] == word[0] && word[0] == 'N') || (attempt_6[3] == word[2] && word[2] == 'N') || (attempt_6[3] == word[4] && word[4] == 'N') || (attempt_6[4] == word[1] && word[1] == 'N') || (attempt_6[4] == word[0] && word[0] == 'N') || (attempt_6[4] == word[3] && word[3] == 'N') || (attempt_6[4] == word[2] && word[2] == 'N'))
    {
        cout << " ";
        c2();
        cout << " N ";
        cout << RESET;
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'N') || (attempt_1[0] != word[2] && attempt_1[0] == 'N') || (attempt_1[0] != word[3] && attempt_1[0] == 'N') || (attempt_1[0] != word[4] && attempt_1[0] == 'N') || (attempt_1[1] != word[0] && attempt_1[1] == 'N') || (attempt_1[1] != word[2] && attempt_1[1] == 'N') || (attempt_1[1] != word[3] && attempt_1[1] == 'N') || (attempt_1[1] != word[4] && attempt_1[1] == 'N') || (attempt_1[2] != word[1] && attempt_1[2] == 'N') || (attempt_1[2] != word[0] && attempt_1[2] == 'N') || (attempt_1[2] != word[3] && attempt_1[2] == 'N') || (attempt_1[2] != word[4] && attempt_1[2] == 'N') || (attempt_1[3] != word[1] && attempt_1[3] == 'N') || (attempt_1[3] != word[2] && attempt_1[3] == 'N') || (attempt_1[3] != word[0] && attempt_1[3] == 'N') || (attempt_1[3] != word[4] && attempt_1[3] == 'N') || (attempt_1[4] != word[1] && attempt_1[4] == 'N') || (attempt_1[4] != word[2] && attempt_1[4] == 'N') || (attempt_1[4] != word[3] && attempt_1[4] == 'N') || (attempt_1[4] != word[0] && attempt_1[4] == 'N') || (attempt_2[0] != word[1] && attempt_2[0] == 'N') || (attempt_2[0] != word[2] && attempt_2[0] == 'N') || (attempt_2[0] != word[3] && attempt_2[0] == 'N') || (attempt_2[0] != word[4] && attempt_2[0] == 'N') || (attempt_2[1] != word[0] && attempt_2[1] == 'N') || (attempt_2[1] != word[2] && attempt_2[1] == 'N') || (attempt_2[1] != word[3] && attempt_2[1] == 'N') || (attempt_2[1] != word[4] && attempt_2[1] == 'N') || (attempt_2[2] != word[1] && attempt_2[2] == 'N') || (attempt_2[2] != word[0] && attempt_2[2] == 'N') || (attempt_2[2] != word[3] && attempt_2[2] == 'N') || (attempt_2[2] != word[4] && attempt_2[2] == 'N') || (attempt_2[3] != word[1] && attempt_2[3] == 'N') || (attempt_2[3] != word[2] && attempt_2[3] == 'N') || (attempt_2[3] != word[0] && attempt_2[3] == 'N') || (attempt_2[3] != word[4] && attempt_2[3] == 'N') || (attempt_2[4] != word[1] && attempt_2[4] == 'N') || (attempt_2[4] != word[2] && attempt_2[4] == 'N') || (attempt_2[4] != word[3] && attempt_2[4] == 'N') || (attempt_2[4] != word[0] && attempt_2[4] == 'N') || (attempt_3[0] != word[1] && attempt_3[0] == 'N') || (attempt_3[0] != word[2] && attempt_3[0] == 'N') || (attempt_3[0] != word[3] && attempt_3[0] == 'N') || (attempt_3[0] != word[4] && attempt_3[0] == 'N') || (attempt_3[1] != word[0] && attempt_3[1] == 'N') || (attempt_3[1] != word[2] && attempt_3[1] == 'N') || (attempt_3[1] != word[3] && attempt_3[1] == 'N') || (attempt_3[1] != word[4] && attempt_3[1] == 'N') || (attempt_3[2] != word[1] && attempt_3[2] == 'N') || (attempt_3[2] != word[0] && attempt_3[2] == 'N') || (attempt_3[2] != word[3] && attempt_3[2] == 'N') || (attempt_3[2] != word[4] && attempt_3[2] == 'N') || (attempt_3[3] != word[1] && attempt_3[3] == 'N') || (attempt_3[3] != word[2] && attempt_3[3] == 'N') || (attempt_3[3] != word[0] && attempt_3[3] == 'N') || (attempt_3[3] != word[4] && attempt_3[3] == 'N') || (attempt_3[4] != word[1] && attempt_3[4] == 'N') || (attempt_3[4] != word[2] && attempt_3[4] == 'N') || (attempt_3[4] != word[3] && attempt_3[4] == 'N') || (attempt_3[4] != word[0] && attempt_3[4] == 'N') || (attempt_4[0] != word[1] && attempt_4[0] == 'N') || (attempt_4[0] != word[2] && attempt_4[0] == 'N') || (attempt_4[0] != word[3] && attempt_4[0] == 'N') || (attempt_4[0] != word[4] && attempt_4[0] == 'N') || (attempt_4[1] != word[0] && attempt_4[1] == 'N') || (attempt_4[1] != word[2] && attempt_4[1] == 'N') || (attempt_4[1] != word[3] && attempt_4[1] == 'N') || (attempt_4[1] != word[4] && attempt_4[1] == 'N') || (attempt_4[2] != word[1] && attempt_4[2] == 'N') || (attempt_4[2] != word[0] && attempt_4[2] == 'N') || (attempt_4[2] != word[3] && attempt_4[2] == 'N') || (attempt_4[2] != word[4] && attempt_4[2] == 'N') || (attempt_4[3] != word[1] && attempt_4[3] == 'N') || (attempt_4[3] != word[2] && attempt_4[3] == 'N') || (attempt_4[3] != word[0] && attempt_4[3] == 'N') || (attempt_4[3] != word[4] && attempt_4[3] == 'N') || (attempt_4[4] != word[1] && attempt_4[4] == 'N') || (attempt_4[4] != word[2] && attempt_4[4] == 'N') || (attempt_4[4] != word[3] && attempt_4[4] == 'N') || (attempt_4[4] != word[0] && attempt_4[4] == 'N') || (attempt_5[0] != word[1] && attempt_5[0] == 'N') || (attempt_5[0] != word[2] && attempt_5[0] == 'N') || (attempt_5[0] != word[3] && attempt_5[0] == 'N') || (attempt_5[0] != word[4] && attempt_5[0] == 'N') || (attempt_5[1] != word[0] && attempt_5[1] == 'N') || (attempt_5[1] != word[2] && attempt_5[1] == 'N') || (attempt_5[1] != word[3] && attempt_5[1] == 'N') || (attempt_5[1] != word[4] && attempt_5[1] == 'N') || (attempt_5[2] != word[1] && attempt_5[2] == 'N') || (attempt_5[2] != word[0] && attempt_5[2] == 'N') || (attempt_5[2] != word[3] && attempt_5[2] == 'N') || (attempt_5[2] != word[4] && attempt_5[2] == 'N') || (attempt_5[3] != word[1] && attempt_5[3] == 'N') || (attempt_5[3] != word[2] && attempt_5[3] == 'N') || (attempt_5[3] != word[0] && attempt_5[3] == 'N') || (attempt_5[3] != word[4] && attempt_5[3] == 'N') || (attempt_5[4] != word[1] && attempt_5[4] == 'N') || (attempt_5[4] != word[2] && attempt_5[4] == 'N') || (attempt_5[4] != word[3] && attempt_5[4] == 'N') || (attempt_5[4] != word[0] && attempt_5[4] == 'N') || (attempt_6[0] != word[1] && attempt_6[0] == 'N') || (attempt_6[0] != word[2] && attempt_6[0] == 'N') || (attempt_6[0] != word[3] && attempt_6[0] == 'N') || (attempt_6[0] != word[4] && attempt_6[0] == 'N') || (attempt_6[1] != word[0] && attempt_6[1] == 'N') || (attempt_6[1] != word[2] && attempt_6[1] == 'N') || (attempt_6[1] != word[3] && attempt_6[1] == 'N') || (attempt_6[1] != word[4] && attempt_6[1] == 'N') || (attempt_6[2] != word[1] && attempt_6[2] == 'N') || (attempt_6[2] != word[0] && attempt_6[2] == 'N') || (attempt_6[2] != word[3] && attempt_6[2] == 'N') || (attempt_6[2] != word[4] && attempt_6[2] == 'N') || (attempt_6[3] != word[1] && attempt_6[3] == 'N') || (attempt_6[3] != word[2] && attempt_6[3] == 'N') || (attempt_6[3] != word[0] && attempt_6[3] == 'N') || (attempt_6[3] != word[4] && attempt_6[3] == 'N') || (attempt_6[4] != word[1] && attempt_6[4] == 'N') || (attempt_6[4] != word[2] && attempt_6[4] == 'N') || (attempt_6[4] != word[3] && attempt_6[4] == 'N') || (attempt_6[4] != word[0] && attempt_6[4] == 'N'))
    {
        cout << " ";
        c3();
        cout << " N ";
        cout << RESET;
    }
    else
    {
        cout << " ";
        cout << " N ";
    }
    if ((attempt_1[0] == word[0] && attempt_1[0] == 'M') || (attempt_1[1] == word[1] && attempt_1[1] == 'M') || (attempt_1[2] == word[2] && attempt_1[2] == 'M') || (attempt_1[3] == word[3] && attempt_1[3] == 'M') || (attempt_1[4] == word[4] && attempt_1[4] == 'M') || (attempt_2[0] == word[0] && attempt_2[0] == 'M') || (attempt_2[1] == word[1] && attempt_2[1] == 'M') || (attempt_2[2] == word[2] && attempt_2[2] == 'M') || (attempt_2[3] == word[3] && attempt_2[3] == 'M') || (attempt_2[4] == word[4] && attempt_2[4] == 'M') || (attempt_3[0] == word[0] && attempt_3[0] == 'M') || (attempt_3[1] == word[1] && attempt_3[1] == 'M') || (attempt_3[2] == word[2] && attempt_3[2] == 'M') || (attempt_3[3] == word[3] && attempt_3[3] == 'M') || (attempt_3[4] == word[4] && attempt_3[4] == 'M') || (attempt_4[0] == word[0] && attempt_4[0] == 'M') || (attempt_4[1] == word[1] && attempt_4[1] == 'M') || (attempt_4[2] == word[2] && attempt_4[2] == 'M') || (attempt_4[3] == word[3] && attempt_4[3] == 'M') || (attempt_4[4] == word[4] && attempt_4[4] == 'M') || (attempt_5[0] == word[0] && attempt_5[0] == 'M') || (attempt_5[1] == word[1] && attempt_5[1] == 'M') || (attempt_5[2] == word[2] && attempt_5[2] == 'M') || (attempt_5[3] == word[3] && attempt_5[3] == 'M') || (attempt_5[4] == word[4] && attempt_5[4] == 'M') || (attempt_6[0] == word[0] && attempt_6[0] == 'M') || (attempt_6[1] == word[1] && attempt_6[1] == 'M') || (attempt_6[2] == word[2] && attempt_6[2] == 'M') || (attempt_6[3] == word[3] && attempt_6[3] == 'M') || (attempt_6[4] == word[4] && attempt_6[4] == 'M'))
    {
        cout << " ";
        c1();
        cout << " M ";
        cout << RESET;
        cout << " ";
    }
    else if ((attempt_1[0] == word[1] && word[1] == 'M') || (attempt_1[0] == word[2] && word[2] == 'M') || (attempt_1[0] == word[3] && word[3] == 'M') || (attempt_1[0] == word[4] && word[4] == 'M') || (attempt_1[1] == word[0] && word[0] == 'M') || (attempt_1[1] == word[2] && word[2] == 'M') || (attempt_1[1] == word[3] && word[3] == 'M') || (attempt_1[1] == word[4] && word[4] == 'M') || (attempt_1[2] == word[1] && word[1] == 'M') || (attempt_1[2] == word[0] && word[0] == 'M') || (attempt_1[2] == word[3] && word[3] == 'M') || (attempt_1[2] == word[4] && word[4] == 'M') || (attempt_1[3] == word[1] && word[1] == 'M') || (attempt_1[3] == word[0] && word[0] == 'M') || (attempt_1[3] == word[2] && word[2] == 'M') || (attempt_1[3] == word[4] && word[4] == 'M') || (attempt_1[4] == word[1] && word[1] == 'M') || (attempt_1[4] == word[0] && word[0] == 'M') || (attempt_1[4] == word[3] && word[3] == 'M') || (attempt_1[4] == word[2] && word[2] == 'M') || (attempt_2[0] == word[1] && word[1] == 'M') || (attempt_2[0] == word[2] && word[2] == 'M') || (attempt_2[0] == word[3] && word[3] == 'M') || (attempt_2[0] == word[4] && word[4] == 'M') || (attempt_2[1] == word[0] && word[0] == 'M') || (attempt_2[1] == word[2] && word[2] == 'M') || (attempt_2[1] == word[3] && word[3] == 'M') || (attempt_2[1] == word[4] && word[4] == 'M') || (attempt_2[2] == word[1] && word[1] == 'M') || (attempt_2[2] == word[0] && word[0] == 'M') || (attempt_2[2] == word[3] && word[3] == 'M') || (attempt_2[2] == word[4] && word[4] == 'M') || (attempt_2[3] == word[1] && word[1] == 'M') || (attempt_2[3] == word[0] && word[0] == 'M') || (attempt_2[3] == word[2] && word[2] == 'M') || (attempt_2[3] == word[4] && word[4] == 'M') || (attempt_2[4] == word[1] && word[1] == 'M') || (attempt_2[4] == word[0] && word[0] == 'M') || (attempt_2[4] == word[3] && word[3] == 'M') || (attempt_2[4] == word[2] && word[2] == 'M') || (attempt_3[0] == word[1] && word[1] == 'M') || (attempt_3[0] == word[2] && word[2] == 'M') || (attempt_3[0] == word[3] && word[3] == 'M') || (attempt_3[0] == word[4] && word[4] == 'M') || (attempt_3[1] == word[0] && word[0] == 'M') || (attempt_3[1] == word[2] && word[2] == 'M') || (attempt_3[1] == word[3] && word[3] == 'M') || (attempt_3[1] == word[4] && word[4] == 'M') || (attempt_3[2] == word[1] && word[1] == 'M') || (attempt_3[2] == word[0] && word[0] == 'M') || (attempt_3[2] == word[3] && word[3] == 'M') || (attempt_3[2] == word[4] && word[4] == 'M') || (attempt_3[3] == word[1] && word[1] == 'M') || (attempt_3[3] == word[0] && word[0] == 'M') || (attempt_3[3] == word[2] && word[2] == 'M') || (attempt_3[3] == word[4] && word[4] == 'M') || (attempt_3[4] == word[1] && word[1] == 'M') || (attempt_3[4] == word[0] && word[0] == 'M') || (attempt_3[4] == word[3] && word[3] == 'M') || (attempt_3[4] == word[2] && word[2] == 'M') || (attempt_4[0] == word[1] && word[1] == 'M') || (attempt_4[0] == word[2] && word[2] == 'M') || (attempt_4[0] == word[3] && word[3] == 'M') || (attempt_4[0] == word[4] && word[4] == 'M') || (attempt_4[1] == word[0] && word[0] == 'M') || (attempt_4[1] == word[2] && word[2] == 'M') || (attempt_4[1] == word[3] && word[3] == 'M') || (attempt_4[1] == word[4] && word[4] == 'M') || (attempt_4[2] == word[1] && word[1] == 'M') || (attempt_4[2] == word[0] && word[0] == 'M') || (attempt_4[2] == word[3] && word[3] == 'M') || (attempt_4[2] == word[4] && word[4] == 'M') || (attempt_4[3] == word[1] && word[1] == 'M') || (attempt_4[3] == word[0] && word[0] == 'M') || (attempt_4[3] == word[2] && word[2] == 'M') || (attempt_4[3] == word[4] && word[4] == 'M') || (attempt_4[4] == word[1] && word[1] == 'M') || (attempt_4[4] == word[0] && word[0] == 'M') || (attempt_4[4] == word[3] && word[3] == 'M') || (attempt_4[4] == word[2] && word[2] == 'M') || (attempt_5[0] == word[1] && word[1] == 'M') || (attempt_5[0] == word[2] && word[2] == 'M') || (attempt_5[0] == word[3] && word[3] == 'M') || (attempt_5[0] == word[4] && word[4] == 'M') || (attempt_5[1] == word[0] && word[0] == 'M') || (attempt_5[1] == word[2] && word[2] == 'M') || (attempt_5[1] == word[3] && word[3] == 'M') || (attempt_5[1] == word[4] && word[4] == 'M') || (attempt_5[2] == word[1] && word[1] == 'M') || (attempt_5[2] == word[0] && word[0] == 'M') || (attempt_5[2] == word[3] && word[3] == 'M') || (attempt_5[2] == word[4] && word[4] == 'M') || (attempt_5[3] == word[1] && word[1] == 'M') || (attempt_5[3] == word[0] && word[0] == 'M') || (attempt_5[3] == word[2] && word[2] == 'M') || (attempt_5[3] == word[4] && word[4] == 'M') || (attempt_5[4] == word[1] && word[1] == 'M') || (attempt_5[4] == word[0] && word[0] == 'M') || (attempt_5[4] == word[3] && word[3] == 'M') || (attempt_5[4] == word[2] && word[2] == 'M') || (attempt_6[0] == word[1] && word[1] == 'M') || (attempt_6[0] == word[2] && word[2] == 'M') || (attempt_6[0] == word[3] && word[3] == 'M') || (attempt_6[0] == word[4] && word[4] == 'M') || (attempt_6[1] == word[0] && word[0] == 'M') || (attempt_6[1] == word[2] && word[2] == 'M') || (attempt_6[1] == word[3] && word[3] == 'M') || (attempt_6[1] == word[4] && word[4] == 'M') || (attempt_6[2] == word[1] && word[1] == 'M') || (attempt_6[2] == word[0] && word[0] == 'M') || (attempt_6[2] == word[3] && word[3] == 'M') || (attempt_6[2] == word[4] && word[4] == 'M') || (attempt_6[3] == word[1] && word[1] == 'M') || (attempt_6[3] == word[0] && word[0] == 'M') || (attempt_6[3] == word[2] && word[2] == 'M') || (attempt_6[3] == word[4] && word[4] == 'M') || (attempt_6[4] == word[1] && word[1] == 'M') || (attempt_6[4] == word[0] && word[0] == 'M') || (attempt_6[4] == word[3] && word[3] == 'M') || (attempt_6[4] == word[2] && word[2] == 'M'))
    {
        cout << " ";
        c2();
        cout << " M ";
        cout << RESET;
        cout << " ";
    }
    else if ((attempt_1[0] != word[1] && attempt_1[0] == 'M') || (attempt_1[0] != word[2] && attempt_1[0] == 'M') || (attempt_1[0] != word[3] && attempt_1[0] == 'M') || (attempt_1[0] != word[4] && attempt_1[0] == 'M') || (attempt_1[1] != word[0] && attempt_1[1] == 'M') || (attempt_1[1] != word[2] && attempt_1[1] == 'M') || (attempt_1[1] != word[3] && attempt_1[1] == 'M') || (attempt_1[1] != word[4] && attempt_1[1] == 'M') || (attempt_1[2] != word[1] && attempt_1[2] == 'M') || (attempt_1[2] != word[0] && attempt_1[2] == 'M') || (attempt_1[2] != word[3] && attempt_1[2] == 'M') || (attempt_1[2] != word[4] && attempt_1[2] == 'M') || (attempt_1[3] != word[1] && attempt_1[3] == 'M') || (attempt_1[3] != word[2] && attempt_1[3] == 'M') || (attempt_1[3] != word[0] && attempt_1[3] == 'M') || (attempt_1[3] != word[4] && attempt_1[3] == 'M') || (attempt_1[4] != word[1] && attempt_1[4] == 'M') || (attempt_1[4] != word[2] && attempt_1[4] == 'M') || (attempt_1[4] != word[3] && attempt_1[4] == 'M') || (attempt_1[4] != word[0] && attempt_1[4] == 'M') || (attempt_2[0] != word[1] && attempt_2[0] == 'M') || (attempt_2[0] != word[2] && attempt_2[0] == 'M') || (attempt_2[0] != word[3] && attempt_2[0] == 'M') || (attempt_2[0] != word[4] && attempt_2[0] == 'M') || (attempt_2[1] != word[0] && attempt_2[1] == 'M') || (attempt_2[1] != word[2] && attempt_2[1] == 'M') || (attempt_2[1] != word[3] && attempt_2[1] == 'M') || (attempt_2[1] != word[4] && attempt_2[1] == 'M') || (attempt_2[2] != word[1] && attempt_2[2] == 'M') || (attempt_2[2] != word[0] && attempt_2[2] == 'M') || (attempt_2[2] != word[3] && attempt_2[2] == 'M') || (attempt_2[2] != word[4] && attempt_2[2] == 'M') || (attempt_2[3] != word[1] && attempt_2[3] == 'M') || (attempt_2[3] != word[2] && attempt_2[3] == 'M') || (attempt_2[3] != word[0] && attempt_2[3] == 'M') || (attempt_2[3] != word[4] && attempt_2[3] == 'M') || (attempt_2[4] != word[1] && attempt_2[4] == 'M') || (attempt_2[4] != word[2] && attempt_2[4] == 'M') || (attempt_2[4] != word[3] && attempt_2[4] == 'M') || (attempt_2[4] != word[0] && attempt_2[4] == 'M') || (attempt_3[0] != word[1] && attempt_3[0] == 'M') || (attempt_3[0] != word[2] && attempt_3[0] == 'M') || (attempt_3[0] != word[3] && attempt_3[0] == 'M') || (attempt_3[0] != word[4] && attempt_3[0] == 'M') || (attempt_3[1] != word[0] && attempt_3[1] == 'M') || (attempt_3[1] != word[2] && attempt_3[1] == 'M') || (attempt_3[1] != word[3] && attempt_3[1] == 'M') || (attempt_3[1] != word[4] && attempt_3[1] == 'M') || (attempt_3[2] != word[1] && attempt_3[2] == 'M') || (attempt_3[2] != word[0] && attempt_3[2] == 'M') || (attempt_3[2] != word[3] && attempt_3[2] == 'M') || (attempt_3[2] != word[4] && attempt_3[2] == 'M') || (attempt_3[3] != word[1] && attempt_3[3] == 'M') || (attempt_3[3] != word[2] && attempt_3[3] == 'M') || (attempt_3[3] != word[0] && attempt_3[3] == 'M') || (attempt_3[3] != word[4] && attempt_3[3] == 'M') || (attempt_3[4] != word[1] && attempt_3[4] == 'M') || (attempt_3[4] != word[2] && attempt_3[4] == 'M') || (attempt_3[4] != word[3] && attempt_3[4] == 'M') || (attempt_3[4] != word[0] && attempt_3[4] == 'M') || (attempt_4[0] != word[1] && attempt_4[0] == 'M') || (attempt_4[0] != word[2] && attempt_4[0] == 'M') || (attempt_4[0] != word[3] && attempt_4[0] == 'M') || (attempt_4[0] != word[4] && attempt_4[0] == 'M') || (attempt_4[1] != word[0] && attempt_4[1] == 'M') || (attempt_4[1] != word[2] && attempt_4[1] == 'M') || (attempt_4[1] != word[3] && attempt_4[1] == 'M') || (attempt_4[1] != word[4] && attempt_4[1] == 'M') || (attempt_4[2] != word[1] && attempt_4[2] == 'M') || (attempt_4[2] != word[0] && attempt_4[2] == 'M') || (attempt_4[2] != word[3] && attempt_4[2] == 'M') || (attempt_4[2] != word[4] && attempt_4[2] == 'M') || (attempt_4[3] != word[1] && attempt_4[3] == 'M') || (attempt_4[3] != word[2] && attempt_4[3] == 'M') || (attempt_4[3] != word[0] && attempt_4[3] == 'M') || (attempt_4[3] != word[4] && attempt_4[3] == 'M') || (attempt_4[4] != word[1] && attempt_4[4] == 'M') || (attempt_4[4] != word[2] && attempt_4[4] == 'M') || (attempt_4[4] != word[3] && attempt_4[4] == 'M') || (attempt_4[4] != word[0] && attempt_4[4] == 'M') || (attempt_5[0] != word[1] && attempt_5[0] == 'M') || (attempt_5[0] != word[2] && attempt_5[0] == 'M') || (attempt_5[0] != word[3] && attempt_5[0] == 'M') || (attempt_5[0] != word[4] && attempt_5[0] == 'M') || (attempt_5[1] != word[0] && attempt_5[1] == 'M') || (attempt_5[1] != word[2] && attempt_5[1] == 'M') || (attempt_5[1] != word[3] && attempt_5[1] == 'M') || (attempt_5[1] != word[4] && attempt_5[1] == 'M') || (attempt_5[2] != word[1] && attempt_5[2] == 'M') || (attempt_5[2] != word[0] && attempt_5[2] == 'M') || (attempt_5[2] != word[3] && attempt_5[2] == 'M') || (attempt_5[2] != word[4] && attempt_5[2] == 'M') || (attempt_5[3] != word[1] && attempt_5[3] == 'M') || (attempt_5[3] != word[2] && attempt_5[3] == 'M') || (attempt_5[3] != word[0] && attempt_5[3] == 'M') || (attempt_5[3] != word[4] && attempt_5[3] == 'M') || (attempt_5[4] != word[1] && attempt_5[4] == 'M') || (attempt_5[4] != word[2] && attempt_5[4] == 'M') || (attempt_5[4] != word[3] && attempt_5[4] == 'M') || (attempt_5[4] != word[0] && attempt_5[4] == 'M') || (attempt_6[0] != word[1] && attempt_6[0] == 'M') || (attempt_6[0] != word[2] && attempt_6[0] == 'M') || (attempt_6[0] != word[3] && attempt_6[0] == 'M') || (attempt_6[0] != word[4] && attempt_6[0] == 'M') || (attempt_6[1] != word[0] && attempt_6[1] == 'M') || (attempt_6[1] != word[2] && attempt_6[1] == 'M') || (attempt_6[1] != word[3] && attempt_6[1] == 'M') || (attempt_6[1] != word[4] && attempt_6[1] == 'M') || (attempt_6[2] != word[1] && attempt_6[2] == 'M') || (attempt_6[2] != word[0] && attempt_6[2] == 'M') || (attempt_6[2] != word[3] && attempt_6[2] == 'M') || (attempt_6[2] != word[4] && attempt_6[2] == 'M') || (attempt_6[3] != word[1] && attempt_6[3] == 'M') || (attempt_6[3] != word[2] && attempt_6[3] == 'M') || (attempt_6[3] != word[0] && attempt_6[3] == 'M') || (attempt_6[3] != word[4] && attempt_6[3] == 'M') || (attempt_6[4] != word[1] && attempt_6[4] == 'M') || (attempt_6[4] != word[2] && attempt_6[4] == 'M') || (attempt_6[4] != word[3] && attempt_6[4] == 'M') || (attempt_6[4] != word[0] && attempt_6[4] == 'M'))
    {
        cout << " ";
        c3();
        cout << " M ";
        cout << RESET;
        cout << " ";
    }
    else
    {
        cout << " ";
        cout << " M ";
        cout << " ";
    }
}

void header()
{
    cout << endl;
	_setmode(_fileno(stdout), _O_WTEXT);
	{
		wcout << "                               " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                               " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "\n"
			<< "                               " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                               " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                               " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                               " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << endl;
	}

	_setmode(_fileno(stdout), _O_TEXT);

}

void pumpkin()
{
    cout << endl;
    _setmode(_fileno(stdout), _O_WTEXT);
    {
        wcout << "                                     "  << "                " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "               " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "               " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "                " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << "     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "      " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "     " << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2588 << "  " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "  " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << " " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << "\n"
            << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << "\n"
            << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << "\n"
            << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << "\n"
            << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << "\n"
            << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << "\n"
            << "                                     " << " " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << "\n"
            << "                                     " << " " << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << "\n"
            << "                                     " << " " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "  " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2592 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
            << "                                     " << "        " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << endl;
    }

    _setmode(_fileno(stdout), _O_TEXT);

}

void header_2()
{
    cout << endl << endl;
    _setmode(_fileno(stdout), _O_WTEXT);
    {
        wcout << "                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "    " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
            << "                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "\n"
            << "                     " << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << "    " << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << "\n"
            << "                     " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << "    " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
            << "                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
            << "                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "    " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << endl;
    }

    _setmode(_fileno(stdout), _O_TEXT);

}

void rules()
{
    cout << endl;
	_setmode(_fileno(stdout), _O_WTEXT);
	{
		wcout << "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "\n"
			<< "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << "\n"
			<< "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                                    " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "\n"
			<< "                                    " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << endl;
	}

	_setmode(_fileno(stdout), _O_TEXT);
}

void start()
{
    cout << endl;
	_setmode(_fileno(stdout), _O_WTEXT);
	{
		wcout << "                           " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                           " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                           " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "   " << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
			<< "                           " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "   " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "\n"
			<< "                           " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
			<< "                           " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "   " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << endl;
	}

	_setmode(_fileno(stdout), _O_TEXT);
}

void answers()
{
    int random;
    srand(time(NULL));
    random = rand() % 80 + 1;

    if (random == 1)
    {
        word[0] = 'T';
        word[1] = 'R';
        word[2] = 'E';
        word[3] = 'A';
        word[4] = 'T';
    }
    else if (random == 2)
    {
        word[0] = 'S';
        word[1] = 'C';
        word[2] = 'A';
        word[3] = 'R';
        word[4] = 'Y';
    }
    else if (random == 3)
    {
        word[0] = 'G';
        word[1] = 'H';
        word[2] = 'O';
        word[3] = 'S';
        word[4] = 'T';
    }
    else if (random == 4)
    {
        word[0] = 'B';
        word[1] = 'I';
        word[2] = 'B';
        word[3] = 'L';
        word[4] = 'E';
    }
    else if (random == 5)
    {
        word[0] = 'S';
        word[1] = 'T';
        word[2] = 'I';
        word[3] = 'F';
        word[4] = 'F';
    }
    else if (random == 6)
    {
        word[0] = 'M';
        word[1] = 'O';
        word[2] = 'L';
        word[3] = 'D';
        word[4] = 'Y';
    }
    else if (random == 7)
    {
        word[0] = 'G';
        word[1] = 'H';
        word[2] = 'O';
        word[3] = 'U';
        word[4] = 'L';
    }
    else if (random == 8)
    {
        word[0] = 'G';
        word[1] = 'R';
        word[2] = 'O';
        word[3] = 'W';
        word[4] = 'L';
    }
    else if (random == 9)
    {
        word[0] = 'S';
        word[1] = 'N';
        word[2] = 'A';
        word[3] = 'R';
        word[4] = 'L';
    }
    else if (random == 10)
    {
        word[0] = 'S';
        word[1] = 'N';
        word[2] = 'I';
        word[3] = 'F';
        word[4] = 'F';
    }
    else if (random == 11)
    {
        word[0] = 'G';
        word[1] = 'O';
        word[2] = 'U';
        word[3] = 'R';
        word[4] = 'D';
    }
    else if (random == 12)
    {
        word[0] = 'G';
        word[1] = 'R';
        word[2] = 'A';
        word[3] = 'V';
        word[4] = 'E';
    }
    else if (random == 13)
    {
        word[0] = 'S';
        word[1] = 'K';
        word[2] = 'U';
        word[3] = 'L';
        word[4] = 'L';
    }
    else if (random == 14)
    {
        word[0] = 'S';
        word[1] = 'I';
        word[2] = 'N';
        word[3] = 'E';
        word[4] = 'W';
    }
    else if (random == 15)
    {
        word[0] = 'P';
        word[1] = 'A';
        word[2] = 'N';
        word[3] = 'I';
        word[4] = 'C';
    }
    else if (random == 16)
    {
        word[0] = 'U';
        word[1] = 'N';
        word[2] = 'C';
        word[3] = 'E';
        word[4] = 'R';
    }
    else if (random == 17)
    {
        word[0] = 'S';
        word[1] = 'A';
        word[2] = 'I';
        word[3] = 'N';
        word[4] = 'T';
    }
    else if (random == 18)
    {
        word[0] = 'R';
        word[1] = 'I';
        word[2] = 'D';
        word[3] = 'G';
        word[4] = 'E';
    }
    else if (random == 19)
    {
        word[0] = 'B';
        word[1] = 'O';
        word[2] = 'N';
        word[3] = 'E';
        word[4] = 'S';
    }
    else if (random == 20)
    {
        word[0] = 'S';
        word[1] = 'A';
        word[2] = 'L';
        word[3] = 'E';
        word[4] = 'M';
    }
    else if (random == 21)
    {
        word[0] = 'S';
        word[1] = 'A';
        word[2] = 'N';
        word[3] = 'T';
        word[4] = 'O';
    }
    else if (random == 22)
    {
        word[0] = 'S';
        word[1] = 'A';
        word[2] = 'L';
        word[3] = 'V';
        word[4] = 'E';
    }
    else if (random == 23)
    {
        word[0] = 'N';
        word[1] = 'O';
        word[2] = 'O';
        word[3] = 'S';
        word[4] = 'E';
    }
    else if (random == 24)
    {
        word[0] = 'A';
        word[1] = 'B';
        word[2] = 'O';
        word[3] = 'R';
        word[4] = 'T';
    }
    else if (random == 25)
    {
        word[0] = 'M';
        word[1] = 'E';
        word[2] = 'R';
        word[3] = 'R';
        word[4] = 'Y';
    }
    else if (random == 26)
    {
        word[0] = 'S';
        word[1] = 'C';
        word[2] = 'R';
        word[3] = 'E';
        word[4] = 'M';
    }
    else if (random == 27)
    {
        word[0] = 'M';
        word[1] = 'O';
        word[2] = 'R';
        word[3] = 'P';
        word[4] = 'H';
    }
    else if (random == 28)
    {
        word[0] = 'C';
        word[1] = 'L';
        word[2] = 'I';
        word[3] = 'F';
        word[4] = 'F';
    }
    else if (random == 29)
    {
        word[0] = 'R';
        word[1] = 'A';
        word[2] = 'C';
        word[3] = 'E';
        word[4] = 'R';
    }
    else if (random == 30)
    {
        word[0] = 'L';
        word[1] = 'Y';
        word[2] = 'C';
        word[3] = 'A';
        word[4] = 'N';
    }
    else if (random == 31)
    {
        word[0] = 'S';
        word[1] = 'N';
        word[2] = 'A';
        word[3] = 'K';
        word[4] = 'E';
    }
    else if (random == 32)
    {
        word[0] = 'S';
        word[1] = 'L';
        word[2] = 'A';
        word[3] = 'I';
        word[4] = 'N';
    }
    else if (random == 33)
    {
        word[0] = 'V';
        word[1] = 'E';
        word[2] = 'N';
        word[3] = 'O';
        word[4] = 'M';
    }
    else if (random == 34)
    {
        word[0] = 'S';
        word[1] = 'L';
        word[2] = 'A';
        word[3] = 'I';
        word[4] = 'N';
    }
    else if (random == 35)
    {
        word[0] = 'B';
        word[1] = 'L';
        word[2] = 'A';
        word[3] = 'D';
        word[4] = 'E';
    }
    else if (random == 36)
    {
        word[0] = 'H';
        word[1] = 'I';
        word[2] = 'V';
        word[3] = 'E';
        word[4] = 'S';
    }
    else if (random == 37)
    {
        word[0] = 'D';
        word[1] = 'E';
        word[2] = 'C';
        word[3] = 'A';
        word[4] = 'Y';
    }
    else if (random == 38)
    {
        word[0] = 'M';
        word[1] = 'O';
        word[2] = 'R';
        word[3] = 'O';
        word[4] = 'N';
    }
    else if (random == 39)
    {
        word[0] = 'H';
        word[1] = 'A';
        word[2] = 'T';
        word[3] = 'E';
        word[4] = 'D';
    }
    else if (random == 40)
    {
        word[0] = 'G';
        word[1] = 'N';
        word[2] = 'O';
        word[3] = 'M';
        word[4] = 'E';
    }
    else if (random == 41)
    {
        word[0] = 'F';
        word[1] = 'L';
        word[2] = 'A';
        word[3] = 'M';
        word[4] = 'E';
    }
    else if (random == 42)
    {
        word[0] = 'C';
        word[1] = 'O';
        word[2] = 'M';
        word[3] = 'E';
        word[4] = 'R';
    }
    else if (random == 43)
    {
        word[0] = 'A';
        word[1] = 'N';
        word[2] = 'G';
        word[3] = 'E';
        word[4] = 'L';
    }
    else if (random == 44)
    {
        word[0] = 'A';
        word[1] = 'P';
        word[2] = 'P';
        word[3] = 'L';
        word[4] = 'E';
    }
    else if (random == 45)
    {
        word[0] = 'Z';
        word[1] = 'O';
        word[2] = 'M';
        word[3] = 'B';
        word[4] = 'I';
    }
    else if (random == 46)
    {
        word[0] = 'C';
        word[1] = 'U';
        word[2] = 'R';
        word[3] = 'S';
        word[4] = 'E';
    }
    else if (random == 47)
    {
        word[0] = 'D';
        word[1] = 'R';
        word[2] = 'E';
        word[3] = 'A';
        word[4] = 'D';
    }
    else if (random == 48)
    {
        word[0] = 'F';
        word[1] = 'E';
        word[2] = 'A';
        word[3] = 'S';
        word[4] = 'T';
    }
    else if (random == 49)
    {
        word[0] = 'F';
        word[1] = 'E';
        word[2] = 'I';
        word[3] = 'S';
        word[4] = 'T';
    }
    else if (random == 50)
    {
        word[0] = 'B';
        word[1] = 'O';
        word[2] = 'A';
        word[3] = 'R';
        word[4] = 'D';
    }
    else if (random == 51)
    {
        word[0] = 'B';
        word[1] = 'A';
        word[2] = 'T';
        word[3] = 'T';
        word[4] = 'Y';
    }
    else if (random == 52)
    {
        word[0] = 'C';
        word[1] = 'R';
        word[2] = 'A';
        word[3] = 'Z';
        word[4] = 'Y';
    }
    else if (random == 53)
    {
        word[0] = 'A';
        word[1] = 'L';
        word[2] = 'O';
        word[3] = 'N';
        word[4] = 'E';
    }
    else if (random == 54)
    {
        word[0] = 'C';
        word[1] = 'R';
        word[2] = 'I';
        word[3] = 'M';
        word[4] = 'E';
    }
    else if (random == 55)
    {
        word[0] = 'D';
        word[1] = 'E';
        word[2] = 'M';
        word[3] = 'O';
        word[4] = 'N';
    }
    else if (random == 56)
    {
        word[0] = 'F';
        word[1] = 'A';
        word[2] = 'I';
        word[3] = 'T';
        word[4] = 'H';
    }
    else if (random == 57)
    {
        word[0] = 'A';
        word[1] = 'L';
        word[2] = 'A';
        word[3] = 'R';
        word[4] = 'M';
    }
    else if (random == 58)
    {
        word[0] = 'B';
        word[1] = 'R';
        word[2] = 'A';
        word[3] = 'I';
        word[4] = 'N';
    }
    else if (random == 59)
    {
        word[0] = 'B';
        word[1] = 'R';
        word[2] = 'U';
        word[3] = 'T';
        word[4] = 'E';
    }
    else if (random == 60)
    {
        word[0] = 'B';
        word[1] = 'R';
        word[2] = 'A';
        word[3] = 'W';
        word[4] = 'L';
    }
    else if (random == 60)
    {
        word[0] = 'T';
        word[1] = 'U';
        word[2] = 'M';
        word[3] = 'O';
        word[4] = 'R';
    }
    else if (random == 61)
    {
        word[0] = 'B';
        word[1] = 'O';
        word[2] = 'G';
        word[3] = 'U';
        word[4] = 'E';
    }
    else if (random == 62)
    {
        word[0] = 'M';
        word[1] = 'I';
        word[2] = 'G';
        word[3] = 'H';
        word[4] = 'T';
    }
    else if (random == 63)
    {
        word[0] = 'C';
        word[1] = 'A';
        word[2] = 'R';
        word[3] = 'R';
        word[4] = 'Y';
    }
    else if (random == 64)
    {
        word[0] = 'C';
        word[1] = 'H';
        word[2] = 'A';
        word[3] = 'F';
        word[4] = 'E';
    }
    else if (random == 65)
    {
        word[0] = 'B';
        word[1] = 'A';
        word[2] = 'W';
        word[3] = 'D';
        word[4] = 'Y';
    }
    else if (random == 66)
    {
        word[0] = 'B';
        word[1] = 'L';
        word[2] = 'I';
        word[3] = 'N';
        word[4] = 'D';
    }
    else if (random == 67)
    {
        word[0] = 'A';
        word[1] = 'W';
        word[2] = 'F';
        word[3] = 'U';
        word[4] = 'L';
    }
    else if (random == 68)
    {
        word[0] = 'B';
        word[1] = 'U';
        word[2] = 'L';
        word[3] = 'L';
        word[4] = 'Y';
    }
    else if (random == 69)
    {
        word[0] = 'A';
        word[1] = 'L';
        word[2] = 'I';
        word[3] = 'V';
        word[4] = 'E';
    }
    else if (random == 70)
    {
        word[0] = 'D';
        word[1] = 'E';
        word[2] = 'V';
        word[3] = 'I';
        word[4] = 'L';
    }
    else if (random == 71)
    {
        word[0] = 'A';
        word[1] = 'N';
        word[2] = 'G';
        word[3] = 'E';
        word[4] = 'R';
    }
    else if (random == 72)
    {
        word[0] = 'A';
        word[1] = 'M';
        word[2] = 'A';
        word[3] = 'R';
        word[4] = 'A';
    }
    else if (random == 73)
    {
        word[0] = 'A';
        word[1] = 'T';
        word[2] = 'T';
        word[3] = 'I';
        word[4] = 'C';
    }
    else if (random == 74)
    {
        word[0] = 'A';
        word[1] = 'N';
        word[2] = 'G';
        word[3] = 'S';
        word[4] = 'T';
    }
    else if (random == 75)
    {
        word[0] = 'A';
        word[1] = 'N';
        word[2] = 'G';
        word[3] = 'R';
        word[4] = 'Y';
    }
    else if (random == 76)
    {
        word[0] = 'W';
        word[1] = 'I';
        word[2] = 'T';
        word[3] = 'C';
        word[4] = 'H';
    }
    else if (random == 77)
    {
        word[0] = 'P';
        word[1] = 'R';
        word[2] = 'A';
        word[3] = 'N';
        word[4] = 'K';
    }
    else if (random == 78)
    {
        word[0] = 'C';
        word[1] = 'A';
        word[2] = 'N';
        word[3] = 'D';
        word[4] = 'Y';
    }
    else if (random == 79)
    {
        word[0] = 'D';
        word[1] = 'E';
        word[2] = 'A';
        word[3] = 'T';
        word[4] = 'H';
    }
    else if (random == 80)
    {
        word[0] = 'B';
        word[1] = 'L';
        word[2] = 'O';
        word[3] = 'O';
        word[4] = 'D';
    }
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

int _tmain()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	_setmode(_fileno(stdout), _O_TEXT);

	cout << "\n                                    Натисніть будь-яку клавішу, аби вийти з гри.\n";

	_getch();

	return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    header_2();

    pumpkin();

    PlaySound(TEXT("helloween.wav"), NULL, SND_FILENAME | SND_ASYNC);

    _getch(); system("cls");

	header();

    cout << "\n\n                                                     "; cout << YELLOW_2; cout << "[ Вітання ]" << endl << endl; cout << RESET;
    cout << "                                           Ласкаво просимо до гри «WORDLE».\n"
        "                                  Перед початком, рекомендуємо ознайомитися з правилами.\n" << endl << endl;
    cout << "                                                      "; cout << YELLOW_2; cout << "[ Увага ]" << endl << endl; cout << RESET;

    cout << "               Якщо у процесі гри Ви помітите помилки або баги, рекомендуємо написати на пошту розробника:\n"
        "                                                sitis.belli@gmail.com\n"

        "\n                                     [ Для продовження натисніть будь-яку клавішу ]";

    header_2();

  	_getch(); system("cls");

	rules();

	cout << "\n                   На полі знаходиться 5 вільних клітинок, у кожну з яких можна внести певну букву.\n"
		"                            Головне завдання - відгадати слово, використавши 6 і менше спроб. \n" << endl;

	cout << "                   ";  cout << GREY; cout << " ? ";  cout << RESET; cout << " "; cout << GREY; cout << " ? ";  cout << RESET; cout << " ";  cout << GREY; cout << " ? "; cout << RESET; cout << " ";  cout << GREY; cout << " ? "; cout << RESET; cout << " ";  cout << GREY; cout << " ? "; cout << RESET; cout << "         1] Загадане слово складається із 5 букв і пов'язане з HELLOWEEN'ом.\n\n"; 

	cout <<	"                                               2] Якщо у веденому вами слові є буква загаданого слова," << endl;
	cout << "                   ";  cout << GREEN; cout << " W ";  cout << RESET; cout << " "; cout << GREY; cout << " R ";  cout << RESET; cout << " ";  cout << YELLOW; cout << " O "; cout << RESET; cout << " ";  cout << GREY; cout << " N "; cout << RESET; cout << " ";  cout << GREY; cout << " G "; cout << RESET; cout << "            проте вона знаходиться не на тому місці,\n";
	cout << "                                                  введена буква загориться жовтим.\n\n"

		"                                               3] Якщо у веденому вами слові є буква загаданого слова," << endl;
	cout << "                   ";  cout << GREEN; cout << " W ";  cout << RESET; cout << " "; cout << GREEN; cout << " O ";  cout << RESET; cout << " ";  cout << GREY; cout << " R "; cout << RESET; cout << " ";  cout << GREEN; cout << " L "; cout << RESET; cout << " ";  cout << YELLOW; cout << " D "; cout << RESET; cout << "            і при цьому вона знаходиться на потрібному місці,\n";
	cout << "                                                  введена буква загориться зеленим.\n" << endl;

	cout << "                   ";  cout << GREEN; cout << " W ";  cout << RESET; cout << " "; cout << GREEN; cout << " O ";  cout << RESET; cout << " ";  cout << GREEN; cout << " D "; cout << RESET; cout << " ";  cout << GREEN; cout << " L "; cout << RESET; cout << " ";  cout << GREEN; cout << " E "; cout << RESET; cout << "         4] Якщо Ви ввели правильну відповідь, слово загориться зеленим.\n\n" << endl;

    cout << "        "; cout << YELLOW_2; cout << "[!]"; cout << RESET; cout << " У випадку, якщо Ви введете слово, що складається з 6 і більше символів (у тому числі некоректних), \n"
        "                                      додаткових спроб на проходження не буде.\n" << endl;

    cout << "                   ";  cout << YELLOW_2;  cout << "[ Введіть своє ім'я ]"; cout << RESET; cout << ": "; cin >> name;

    cout <<"\n                                  [ Аби розпочати гру натисніть будь-яку клавішу ]";

	_getch(); system("cls");

    answers();

    start();
    cout << endl;

    cout << "                                              "; matrix(6);

    keyboard();

    cout << endl << endl;
    cout << "                           "; cout << YELLOW_2;  cout << "[ Введіть слово ]"; cout << RESET; cout << ": "; cin >> attempt_1;

    system("cls");

    start();
    cout << endl;

    cout << "                                              "; attempt_1c();

    if (win == 'n')
    {
        cout << "                                              "; matrix(5);
        cout << endl;
        A_B_C();
        cout << endl << endl;
        cout << "                           "; cout << YELLOW_2;  cout << "[ Введіть слово ]"; cout << RESET; cout << ": "; cin >> attempt_2;

        system("cls");

        start();
        cout << endl;

        cout << "                                              "; attempt_1c();
        cout << "                                              "; attempt_2c();
    }

    if (win == 'n')
    {
        cout << "                                              "; matrix(4);
        cout << endl;
        A_B_C();
        cout << endl << endl;
        cout << "                           "; cout << YELLOW_2;  cout << "[ Введіть слово ]"; cout << RESET; cout << ": "; cin >> attempt_3;

        system("cls");

        start();
        cout << endl;

        cout << "                                              "; attempt_1c();
        cout << "                                              "; attempt_2c();
        cout << "                                              "; attempt_3c();
    } 

    if (win == 'n')
    {
        cout << "                                              "; matrix(3);
        cout << endl;
        A_B_C();
        cout << endl << endl;
        cout << "                           "; cout << YELLOW_2;  cout << "[ Введіть слово ]"; cout << RESET; cout << ": "; cin >> attempt_4;

        system("cls");

        start();
        cout << endl;

        cout << "                                              "; attempt_1c();
        cout << "                                              "; attempt_2c();
        cout << "                                              "; attempt_3c();
        cout << "                                              "; attempt_4c();
    }

    if (win == 'n')
    {
        cout << "                                              "; matrix(2);
        cout << endl;
        A_B_C();
        cout << endl << endl;
        cout << "                           "; cout << YELLOW_2;  cout << "[ Введіть слово ]"; cout << RESET; cout << ": "; cin >> attempt_5;

        system("cls");

        start();
        cout << endl;

        cout << "                                              "; attempt_1c();
        cout << "                                              "; attempt_2c();
        cout << "                                              "; attempt_3c();
        cout << "                                              "; attempt_4c();
        cout << "                                              "; attempt_5c();
    }

    if (win == 'n')
    {
        cout << "                                              "; matrix(1);
        cout << endl;
        A_B_C();
        cout << endl << endl;
        cout << "                           "; cout << YELLOW_2;  cout << "[ Введіть слово ]"; cout << RESET; cout << ": "; cin >> attempt_6;

        system("cls");

        start();
        cout << endl << endl << endl;

        cout << "                                              "; attempt_1c();
        cout << "                                              "; attempt_2c();
        cout << "                                              "; attempt_3c();
        cout << "                                              "; attempt_4c();
        cout << "                                              "; attempt_5c();
        cout << "                                              "; attempt_6c();
    }

    game_over();

    _tmain();

    return 0;
}