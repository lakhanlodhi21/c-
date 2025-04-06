// #include<iostream>
// using namespace std;
// int main()
// {
//     int pass,otp;
//     cout << "enter pass\n";
//     cin >> pass;
//     if (pass==2025)
//     {
//         cout << "enter otp\n";
//         cin >> otp;
//         if (otp == 2000)
//         {
//             cout << "congratulation";
//     }
// }
//     else{
//         cout << "your fraud";
//     }
// in a nested condition we use multiple inside one another
// nested condition is also called inner condition
// int aadhar_no, age;
// cout << "enter your aadhar no";
// cin >> aadhar_no;
// if (aadhar_no==5583)
// {
//     cout << "enter your age";
//     cin >> age;
//     if (age==22)
//     {
//         cout << "u can drive";
//     }
//     else{
//         cout << "u can not drive";
//     }
//     }
//     else{
//         cout << "invalid";
//     }
    

// ladder is also called outer condition it will execute the next else if condition is and only if the previos condition otherwise it will exit from the condition

// int a, b, c;
// cout << "enter 3 numbers\n";
// cin >> a >> b >> c;
// if (a>b && a>c)
// {
//     cout << "a is large" << a;
// }
// else if (b>a && b>c)
// {
//     cout << "b is large" << b;
// }
// else{
//     cout << "c is large" << c;
// }

// write a program to generate the will of electricity using following constraints

//

// 

// int a,b,c;
// cout << "enter 2 numbers \n";
// cin >> a >> b; 
// cout<<"\n";
// cin >> c;
// if (c==1)
// {
//     cout << "sum=" << a + b << "\n";
// }
// else if (c==2)
// {
//     cout << "sub=" << a - b << "\n";
// }
// else if (c==3)
// {
//     cout << "mul=" << a * b << "\n";
// }
// else if (c==4)
// {
//     cout << "div=" << a / b << "\n";
// }
// else{
//     cout << "invalid";
// }

// // cout << "sum=" << a + b << "\n";
// // cout << "sub=" << a - b << "\n";
// // cout << "mul=" << a * b << "\n";
// // cout << "div=" << a / b << "\n";

// }

//switch case It is called jumping statment and the execution speed is faster than if else ladder and it is used for choice based and menu based programming
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

    int a, b;
    char c;
    cout << "enter 2 num";
    cin >> a >> b;
    cout << "\n";
    cin >> c;
    switch (c)
    {
    case 'j':
    {
        cout << "sum of a + b = " << a + b;
    }
    break;
    case 'k':
    {
        cout << "sub of a - b = " << a - b;
    }
    break;
    case 'l':
    {
        cout << "mul of a * b = " << a * b;
    }
    break;
    case 'm':
    {
        cout << "div of a / b = " << a / b;
    }

    default:
    {
        cout << "invalid";
    }
    break;
    }
}
