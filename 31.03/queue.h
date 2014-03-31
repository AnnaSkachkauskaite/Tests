#pragma once
#include "myexceptionemptyqueue.h"

template <typename T>
///Class for priority queue
class Queue
{
public:
    Queue() : top(new QueueElement())
    {
        top->priority = -1;
        top->next = nullptr;
    }
    ~Queue()
    {
        QueueElement *tmp = this->top;
        QueueElement *delValue = tmp;
        while (tmp)
        {
            delValue = tmp;
            tmp = tmp->next;
            delete(delValue);
         }
    }


    ///Insert value into given position
    void enqueue(T value, int prior)
    {
        QueueElement *tmp = this->top;
        while ((tmp->next != nullptr) && (tmp->next->priority > prior))
            tmp = tmp->next;
        QueueElement *addValue = new QueueElement;
        addValue->value = value;
        addValue->next = tmp->next;
        addValue->priority = prior;
        tmp->next = addValue;

    }

    ///Returns value with highest priority and deletes it
    T dequeue()
    {
        if (this->isEmpty())
            throw MyExceptionEmptyQueue("Cannot delete from empty stack!!");
        QueueElement *tmp = this->top;
        top = top->next;
        delete tmp;
    }

    bool isEmpty()
    {
        return this->top->next == nullptr;
    }
private:
    struct QueueElement
    {
        T value;
        int priority;
        QueueElement *next;
    };
    QueueElement *top;
};

