#ifndef TO_DO_LIST_HPP
#define TO_DO_LIST_HPP

#include <string>
#include <vector>

class ToDoListItem {
private:
    std::string title;
    std::string description;
public:
    
};

class ToDoList {
private:
    std::vector<ToDoListItem> list;
public:
    ToDoList() {}

    void addItem();

    void deleteItem();

    void clearList();

    void printList();
};

#endif //TO_DO_LIST_HPP