#include "arrayBasedStack.h"
#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
using std::endl;

int main() {

    Stack<int> I;

    Stack<char*> S;

    do {
        int response;

        char ans; // if 1 or 2, store S or I for <typename E>

        cout << "Select 1 to use a stack for integers.\nSelect 2 to use a stack for strings.\n";

        cin >> response;

        cout << "Press 1 to push an element into the stack.\n";

        cout << "Press 2 to pop an element from the stack.\n";

        cout << "Press 3 to see the value at the top of the stack.\n";

        cout << "Press 4 to print out the entire stack.\n";

        if (response == 1) {
            if (response == 1) {
            cout << "What element would you like to push into the stack?\n";
            cin >> response;
            I.push(response);
            }
            else if (response == 2)
            I.pop();
            else if (response == 3)
            I.top();
            else if (response == 4)
            I.print();
        }
        else if (response == 2) {
            if (response == 1) {
            cout << "What element would you like to push into the stack?\n";
            std::string x;
            S.push(x);
            }
            else if (response == 2)
            S.pop();
            else if (response == 3)
            S.top();
            else if (response == 4)
            S.print();
        }
    } while (true);
    /*I.push(0);
    I.push(1);
    I.push(2);
    I.push(3);
    I.push(4);
    I.push(5);
    I.push(6);
    I.push(7);
    I.push(8);
    I.push(9);
    I.print();
    S.push("Hello");
    S.push("World");
    S.push("Testing1");
    S.push("Testing2");
    S.push("Testing3");
    S.push("Testing4");
    S.push("Testing5");
    S.print(); */

    return 0;
}