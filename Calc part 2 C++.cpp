#include <iostream>
#include <cmath>
#include <string>
#include <list>

using namespace std;
void history(); // function

//lists
list <int> numbers = {};
list <char> opp = {};

double num = 0;
double num2 = 0;
float ans = 0;
char op = 0;
int loop = 1;
string h = "";

int main(void){
    while(loop == 1){
        cout << "Please enter a calculation.(opperators ( +, -, *, /, ^, <)\n";
        cin >> num;
        cin >> op;
        cin >> num2;
        switch(op){
        case '+':
            ans = num + num2;
        break;
        case '-':
            ans = num - num2;
        break;
        case '*':
            ans = num * num2;
        break;
        case '/':
            ans = num / num2;
        break;
        case '^':
            ans = pow(num,num2);
        break;
        case '<':
            ans = pow(num, (1 / num2));
        break;
        case '=':
            loop = 0;
            cout << "Yur dun!" << endl;
        break;
        case 'h': case 'H':
            cout << h << endl;
            op = ' ' ;
        break;
        }

        numbers.push_back(num);
        numbers.push_back(num2);
        numbers.push_back(ans);
        opp.push_back(op);
        
        cout << num << op << num2 << "=" << ans << endl;
        history();
        
    }

    return 0;
}

void history(void){
    h = h + to_string(num)+ op + to_string(num2)+ "=" + to_string(ans)+ "\n";
}
