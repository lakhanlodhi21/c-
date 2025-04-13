#include <iostream>
using namespace std;
int main()
{

    // do
    // {
    // stament / code
    // increment / decrement
    // } while (condition);

    // syntax of do while loop
    // do while loop will execute the statment or code till the condition code otherwise loop will we terminated its also called exit loop note -->> the do while loop will execute the statment atleast one time wheather the condition true or false

    // int a = 10; // initialize the variable
    // do
    // {
    //     cout << a << "\n";
    //     a--;
    // } while (a>=1);

    // int a = 1;
    // cout << "enter any number";
    // cin >> a;
    // do
    // {
    //     cout << a * b << "\n";
    //     b++;
    // } while (b<=10);

    // for (int i = 1; i <=10; i++)
    // {
    //     cout << a * i << "\n";
    // }

    // do
    // {
    //    if (a%2==0)
    //    {
    //        cout << a << "\n";
    //        a++;
    //    }
    // } while (a<=10);

    // int a = 1;
    // do
    // {
    //     if (a % 2 == 0)
    //     {
    //         cout << a << "\n";
    //     }
    //     a++;

    // } while (a <= 10);

    // write a program to print even number between 1 to
    //     write a program to print odd number between 1 to 10

    // int a = 1;
    // do
    // {
    //     if (a % 2 != 0)
    //     {
    //         cout << a << "\n";
    //     }
    //     a++;

    // } while (a <= 10);

    // write a program to print the sum of the values between 1 to 10

    // int a = 1, c = 0 ;
    // do
    // {
    //     c = c + a;
    //     a++;

    // } while (a<=10);

    // cout<<"total value\n"<<c;

    // factorial program

    // int a, b = 1;
    // cout << "enter number\n";
    // cin >> a;
    // do
    // {
    //     b = b * a;
    //     a--;
    // } while (a>=1);
    // cout << b; }

    // while loop -->>

    // while (condition)
    // {
    //     /* code */
    // } -->> syntax

    // while will execute the statement if the condition is true otherwise it will terminate the loop and it is also called entry loop

    //     int a = 1;
    //     cout << "enter number\n";
    //     while (a<=10)
    //     {
    //         cout << a;
    //         a++;
    //     }
    // }

    // int a = 5564647738;
    // while (a>=10)
    // {
    //    if (a==10)
    //    {
    //     continue;
    //    }

    //    cout << "its the correct digit" <<a;
    // }

    // int a;
    // cout << "enter number\n";
    // cin >> a;
    // while (a>0)
    // {

    // }

    // int i = 10;
    // while (i)
    // {
    //     cout << i <<"\t";
    //     i++;
    // }

    // int i = 10;
    // while (i)
    // {
    //     cout << i <<"\t";
    //     i--;
    // }

    // for loop

    // for (int i = 0; i <=10; i++)
    // {
    //     cout << i << "\n";
    // }

    // int j;

    // for ( j = 10; j <=20; j++)
    // {
    //     cout << j << "\n";
    // }

    // int x = 1;

    // for (; x <= 5; x++)
    // {
    //     cout << x << "\n";
    // }

    // write a program to generate table of any number
    // int a;
    // cout<<"enter any number";
    // cin >> a;
    // for (int b = 1; b<=10; b++)
    // {
    //     cout << a * b << "\n";
    // }

    // write a progran to display odd number between 20 to 50

    // for (int i = 20; i<=50; i++)
    // {
    //    if (i%2!=0)
    //    {
    //        cout << i << "\n";
    //    }

    // }

    // write a program to find out the given number is prime or not

    // jab pata hota hai ki loop kab se kab tak chalega to for loop
    // jab pata nhii rehta ki kab se kab tak chalega  to while loop

    // both for hcf AND LCM

    //     int n1 = 50;
    //     int n2 = 10;
    //     int mx;
    //      mx = n1 < n2 ? n1 : n2;
    //      while (1)

    //    // LCM question

    //     {
    //         if (mx%n1==0&&mx%n2==0)
    //         {
    //             cout << mx << "\nlcm\n";
    //             break;
    //         }
    //         mx++;
    //     }

    // HCF question

    // {
    //     if (n1%min==0 && n2%min==0)
    //     {
    //         cout << min << "\nhcf\n";
    //         break;
    //     }
    //     min--;
    // }

    // factor question

    // int n = 15;
    // int k = n;
    // int count = 0;
    // while (n>=1)
    // {
    //     if (k%n==0)
    //     {
    //         cout << n << "\n";
    //         if (k%n==0)
    //         {
    //             count = count + 1;
    //         }
    //     }
    //     n--;
    // }
    // cout << count << "\n";

    // int a,b, d=10;
    // cout<<"check the number is prime";
    // cin >> a;
    // b = a - 1;
    // while (b>1)
    // {
    //     if (a%b==0)
    //     {
    //         d = 1;
    //         break;
    //     }
    //     b--;
    // }
    //   if (d==1)
    //   {
    //       cout << "its not a prime number";
    //   }
    //   else{
    //     cout<<"its a prime number";
    //   }

    //     int n = 27;
    //     int k = n;
    //     //cin >> n;
    //     int count = 0;
    //     while (n>=1)
    //     {
    //        if (k%n==0)
    //        {
    //            cout << n << " this is perfect number\n";
    //        }
    //        n--;
    //         }
    //         cout << count << "\n";
    // }

    // int a, b, d = 10;
    // cout << "enter number";
    // cin >> a;
    // b = a - 1;
    // while (b>1)
    // {
    //     if (a%b==0)
    //     {
    //         d = 1;
    //         break;
    //     }
    //     b--;
    // }
    // if (d==1)
    // {
    //     cout << "its not a prime number";
    // }
    // else{
    //     cout << "its a prime";
    // }
    // }

    //     int a=1, b = 0;
    //     do
    //     {
    //         b = b + a;
    //         a++;
    //     } while (a<=10);
    //     cout << "total value" << b;
    // }

    // factorial program practice

    //     int a, b = 1;
    //     cout << "enter number \n";
    //     cin >> a;
    //     do
    //     {
    //         b = b * a;
    //         a--;
    //     } while (a>=1);
    //     cout << b;
    // }

    // int a;
    // cout << "enter number \n";
    // cin >> a;
    // for (int b=1; b <= 10; b++)
    // {
    //     cout << a * b <<"\n";
    // }

//     int a = 150;
//     int b = a;
//     int count = 0;
//     while (a >= 1)
//     {
//         if (b % a == 0)
//         {
//             cout << a << "\n";
//             if (b%a==0)
//             {
//                 count = count + 1;
//             }
//         }
//         a--;
//     }
//     cout << count << "\n";
// }


