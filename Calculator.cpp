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
        cout << "Please enter an opperator" << endl;
        cout << "(addition)+ (subraction)-" << endl;
        cout << "(multiplication)* (division)/" << endl;
        cout << "(Power)^ (root)< (to end)=" << endl;
        cin >> op;
        // user enters an operator
        cout << "please enter another number to use with the operator" << endl;
        cin >> num2;
        // user enters another number to use with operator
       
        
        if (op == '+') {
            num = num + num2;
            //addition
        }
        else if (op == '-'){
            num = num - num2;
            //subtraction
        }
        else if (op == '*'){
            num = num * num2;
            //multiplication
        }
        else if (op == '/'){
            num = num / num2;
            //devision
        }
        else if (op == '^'){
            num = pow(num,num2);
            //power
        }
        else if (op == '<'){
            num = pow(num,1/num2);
            //square root
        }
        else if (op == '='){
            loop = 0;
            //ends loop
        }
        cout << num << endl;
        /* 
            this part above is what go's 
            through and does the calculations, 
            then prints them.
        */
    }

    return 0;
}
