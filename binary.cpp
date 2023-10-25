
#include "binary.h"
#include <iostream>
using namespace std;

binaryStack::binaryStack(int capacity) {
    this->capacity = capacity;
    this->data = new int[capacity];
    this->top = -1;
}

binaryStack::~binaryStack() {
    delete[] this->data;
}

void binaryStack::push(int element) {
    if (top < capacity - 1) {
        data[++top] = element;
    }
}

int binaryStack::pop() {
    if (top >= 0) {
        return data[top--];
    }
    return -1; 
}

bool binaryStack::isEmpty() {
    return top == -1;
}

binaryQueue::binaryQueue(int capacity) {
    this->capacity = capacity;
    this->data = new int[capacity];
    this->front = this->rear = -1;
}

binaryQueue::~binaryQueue() {
    delete[] this->data;
}

void binaryQueue::enqueue(int element) {
    if ((rear + 1) % capacity != front) {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        data[rear] = element;
    }
}

int binaryQueue::dequeue() {
    if (front != -1) {
        int element = data[front];
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % capacity;
        }
        return element;
    }
    return -1; 
}

bool binaryQueue::isEmpty() {
    return front == -1;
}
