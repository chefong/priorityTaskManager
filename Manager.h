#ifndef MANAGER_H
#define MANAGER_H

#include "Task.h"

#include <vector>
#include <string>
#include <queue>

using namespace std;

struct CompareNum {
    bool operator() (Task t1, Task t2) {
        return t1.getNum() > t2.getNum();
    }
};

class Manager {
    public:
        Manager();
        void menu();
        void display();
        void addTask();
        void deleteTask();
    private:
        priority_queue<Task, vector<Task>, CompareNum> userTasks;
};

#endif