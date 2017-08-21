#include "Task.h"
#include <vector>
#include <string>

using namespace std;

Task::Task(const string &title, const string &description, int num) 
    : title(title), description(description), num(num) {}

string Task::getTitle() const {
    return title;
}

string Task::getDesc() const {
    return description;
}

int Task::getNum() const {
    return num;
}