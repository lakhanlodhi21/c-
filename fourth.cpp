#include <iostream>
using namespace std;
int main()
{
    //     int marks, attandance;
    //     cout << "enter numbers and attandance";
    //     cin >> marks >> attandance;
    //     if (marks>=90&&attandance>=75)
    //     {
    //         cout << "you get 100% scolarship";
    //     }
    //     else if (marks>=80&&attandance>=65)
    //     {
    //         cout << "you get 50% scolarship";
    //     }
    //     else{
    //         cout << "no scolarship";
    //     }
    // float age,discount;
    // cout << "calculate the discount";
    // cin >> age >>discount;
    // if (age<=12)
    // {
    //     /* code */
    // }
    // int exp, performance;
    // cout << "enter";
    // cin >> exp >> performance;
    // if (exp>5&&performance>=4)
    // {
    //     cout << "get 20% bonus";
    // }
    // else if (exp>3&&exp<5&&performance>=3)
    // {
    //     cout << "get 10% bonus";
    // }
    // else{
    //     cout << "no bonus";
    // }
    // int orignal_price = 5000;
    // float final_price = orignal_price;
    // float age;
    // bool early_booking;
    // cout << "enter the age of passenger";
    // cin >> age;
    // cout << "is this early booking";
    // cin >> early_booking;
    // if (age<=12)
    // {
    //     final_price *= 0.5;
    // }
    // else if (age>=60)
    // {
    //     final_price *= 0.4;
    // }
    // else if (early_booking>=30)
    // {
    //     final_price *= 0.1;
    // }
    // cout << "the final price of the ticket" << final_price << endl;

    // int n;
    // cin >> n;
    // int i;
    // int sum = 0;
    // for (i = 0; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum;

//     int n;
//     cin >> n;
//   for (int i = 1; i <= n ; i++)
//   {
//     if (i!=5&&i!=10)
//     {
//         cout << i << " ";
//     }
     
//   }

    // int n;
    // cin >> n;
    // for (int i = 1; i <=n ; i++)
    // {
    //     if (i==5)
    //     {
    //       continue;
    //     }
    //     else if (i==10)
    //     {
    //        continue;
    //     }
    //     cout << i << " ";
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << n * i<<" ";
    // }

//
//     for (int j = 1; j <= 4; j++)
//     {

//         for (int i = 1; i <= 4; i++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
// }
//

    // for (int i = 1; i <=3; i++)
    // {
    //     int num = 4;
    //     for (int j = 1; j <=4; j++)
    //     {
    //         cout << num * j << " ";
    //     }
    //     num++;
    //     }

    int n;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = n-1; j>=i; j--)
        {
            cout << " ";
        }
        for (int k = 1; i <= i; k++)
        {
            cout << k << " ";
            if (i!=1)
            {
              for (int k = i-1; k>=1; k--)
              {
                  cout << k << " ";
              }
              cout << endl;
            }
            
        }
        
        
    }
    
}
