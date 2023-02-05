#include "arrayBasedStack.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    Stack<int> I;
    Stack<char*> S;
    int response;
    char StackType; // if 1 or 2, store S or I for <typename E>

    /*do {
        cout << "Select 1 to use a stack for integers.\nSelect 2 to use a stack for strings.\n";
        cin >> response;
        if (response == 1)
        {
            //functionality for int stack
        }
        else if (response == 2)
        {
            //functionality for string stack
        }
    } while (true); */

    I.push(5);  // SHOWS THAT THE ARRAY IS ALLOCATED MORE SPACE WHEN IT RUNS OUT OF CAPACITY FROM INITIALIZED
    I.push(517);  //ARRAY SIZE
    I.push(1);
    I.push(1);
    I.push(2);
    I.push(4);
    I.push(2);
    I.push(3);
    I.push(35235);
    I.push(234342);
    I.push(312);
    I.print();
    I.show_top();
    I.pop();
    I.show_top();
    I.pop();
    I.show_top();
    I.push(17);
    cout << "\n\n";
    I.print();

    

    return 0;
}