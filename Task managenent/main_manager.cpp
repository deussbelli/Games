#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <stdlib.h>
#include "conio.h"
#include "windows.h"

using namespace std;

class Task {
private:
    string title;
    string description;
    bool important;
    bool urgent;
    string due_date;

public:
    Task(string t, string d, bool i, bool u, string dd) : title(t), description(d), important(i), urgent(u), due_date(dd) {}

    string getTitle() const { return title; }
    string getDescription() const { return description; }
    bool isImportant() const { return important; }
    bool isUrgent() const { return urgent; }
    string getDueDate() const { return due_date; }

    void setTitle(string t) { title = t; }
    void setDescription(string d) { description = d; }
    void setImportant(bool i) { important = i; }
    void setUrgent(bool u) { urgent = u; }
    void setDueDate(string dd) { due_date = dd; }
};

class TaskList {
private:
    vector<Task> tasks;

public:
    TaskList() {}

    void addTask(Task t) {
        tasks.push_back(t);
        sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
            return a.getDueDate() < b.getDueDate();
            });
    }
    void replaceTasks(string keyword, Task new_task) {
        bool found = false;
        for (auto& t : tasks) {
            if (t.getTitle().find(keyword) != string::npos ||
                t.getDescription().find(keyword) != string::npos) {
                t = new_task;
                found = true;
            }
        }
        if (!found) {
            cout << "                 -----------------------------------------------------------------\n";
            cout << "                 |         �� ������� ������ ������� �������� � �������� ������.      |\n";
            cout << "                 -----------------------------------------------------------------\n";
        }
    }

    void removeTasks(string keyword) {
        bool found = false;
        vector<Task> remaining_tasks;
        for (const auto& t : tasks) {
            if (t.getTitle().find(keyword) == string::npos &&
                t.getDescription().find(keyword) == string::npos) {
                remaining_tasks.push_back(t);
            }
            else {
                found = true;
            }
        }
        if (!found) {
            cout << "                 -----------------------------------------------------------------\n";
            cout << "                 |         �� ������� ������ ������� �������� � �������� ������.      |\n";
            cout << "                 -----------------------------------------------------------------\n";
        }
        else {
            tasks = remaining_tasks;
        }
    }


    vector<Task> getTasks() const {
        vector<Task> all_tasks = tasks;
        sort(all_tasks.begin(), all_tasks.end(), [](const Task& a, const Task& b) {
            return a.getDueDate() < b.getDueDate();
            });
        for (auto& t : all_tasks) {
            string importance = "";
            if (t.isImportant() && t.isUrgent()) {
                importance = "[ �������, �������� ]";
            }
            else if (t.isImportant()) {
                importance = "[ �������� ]";
            }
            else if (t.isUrgent()) {
                importance = "[ ������� ]";
            }
            else {
                importance = "[ ���� ]";
            }
            t.setTitle(t.getTitle() + " " + importance + " (" + t.getDueDate() + ")");
        }
        return all_tasks;
    }

    vector<Task> getImportantTasks() const {
        vector<Task> important_tasks;
        for (const auto& t : tasks) {
            if (t.isImportant()) {
                important_tasks.push_back(t);
            }
        }
        return important_tasks;
    }

    vector<Task> getUrgentTasks() const {
        vector<Task> urgent_tasks;
        for (const auto& t : tasks) {
            if (t.isUrgent()) {
                urgent_tasks.push_back(t);
            }
        }
        return urgent_tasks;
    }

    vector<Task> getOtherTasks() const {
        vector<Task> other_tasks;
        for (const auto& t : tasks) {
            if (!t.isImportant() && !t.isUrgent()) {
                other_tasks.push_back(t);
            }
        }
        return other_tasks;
    }

    vector<Task> findTasks(string keyword) const {
        vector<Task> found_tasks;
        for (const auto& t : tasks) {
            if (t.getTitle().find(keyword) != string::npos ||
                t.getDescription().find(keyword) != string::npos) {
                found_tasks.push_back(t);
            }
        }
        return found_tasks;
    }

    vector<Task> getTasksOnDate(string date) const {
        vector<Task> tasks_on_date;
        for (const auto& t : tasks) {
            if (t.getDueDate() == date) {
                tasks_on_date.push_back(t);
            }
        }
        return tasks_on_date;
    }
};

class Calendar {
private:
    vector<string> dates;

public:
    Calendar() {}

    void addDate(string date) { dates.push_back(date); }
    void removeDate(int i) { dates.erase(dates.begin() + i); }

    vector<string> getDates() const { return dates; }
}; //������/�������� ���� 

