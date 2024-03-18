#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <wchar.h>
#include <io.h>
#include <iomanip>
#include <time.h>
#include <tchar.h>
#include <string.h>
#include <stdio.h>
#include <locale>
#include <cctype>
#include <conio.h>
#include <ctime>
#include <fcntl.h>
#include "MMSystem.h"

#pragma warning(disable : 4996)

using namespace std;

class DayOfTheWeek {
public:
    DayOfTheWeek(int d) {
        day = d;
    }

    string getDayName() {
        switch (day) {
        case 0:
            return " | Понеділок | ";
        case 1:
            return " | Вівторок | ";
        case 2:
            return " | Середа |";
        case 3:
            return " | Четвер | ";
        case 4:
            return " | П'ятниця | ";
        case 5:
            return " | Субота | ";
        case 6:
            return " | Неділя | ";
        default:
            return "";
        }
    }

private:
    int day;
};


class TimeOfDay {
public:
    TimeOfDay(int t) {
        time = t;
    }

    string getTimeName() {
        switch (time) {
        case 0:
            return " { Ранок }  ";
        case 1:
            return "  { День }  ";
        case 2:
            return " { Вечір }  ";
        case 3:
            return "  { Ніч }  ";
        default:
            return "";
        }
    }

private:
    int time;
};

class WeatherForecast {
private:
    string type_of_weather;
    double humidity;
    double temperature;
    double wind_speed;
    double precipitation;
    string type_of_precipitation;
public:
    WeatherForecast(string tw, double h, double t, double ws, double p, string tp) {
        type_of_weather = tw;
        humidity = h;
        temperature = t;
        wind_speed = ws;
        precipitation = p;
        type_of_precipitation = tp;
    }
    void display() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        cout << "                                                   [ Тип погоди ] | " << type_of_weather << " |" << endl << endl;
        cout << "           [ Вологість        | " << humidity << "%" << endl;
        cout << "           [ Температура      | " << temperature << "°C" << endl;
        cout << "           [ Швидкість вітру  | " << wind_speed << " км/год" << endl;
        cout << "           [ Опади            | " << precipitation << " мм" << endl;
        cout << "           [ Тип опадів       | " << type_of_precipitation << endl;
    }
}; // погода

