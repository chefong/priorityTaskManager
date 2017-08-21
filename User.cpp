#include "User.h"
#include "Task.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

User::User() {
}

void User::display() {

}

void User::addTask() {
    string userTitle;
    string userDesc;

    cout << "Enter the title of your task" << endl;
    cin.ignore();
    getline(cin, userTitle);
    cout << "Enter the description (if necessary)" << endl;
    cin.ignore();
    getline(cin, userDesc);

    Task *newTask = new Task(userTitle, userDesc);
    userTasks.push_back(newTask);
}

void User::deleteTask() {

}