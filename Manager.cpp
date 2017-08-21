#include "Manager.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Manager::Manager() {
}

void Manager::menu() {
    bool response = false;
    int input = 0;

    while (!response) {
        cout << "Priority Task Manager" << endl;
        cout << endl;
        cout << "1. List most important task" << endl;
        cout << "2. Add a task" << endl;
        cout << "3. Delete task" << endl;
        cout << "4. Exit" << endl;

        cin >> input;

        if (input == 1) {
            display();
            cout << endl;
        }
        else if (input == 2) {
            addTask();
            cout << endl;
        }
        else if (input == 3) {
            deleteTask();
            cout << endl;
        }
        else if (input == 4) {
            if (!userTasks.empty()) {
                cout << "Cannot abort program (tasks not finished)!" << endl << endl;
            }
            else {
                response = true;
                cout << "See you next time!" << endl;
            }
        }
    }
}

void Manager::display() {
    if (userTasks.empty()) {
        cout << "No tasks to display!" << endl;
    }
    else {
        cout << "Title: " << userTasks.top().getTitle() << endl;
        cout << "Description: " << userTasks.top().getDesc() << endl;
    }
}

void Manager::addTask() {
    string tempTitle;
    string tempDesc;
    int priority;

    cin.ignore();
    cout << "Enter title: ";
    getline(cin, tempTitle);
    cout << endl;
    cout << "Enter description: ";
    getline(cin, tempDesc);
    cout << endl;
    cout << "Enter priority (1 = most important): ";
    cin >> priority;
    cout << endl;

    Task newTask = Task(tempTitle, tempDesc, priority);
    userTasks.push(newTask);
}

void Manager::deleteTask() {
    if (userTasks.empty()) {
        cout << "No more tasks in queue (all tasks completed)" << endl;
    }
    else {
        cout << "Deleted \"" << userTasks.top().getTitle() << "\"" << endl;
        userTasks.pop();
    }
}