void weather_info()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

        int g = rand() + rand();

        double humidity = (g + rand()) % 101;
        double temperature = ((g + rand()) % 91) - 50; // -50 - 40
        double wind_speed = (g + rand()) % 181;
        double precipitation = (g + rand()) % 101;

        string type_of_precipitation;
        int random_number = (g + rand()) % 12;
        if (random_number == 0 || temperature < 0) {
            type_of_precipitation = "сніг";
        }
        else if (random_number == 1 || temperature >= 0 || humidity > 10) {
            type_of_precipitation = "дощ";
        }
        else if (random_number == 2 || temperature > 0) {
            type_of_precipitation = "град";
        }
        else if (random_number == 3 || temperature > 0) {
            type_of_precipitation = "мряка";
        }
        else if (random_number == 4 || temperature <= 0) {
            type_of_precipitation = "крупа";
        }
        else if (random_number == 5 || temperature == 0) {
            type_of_precipitation = "іній";
        }
        else if (random_number == 6 || temperature > 0) {
            type_of_precipitation = "мокрий сніг";
        }
        else if (random_number == 7 || temperature < 0) {
            type_of_precipitation = "паморозь";
        }
        else if (random_number == 8 || temperature > 0) {
            type_of_precipitation = "сліпий дощ";
        }
        else if (random_number == 9 || temperature > 0) {
            type_of_precipitation = "роса";
        }
        else if (random_number == 10 || temperature < 0) {
            type_of_precipitation = "рідкий наліт";
        }
        else if (random_number == 10 || temperature < 0) {
            type_of_precipitation = "ливень";
        }
        else {
            type_of_precipitation = "відсутні";
        }

        string type_of_weather;
        int random_weather = (g + rand()) % 25;
        if (random_weather == 0 && temperature > 40 && humidity < 0) {
            type_of_weather = "засуха";
        }
        else if (random_weather == 1 && temperature >= 0 && humidity > 10) {
            type_of_weather = "злива з грозою";
        }
        else if (random_weather == 2 && temperature > 0 && humidity > 10) {
            type_of_weather = "гроза";
        }
        else if (random_weather == 3 && temperature > 0 && humidity > 5) {
            type_of_weather = "можлива блискавиця";
        }
        else if (random_weather == 4 && temperature < 0 && precipitation > 30) {
            type_of_weather = "снігопад";
        }
        else if (random_weather == 5 && temperature > 0 && precipitation > 60 && humidity > 25) {
            type_of_weather = "злива";
        }
        else if (random_weather == 6 && temperature > 0 && precipitation > 5) {
            type_of_weather = "часом дощ";
        }
        else if (random_weather == 7 && precipitation == 0) {
            type_of_weather = "ясно";
        }
        else if (random_weather == 8 && temperature > 0 && precipitation > 5) {
            type_of_weather = "невеликі дощі";
        }
        else if (random_weather == 9) {
            type_of_weather = "похмуро";
        }
        else if (random_weather == 10 && precipitation > 5 && humidity > 10) {
            type_of_weather = "туман";
        }
        else if (random_weather == 11 && temperature > 0 && humidity > 15) {
            type_of_weather = "серпанок";
        }
        else if (random_weather == 12 && temperature > 0) {
            type_of_weather = "легкий туман";
        }
        else if (random_weather == 11) {
            type_of_weather = "хмарно";
        }
        else if (random_weather == 12) {
            type_of_weather = "маломарно";
        }
        else if (random_weather == 13 && precipitation < 90) {
            type_of_weather = "хмарно з проясненнями";
        }
        else if (random_weather == 14 && temperature > 20 && precipitation == 0) {
            type_of_weather = "сухо";
        }
        else if (random_weather == 15 && temperature < 0) {
            type_of_weather = "морозно";
        }
        else if (random_weather == 16 && temperature > 20 && precipitation == 0) {
            type_of_weather = "жарко";
        }
        else if (random_weather == 17 && temperature > 5 && humidity < 20) {
            type_of_weather = "тепло";
        }
        else if (random_weather == 18 && temperature < 5 && temperature > 0) {
            type_of_weather = "прохолодно";
        }
        else if (random_weather == 19 && temperature > 0 && humidity > 40) {
            type_of_weather = "волого";
        }
        else if (random_weather == 19) {
            type_of_weather = "мінлива хмарність";
        }
        else {
            type_of_weather = "встановити неможливо";
        }
        WeatherForecast forecast(type_of_weather, humidity, temperature, wind_speed, precipitation, type_of_precipitation);

        forecast.display();
}


void weather()
{
    cout << endl;
    _setmode(_fileno(stdout), _O_WTEXT);

    wcout << "                          " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << "\n"
        << "                          " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
        << "                          " << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "\n"
        << "                          " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
        << "                          " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << "\n"
        << "                          " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << endl;

    _setmode(_fileno(stdout), _O_TEXT);
}

void forecast()
{
    cout << endl;
    _setmode(_fileno(stdout), _O_WTEXT);

    wcout << "                         " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
        << "                         " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << "\n"
        << "                         " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                         " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                         " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                         " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << endl;

    _setmode(_fileno(stdout), _O_TEXT);
}

void info()
{
    cout << endl;
    _setmode(_fileno(stdout), _O_WTEXT);

    wcout << "                                          " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << "\n"
        << "                                          " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << "\n"
        << "                                          " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2557 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << "\n"
        << "                                          " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << "\n"
        << "                                          " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2551 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2554 << (wchar_t)0x255D << "\n"
        << "                                          " << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x255A << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x2550 << (wchar_t)0x255D << (wchar_t)0x2591 << endl;

    _setmode(_fileno(stdout), _O_TEXT);
}

