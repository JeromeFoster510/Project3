
#ifndef binary_h
#define binary_h

class binaryStack {
private:
    int* data;
    int top;
    int capacity;

public:
    binaryStack(int capacity);
    ~binaryStack();
    void push(int element);
    int pop();
    bool isEmpty();
};

class binaryQueue {
private:
    int* data;
    int front;
    int rear;
    int capacity;

public:
    binaryQueue(int capacity);
    ~binaryQueue();
    void enqueue(int element);
    int dequeue();
    bool isEmpty();
};

#endif