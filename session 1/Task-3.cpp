//Create a Task class in your favorite OOP language (Java, Python, or C++) with properties: title and isDone. Add a method markDone() that sets isDone to true, and a method display() that prints the task with its status.

#include <iostream>
#include <string>

using namespace std;

class Task{
    string title;
    bool isDone;

    public:
        Task(string t){
            title = t;
            isDone = false;
        }

        void markDown(){
            isDone = true;
        }

        void display(){
            if(isDone){
                cout<<title<<" - Done"<<endl;
            }else{
                cout<<title<<" - Pending"<<endl;
            }
        }
};

int main(){
    Task t1("Study C++");

    t1.display();
    t1.markDown();
    t1.display();

    return 0;
}