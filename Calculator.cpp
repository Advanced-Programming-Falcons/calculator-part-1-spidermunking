#include <iostream>
#include <cmath>

using namespace std;
int num = 0;
int num2 = 0;
int num3 = 0;
char op = 0;
int loop = 1;

int main(void){
    while(loop == 1){
        if (num3 == 0){
            cout << "Please enter a number" << endl;
            cin >> num;
            num3 = 1
        // user enters a number
        }
        cout << "Please enter an opperator ( +, -, *, /, ^)" << endl;
        cin >> op;
        // user enters an operator
        cout << "please enter another number to use with the operator" << endl;
        cin >> num2;
        // user enters another number to use with operator
        if (op == '+') {
            num = num + num2;
        }
        else if (op == '-'){
            num = num - num2;
        }
        else if (op == '*'){
            num = num * num2;
        }
        else if (op == '/'){
            num = num / num2;
        }
        else if (op == '^'){
            num = pow(num,num2);
        }
        cout << num << endl;

        // below should be at the end of the program so it can stop or loop again if the user wants. 
        cout << "Do you want to do another calculation?(1 for yes, 0 for no)" << endl;
        cin >> loop;
    }

    return 0;
}
