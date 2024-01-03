#include <iostream>
#include <vector>
using namespace std;
vector<string> tasks;

void addTask() {
    std::string task;
    cout << "Enter the task->";
    cin >> task;
    tasks.push_back(task);
}

void showTasks() {
    for (const auto &task : tasks) {
        cout << task << endl;
    }
}

void removeTask() {
    if (!tasks.empty()) {
        tasks.pop_back();
        cout << "Task removed successfully." << endl;
    } else {
        cout << "No tasks to remove." << endl;
    }
}

int main() {
    while (true) {
        cout << "<==== Main Menu ====>" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Show all tasks" << endl;
        cout << "3. Remove Task" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice->";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                showTasks();
                break;
            case 3:
                removeTask();
                break;
            case 4:
                cout << "Program Ended" << endl;
                return 0;
            default:
                cout << "Invalid input" << endl;
        }
    }

    return 0;
}
