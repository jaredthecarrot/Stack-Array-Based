#include <cstddef>
#include <iostream>
#ifndef arrayBasedStack
#define arrayBasedStack

template <typename E>
class Stack {
    private:
    int t, capacity, elemCount;
    E S[0];

    public:
    Stack();
    int size() const;
    bool empty() const;
    const E& top();
    //E get_top(const E& e) {return top();} // ACCESSOR FUNCTION FOR TOP
    E show_top() {
        if (empty())
            std::cout << "Stack is empty.\n";
        else
        std::cout << top() << std::endl;
    } 
    void print() // PRINTS OUT ENTIRE STACK
    {
        for (int i = 0, n = size(); i < n; i++)
        std::cout << S[i] << std::endl;
    }
    void push(const E& e); // PUSHES A VALUE INTO NEXT ARRAY CELL
    void pop(); // REMOVES VALUE FROM LAST FILLED ARRAY CELL
};

template <typename E> 
Stack<E>::Stack() {
    t = -1;
    elemCount = 0;
    capacity = 5;
    S[capacity] = {0};
}

template <typename E> 
int Stack<E>::size() const {
    return (t + 1);
}

template <typename E>
bool Stack<E>::empty() const {
    if (t == -1)
    return true;
    else 
    return false;
}

template <typename E>
void Stack<E>::pop() {
    if (empty())
    std::cout << "Stack is empty.\n";
    else
        t--;
      
}

template <typename E>
void Stack<E>::push(const E& e) {
    if (size() == capacity) {
    capacity++; // increase capacity????
    }
    t++;
    elemCount++;
    S[t] = e;
}

template <typename E>
const E& Stack<E>::top() {
    if (size() >= 0)
    return S[t];
    else
    return 0;
}
#endif