void menu() {
    cout << "                 -----------------------------------------------------------------\n"
        << "                 |                         [ ������ �� ]                        |\n"
        << "                 -----------------------------------------------------------------\n"
        << "                 | 1. ������ ��������;                                           |\n"
        << "                 | 2. �������� ��������;                                         |\n"
        << "                 | 3. ������� ��������;                                         |\n"
        << "                 | 4. ������ ��������;                                           |\n"
        << "                 | 5. �������� �������� �� ����� ����;                           |\n"
        << "                 | 6. �������� ������� ��������;                               |\n"
        << "                 | 7. �������� ������ ��������;                                 |\n"
        << "                 | 8. �������� ���� ��������;                                    |\n"
        << "                 | 9. �������� ���������� ��������;                            |\n"
        << "                 | 10. �����.                                                    |\n"
        << "                 -----------------------------------------------------------------\n";

}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    TaskList tasks;
    Calendar calendar;

    string name;
    string date_of_birthday;

    cout << "                 -----------------------------------------------------------------\n"
        << "                 |                        [ ��������� ]                         | \n"
        << "                 -----------------------------------------------------------------\n";
    cout << "                 |  ������ ��'�: "; cin >> name;
    cout << "                 |  ������ ���� ���������� [YYYY.MM.DD]: "; cin >> date_of_birthday;
    cout << "                 -----------------------------------------------------------------\n";

    _getch();
    system("cls");

    while (true) {
        cout << "                 -----------------------------------------------------------------\n"
            << "                 |                 [_Priori - Time - Management_]                |\n"
            << "                 -----------------------------------------------------------------\n"
            << "                 | ��'�: " << name << "                                                   |\n"
            << "                 | ���� ����������: " << date_of_birthday << "                                   |\n"
            << "                 -----------------------------------------------------------------\n";

        menu();

        int choice;
        cout << "                 |  ������ ��: "; cin >> choice;
        cout << "                 -----------------------------------------------------------------\n";


        switch (choice) {
        case 1: { // Add a task
            string title;
            string descriptions, due_date;
            bool important, urgent;
            cout << "                 | ������ ��������: "; cin >> title;
            cout << "                 | ������ ����: "; cin >> descriptions;                                //[!] ����?
            cout << "\n                 | �� �������� �������� [0 - �, 1 - ��� ]: "; cin >> important;
            cout << "                 | �� ������� �������� [0 - �, 1 - ��� ]: "; cin >> urgent;
            cout << "                 | ������ ���� [YYYY.MM.DD]: "; cin >> due_date;

            Task task(title, descriptions, important, urgent, due_date);
            tasks.addTask(task);

            cout << "                 -----------------------------------------------------------------\n";
            cout << "                 |                       �������� ������.                         |\n";
            cout << "                 -----------------------------------------------------------------\n";
            _getch();
            system("cls");
            break;
        }
        case 2: { // Remove a task
            string keyword;
            cout << "                 | ������ ����� ��������, ��� ����� ��������: ";
            cin >> keyword;
            tasks.removeTasks(keyword);
            cout << "                 -----------------------------------------------------------------\n";
            cout << "                 |                       �������� ��������.                       |\n";
            cout << "                 -----------------------------------------------------------------\n";
            _getch();
            system("cls");
            break;
        }
        case 3: { // Replace a task
            string keyword;
            cout << "                 | ������ ����� ��������, ��� ����� �������: ";
            cin >> keyword;

            string title;
            string descriptions, due_date;
            bool important, urgent;
            cout << "                 | ������ ���� ��������: "; cin >> title;
            cout << "                 | ������ ����� ����: "; cin >> descriptions;
            cout << "\n                 | �� �������� �������� [0 - �, 1 - ��� ]: "; cin >> important;
            cout << "                 | �� ������� �������� [0 - �, 1 - ��� ]: "; cin >> urgent;
            cout << "                 | ������ ���� ���� [YYYY.MM.DD]: "; cin >> due_date;

            Task new_task(title, descriptions, important, urgent, due_date);
            tasks.replaceTasks(keyword, new_task);

            cout << "                 -----------------------------------------------------------------\n";
            cout << "                 |                       �������� �������.                       |\n";
            cout << "                 -----------------------------------------------------------------\n";
            _getch();
            system("cls");
            break;
        }
        case 4: { // Find tasks
            cout << "                 | ������ ����� ��������: ";
            string keyword;
            cin >> keyword;
            vector<Task> found_tasks = tasks.findTasks(keyword);
            cout << "                 | �������� " << found_tasks.size() << " �������:\n";
            for (const auto& t : found_tasks) {
                cout << "                 |" << t.getTitle() << " - " << t.getDescription() << "\n";
            }
            _getch();
            system("cls");
            break;
        }
        case 5: { // View tasks on a date
            cout << "                 | ������ ���� [YYYY.MM.DD]: ";
            string date;
            cin >> date;
            vector<Task> tasks_on_date = tasks.getTasksOnDate(date);
            if (tasks_on_date.empty()) {
                cout << "                 -----------------------------------------------------------------\n";
                cout << "                 |                     ������� �� ��������.                       | ";
                cout << "                 -----------------------------------------------------------------\n";
            }
            else {
                cout << "                 | ����" << date << ":                                                    |" << endl;
                for (const auto& task : tasks_on_date) {
                    cout << "                 | ��������: " << task.getTitle() << endl;
                    cout << "                 | ����: " << task.getDescription() << endl;
                    cout << "                 | �� ��������: " << (task.isImportant() ? "���" : "�") << endl;
                    cout << "                 | �� �������: " << (task.isUrgent() ? "���" : "�") << endl;
                    cout << "                 | ʳ������ �����: " << task.getDueDate() << endl;
                    cout << "                 -----------------------------------------------------------------\n";
                }
            }
            _getch();
            system("cls");
            break;
        }
        case 6: { // View important tasks
            vector<Task> important_tasks = tasks.getImportantTasks();
            if (important_tasks.empty()) {
                cout << "                 -----------------------------------------------------------------\n";
                cout << "                 |                ��������� ������� �� ��������.                      | " << endl;
                cout << "                 -----------------------------------------------------------------\n";
            }
            else {
                cout << "                 -----------------------------------------------------------------\n"
                    << "                 |                      [ ������� �������� ]                    |\n"
                    << "                 -----------------------------------------------------------------\n";
                for (const auto& task : important_tasks) {
                    cout << "                 | ��������: " << task.getTitle() << endl;
                    cout << "                 | ����: " << task.getDescription() << endl;
                    cout << "                 | �� �������: " << (task.isUrgent() ? "���" : "�") << endl;
                    cout << "                 | ʳ������ �����: " << task.getDueDate() << endl << endl;
                    cout << "                 -----------------------------------------------------------------\n";
                }
            }
            _getch();
            system("cls");
            break;
        }
        case 7: { // View urgent tasks
            vector<Task> urgent_tasks = tasks.getUrgentTasks();
            if (urgent_tasks.empty()) {
                cout << "                 -----------------------------------------------------------------\n";
                cout << "\n                 |               �������� ������� �� ��������.                       | " << endl;
                cout << "                 -----------------------------------------------------------------\n";
            }
            else {
                cout << "                 -----------------------------------------------------------------\n"
                    << "                 |                       [ ������ �������� ]                     |\n"
                    << "                 -----------------------------------------------------------------\n";
                for (const auto& task : urgent_tasks) {
                    cout << "                 | ��������: " << task.getTitle() << endl;
                    cout << "                 | ����: " << task.getDescription() << endl;
                    cout << "                 | �� �������: " << (task.isImportant() ? "���" : "�") << endl;
                    cout << "                 | ʳ������ �����: " << task.getDueDate() << endl << endl;
                    cout << "                 -----------------------------------------------------------------\n";
                }
            }
            _getch();
            system("cls");
            break;
        }
        case 8: { // View other tasks
            vector<Task> other_tasks = tasks.getOtherTasks();
            if (other_tasks.empty()) {
                cout << "                 -----------------------------------------------------------------\n";
                cout << "                 |                   ����� ������� �� ��������.                    | ";
                cout << "                 -----------------------------------------------------------------\n";
            }
            else {
                cout << "                 -----------------------------------------------------------------\n"
                    << "                 |                        [ ���� �������� ]                       |\n"
                    << "                 -----------------------------------------------------------------\n";
                for (const auto& task : other_tasks) {
                    cout << "                 | ��������: " << task.getTitle() << endl;
                    cout << "                 | ����: " << task.getDescription() << endl;
                    cout << "                 | ʳ������ �����: " << task.getDueDate() << endl << endl;
                    cout << "                 -----------------------------------------------------------------\n";
                }
            }
            _getch();
            system("cls");
            break;
        }
        case 9: { // View sort tasks by date
            vector<Task> sorted_tasks = tasks.getTasks();
            cout << "                 -----------------------------------------------------------------\n"
                << "                 |                     [ ��������� ������� ]                      |\n"
                << "                 -----------------------------------------------------------------\n";
            for (const auto& t : sorted_tasks) {
                cout << "                 | - " << t.getTitle() << endl;
            }
            _getch();
            system("cls");
            break;
        }
        case 10: { // Exit
            return 0;
        }
        default: {
            cout << "                 -----------------------------------------------------------------\n";
            cout << "                 |                    ������ ������ ��.                        |\n";
            cout << "                 -----------------------------------------------------------------\n";
            _getch();
            system("cls");
            break;
        }
        }
    }

    system("pause");
    return 0;
}