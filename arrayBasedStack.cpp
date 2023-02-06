#include "arrayBasedStack.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    Stack<int> I;

    Stack<string> S;

    char ans;
    
    int response;

    cout << "Select 1 to use a stack for integers.\n";

    cin >> response;

    do {
        
        if (response == 1)
        {
        cout << "Press 1 to push an element into the stack.\n";

        cout << "Press 2 to pop an element from the stack.\n";

        cout << "Press 3 to see the value at the top of the stack.\n";

        cout << "Press 4 to print out the entire stack.\n";
        
        int x;
        cin >> x;

            if (x == 1) {
            cout << "What element would you like to push into the stack?\n";
            cin >> x;
            I.push(x);
            }
            else if (x == 2)
            I.pop();
            else if (x == 3){
            cout << endl;
            I.show_top();
            }
            else if (x == 4) {
            cout << endl;
            I.print();
            }
        }
        /* else if (response == 2)
        {
        cout << "Press 1 to push an element into the stack.\n";

        cout << "Press 2 to pop an element from the stack.\n";

        cout << "Press 3 to see the value at the top of the stack.\n";

        cout << "Press 4 to print out the entire stack.\n";
        
        int y;
        cin >> y;
            if (y == 1) {
            cout << "What element would you like to push into the stack?\n";
            string word;
            cin >> word;
            // S.push(word); cannot figure out
            }
            else if (y == 2)    
            S.pop();
            else if (y == 3) {
            cout << endl;
            S.show_top();
            }
            else if (y == 4) {
            cout << endl;
            S.print();
            }
        } */
        cout << "Perform another operation? Y/y\n";
        cin >> ans; 
    } while (ans == 'Y' || ans == 'y');
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
    I.print(); */

    return 0;
}