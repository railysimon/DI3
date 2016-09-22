#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

typedef string datatype;

struct link
{
    datatype data;
    link *next;
};

class Queue
{
private:
        link *front, *rear;
public:
        Queue() : front(nullptr), rear(nullptr) {}
        ~Queue();
        void Enqueue(datatype &value);
        void Dequeue();
        void Show();
};

void Queue::Enqueue(datatype &value)
{
    link *temp = new link;
    temp->data = value;
    temp->next = nullptr;
    if (!front) front = temp;
    else rear->next = temp;
    rear = temp;
}

void Queue::Dequeue()
{
    if (front)
    {
        link *temp = front;
        front = temp->next;
        delete temp;
    }
    else
    {
        cout << "Черга порожня!" << endl;
        exit(0);
    }
}

void Queue::Show()
{
    cout << "Вміст черги: " << endl;
    link *current = front;
    if (!current) cout << "Черга порожня!" << endl;
    while(current)
    {
        cout << "|| " << current->data << " ||" << endl;
        current = current->next;
    }
}

Queue::~Queue()
{
    while(front)
    {
        link *temp = front->next;
        delete front;
        front = temp;
    }
}

#endif // LIST_H
