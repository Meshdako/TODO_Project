//
// Created by meshdako on 20-11-23.
//

#include "../include/TodoList.h"

TodoList::TodoList(int id, std::string title, std::string description, std::string status, std::string dueDate, std::string createdAt, std::string updatedAt) {
    this->id = id;
    this->title = title;
    this->description = description;
    this->status = status;
    this->dueDate = dueDate;
    this->createdAt = createdAt;
    this->updatedAt = updatedAt;
}

void TodoList::print() {
    std::cout << "ID: " << id << "\n"
            << "Title: " << title << "\n"
            << "Description: " << description << "\n"
            << "Status: " << status << "\n"
            << "Due Date: " << dueDate << "\n"
            << "Created At: " << createdAt << "\n"
            << "Updated At: " << updatedAt << "\n";
    std::cout << "Tasks: \n";
    for (const auto& task : tasks) {
        task.print();
    }
}

void TodoList::addTask(const std::string& title, const std::string& desc, const std::string& createdAt) {
    tasks.push_back(Task(title, desc, createdAt));
}