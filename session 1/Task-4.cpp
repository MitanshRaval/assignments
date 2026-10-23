//Build a simple TaskList class/object that stores multiple Task objects and provides addTask(title), markTaskDone(index), and showTasks() methods. Demonstrate adding 3 tasks, marking one as done, and displaying all tasks with their statuses.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Task{
    public:
        string title;
        bool done;

        Task(string t){
            title = t;
            done = false;
        }
};

class TaskList{
    private:
        vector<Task> tasks;

    public:
        void addTask(string title){
            tasks.push_back(Task(title));
        }

        void markTaskDone(int index){
            if(index < 0 || index >= (int)tasks.size()){
                cout<<"Invalid task index: "<<index<<endl;
                return;
            }
            tasks[index].done = true;
        }

        void showTasks(){
            if(tasks.empty()){
                cout<<"No task yet"<<endl;
                return; 
            }
            for(int i = 0; i < (int)tasks.size(); i++){
                string status = tasks[i].done ? "Done" : "Pending";
                cout<<i<<". "<<tasks[i].title<<" - "<<status<<endl;
            }
        }
};

int main(){
    TaskList list;

    list.addTask("Buy Groceries");
    list.addTask("Play games");
    list.addTask("Drive a Car");

    list.markTaskDone(2);

    list.showTasks();   
    return 0;
}