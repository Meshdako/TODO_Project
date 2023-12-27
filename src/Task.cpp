//
// Created by meshdako on 20-11-23.
//

#include "../include/Task.h"

Task::Task(const std::string& title, const std::string& desc, const std::string& createdAt) 
    : _title(title), _description(desc), _createdAt(createdAt), _completed(false) {}

void Task::print() const {
    std::cout << "Title: " << _title << "\n"
                << "Description: " << _description << "\n"
                << "Created At: " << _createdAt << "\n"
                << "Completed: " << (_completed ? "Yes" : "No") << "\n";
}