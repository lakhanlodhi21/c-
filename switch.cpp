// switch case It is called jumping statment and the execution speed is faster than if else ladder and it is used for choice based and menu based programming
//  drawback of switch -->> it is not support operator except "+ - * /"
//  it doesnt support float variable in switch expression

#include <iostream>
using namespace std;
int main()
{
    // int a,b,c;
    // cout << "enter 2 numbers";
    // cin >> a >> b;
    // cout << "\n";
    // cin >> c;
    // switch (c)
    // {
    // case 1:
    //     {
    //         cout << "sum of a + b = " << a + b;

    //     }
    //     break;
    //     case 2:
    //     {
    //         cout << "sub of a - b = " << a - b;
    //     }
    //     break;
    //     case 3:
    //     {
    //         cout << "mul of a * b = " << a * b;
    //     }
    //     break;
    //     case 4:
    //     {
    //         cout << "div of a / b = " << a / b;
    //     }

    // default:
    // {
    //     cout << "invalid";
    // }
    //     break;
    // }

    // int a, b;
    // char c;
    // cout << "enter 2 num";
    // cin >> a >> b;
    // cout << "\n";
    // cin >> c;
    // switch (c)
    // {
    // case 'j':
    // {
    //     cout << "sum of a + b = " << a + b;
    // }
    // break;
    // case 'k':
    // {
    //     cout << "sub of a - b = " << a - b;
    // }
    // break;
    // case 'l':
    // {
    //     cout << "mul of a * b = " << a * b;
    // }
    // break;
    // case 'm':
    // {
    //     cout << "div of a / b = " << a / b;
    // }

    // default:
    // {
    //     cout << "invalid";
    // }
    // break;
    // }

    int a, b = 1;
    cin >> a;
    t:
    cout <<a * b << "\n";
    b++;
    if (b<=10)
    {
        goto t;
    }
    
}