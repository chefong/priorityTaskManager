#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>

using namespace std;

class Task {
    public:
        Task();
        Task(const string &, const string &, int);
        string getTitle() const;
        string getDesc() const;
        int getNum() const;
    private:
        string title;
        string description;
        int num;
};

#endif