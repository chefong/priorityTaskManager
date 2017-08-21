#ifndef USER_H
#define USER_H

#include "Task.h"

#include <string>
#include <vector>

using namespace std;

class User {
    public:
        User();
        void addTask();
        void deleteTask();
        void display();
    private:
        vector<Task*> userTasks;
};

#endif