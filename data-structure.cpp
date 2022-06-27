#include <iostream>
#include <string>
using namespace std;
#include "steck.h"
#include "Queue.h"
#include "LinkedList.h"
struct Man {
    string name;
    friend ostream& operator <<(ostream& out, Man& man) {
        out << man.name;
        return out;
    }
};

int main()
{
    Man man1{ "Mark" };
    Man man2{ "Pol" };
    Man man3{ "Georg" };
    Man man4{ "Jora" };

    Stack<Man> stack1(5);
    stack1.push(man1);
    stack1.push(man2);
    stack1.push(man3);
    stack1.push(man4);
    stack1.showStack(stack1);

    Queue<Man> queue1(5);
    queue1.push(man1);
    queue1.push(man2);
    queue1.push(man3);
    queue1.push(man4);
    queue1.showStack(queue1);

    LinkedList<Man> list1(man1);
    list1.addToHead(man2);
    list1.addToHead(man3);
    list1.addToHead(man4);
    list1.print();
}

