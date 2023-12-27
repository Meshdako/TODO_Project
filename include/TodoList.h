//
// Created by meshdako on 20-11-23.
//

#ifndef TODO_PROJECT_TODOLIST_H
#define TODO_PROJECT_TODOLIST_H

#include <iostream>
#include <vector>

#include "Task.h"

class TodoList {
    private:
        int id;
        std::string title;
        std::string description;
        std::string status;
        std::string dueDate;
        std::string createdAt;
        std::string updatedAt;
        std::vector<Task> tasks;

    public:
        TodoList(int id, std::string title, std::string description, std::string status, std::string dueDate, std::string createdAt, std::string updatedAt);
        
        // Getters
        int getId() { return id; }
        std::string getTitle() { return title; }
        std::string getDescription() { return description; }
        std::string getStatus() { return status; }
        std::string getDueDate() { return dueDate; }
        std::string getCreatedAt() { return createdAt; }
        std::string getUpdatedAt() { return updatedAt; }
        std::vector<Task>& getTasks() { return tasks; }

        // Setters
        void setId(int id) { this->id = id; }
        void setTitle(std::string title) { this->title = title; }
        void setDescription(std::string description) { this->description = description;}
        void setStatus(std::string status) { this->status = status; }
        void setDueDate(std::string dueDate) { this->dueDate = dueDate; }
        void setCreatedAt(std::string createdAt) { this->createdAt = createdAt; }
        void setUpdatedAt(std::string updatedAt) { this->updatedAt = updatedAt; }

        // Methods
        void print();
        void addTask(const std::string&, const std::string&, const std::string&);
};

#endif //TODO_PROJECT_TODOLIST_H
