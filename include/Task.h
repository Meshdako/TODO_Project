//
// Created by meshdako on 20-11-23.
//

#ifndef TODO_PROJECT_TASK_H
#define TODO_PROJECT_TASK_H

#include <iostream>

struct Task {
    std::string _title;
    std::string _description;
    std::string _createdAt;
    bool _completed;

    Task(const std::string& title, const std::string& desc, const std::string& createdAt);
    void print() const;
};


#endif //TODO_PROJECT_TASK_H
