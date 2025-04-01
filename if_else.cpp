#include<iostream>
using namespace std;
int main()
{
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

int slab ,updatedbill , discount;
cout << "enter unit";
cin >> slab;
if (slab>=1 && slab<=50)
{
    cout << slab * 2 << " its my bill amount";
}
else if (slab>=51 && slab <=100)
{
    cout << slab * 3 << " its my bill amount";

}
else if (slab>=101 && slab <= 500)
{
    cout << slab * 5 << " its my bill amount";
}
else if (slab >= 501 && slab <= 1000)
{
    cout << slab * 7 << " its my bill amount";
}
else if (slab>1000)
{
    cout << slab * 10 << " its my bill amount ";
}
else if (slab <= 0)
{
    cout << " meter kharab hai ";
 }

}