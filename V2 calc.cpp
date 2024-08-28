#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
float num = 0;
float num2 = 0;
int num3 = 1;
float ans = 0;
char op = 0;
int loop = 1;
// sets the variables to such and such
int main(void){
    while(loop == 1){
        if (num3 == 0){
            cout << "Please enter a number" << endl;
            cin >> num;
            num3 = 0;
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
            ans = num + num2;
            num3 = 2;
            //addition
        }
        else if (op == '-'){
            ans = num - num2;
            num3 = 2;
            //subtraction
        }
        else if (op == '*'){
            ans = num * num2;
            num3 = 2;
            //multiplication
        }
        else if (op == '/'){
            ans = num / num2;
            num3 = 2;
            //devision
        }
        else if (op == '^'){
            ans = pow(num,num2);
            num3 = 2;
            //power
        }
        else if (op == '<'){
            ans = pow(num, (-1 * num2));
            num3 = 2;
            //square root
        }
        else if (op == '='){
            loop = 0;
            num3 = 2;
            cout << num;
            //ends loop
        }
        else if (op != '+' | '-' | '*' | '/' | '^' | '<' | '='){
                cout << "You haven't typed a valid operator, please try again." << endl ;
                num3 = 1;
        }

        if (num3 == 2){
        cout << "your number is " << ans << endl;
        }
        /* 
            this part above is what go's 
            through and does the calculations, 
            then prints them.
        */
    }

    return 0;
}
