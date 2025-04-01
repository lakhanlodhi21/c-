#include<iostream>
using namespace std;
int main(){

    // {
    //     int password;
    //     cout<<"enter password";
    //     cin >> password;
    //     if (password==1234)
    //     {
    //         cout << "correct";
    //     }
    //     else{
    //         cout << "incorrect password try again";
    //         cin >> password;
    //     }

    //     cout << password;
    // }
    // char ch;
    //  cout<<"enter any character";
    //  cin >> ch;
    //  if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    //  {
    //      cout << "it is a character";
    //  }
    //  else
    //  {
    //      cout << "characterless";
    //  }
    char ch;
    cout << "enter any character";
    cin >> ch;
    if (ch>='A' && ch<='Z')
    {
        cout << "it is uppar case";
    }
   else if (ch >= 'a' && ch <= 'z')
    {
        cout << "it is lower case";
    }
    else
    {
        cout << "invalid";
    }
}
    
    
    