void art_1()
{
    cout << endl << endl;
    _setmode(_fileno(stdout), _O_WTEXT);

    wcout << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << endl;

    _setmode(_fileno(stdout), _O_TEXT);
}

void art_2()
{
    cout << endl;
    _setmode(_fileno(stdout), _O_WTEXT);

    wcout << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << "\n"
        << "                                     " << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << "\n"
        << "                                     " << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2588 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << endl;

    _setmode(_fileno(stdout), _O_TEXT);
}

void art_3()
{
    cout << endl << endl;
    _setmode(_fileno(stdout), _O_WTEXT);

    wcout << "                                               " << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2584 << (wchar_t)0x2580 << (wchar_t)0x2584 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2584 << (wchar_t)0x2580 << (wchar_t)0x2584 << "\n"
        << "                                               " << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2584 << "\n"
        << "                                               " << (wchar_t)0x2500 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2500 << (wchar_t)0x2500 << (wchar_t)0x2584 << (wchar_t)0x2584 << "\n"
        << "                                               " << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << (wchar_t)0x2500 << (wchar_t)0x2588 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x252C << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2580 << (wchar_t)0x2591 << (wchar_t)0x2591 << (wchar_t)0x2588 << (wchar_t)0x2500 << (wchar_t)0x2588 << (wchar_t)0x2584 << (wchar_t)0x2584 << (wchar_t)0x2588 << endl;

    _setmode(_fileno(stdout), _O_TEXT);
}

void text_info()
{
    _setmode(_fileno(stdout), _O_WTEXT);

    wcout << LR"( 
                                                  ┌─────────────┐                                                       
                                                  │ Інформація  │
                                                  └─────────────┘ 

                                                [Погодні показники] 

               ┌──────────────────────────────────────────────────────────────────────────────────┐ 
               │ [!]  Тип погоди    | переважний стан погоди на даний момен.                      │
               │                                                                                  │
               │ 1]    Вологість    | вмість водяної пари у повітрі              |    [0%-100%]   │
               │ 2]   Температура   | стан термоденамічної системи               |  [-50°C-+50°C] │
               │ 3] Швидкість вітру | швидкість переміщення вітрового потоку     | [0-180 км/год] │
               │ 4]      Опади      | конденсат води у твердому чи рідкому стані |     [n мм]     │
               │ 5]   Тип опадів    | тип конденсату, що виділяється з хмар.     |     [різні]    │
               └──────────────────────────────────────────────────────────────────────────────────┘   

             [!] Важливо: інформація генерується рандомно, тому значення немають нічого спільного
                              з реальною погодою у світі [на даний момент].)" << endl;



    _setmode(_fileno(stdout), _O_TEXT);
}

void text_info_2()
{
    _setmode(_fileno(stdout), _O_WTEXT);

    wcout << LR"( 
                                                   ┌─────────────┐
                                                   │ Пн. 27 лют. │
                                                   └─────────────┘ )" << endl;

    _setmode(_fileno(stdout), _O_TEXT);
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    PlaySound(TEXT("дощ.wav"), NULL, SND_ASYNC);

    weather();

    forecast();

    art_1();

    _getch();

    system("cls");

    weather();

    text_info();

    _getch();

    string city_name;

    cout << "\n                                      [!] Уведіть назву міста: ";
    getline(cin, city_name);

    system("cls");

    weather();

    text_info_2();

    srand(time(NULL));

    time_t now = time(nullptr);
    char* time_str = ctime(&now);

    cout << "                                              " << time_str << endl;
    cout << "                                                        " << city_name << endl;


    for (int i = 0; i < 4; i++)
    {
        TimeOfDay time(i);
        cout << time.getTimeName() << "  ";
        cout << endl << endl;
        for (int j = 0; j < 7; j++)
        {
            DayOfTheWeek day(j);
            cout << "          " << day.getDayName() << endl;
             weather_info();
            cout << "            _______________________________________________________________________________________________" << endl;
            cout << endl;
        }

        cout << endl;

    }

    art_3();

    _getch();

    return 0;
}
