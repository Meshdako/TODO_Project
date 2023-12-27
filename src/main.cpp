#include <iostream>

// Task
#include "../include/Task.h"

// TodoList
#include "../include/TodoList.h"

#include "../include/Date.h"

int main() {
    TodoList myList(1, "Mi lista", "Esta es mi lista de tareas", "pendiente", "2022-12-31", "2022-01-01", "2022-01-01");
    myList.addTask("Mi tarea", "Esta es mi tarea", getCurrentDate());

    myList.print();
    return 0;
}
