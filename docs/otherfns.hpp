#include<bits/stdc++.h>
using namespace std;
string QuadSums(int input){
    int first, scnd, thrd;
        if (input==1){   
            cout << "Enter coefficient of x^2: "; // ax^2 +bx + thrd=0
            cin >> first;
            cout << "Enter coefficient of x: ";
            cin >> scnd;
            cout << "Enter c: ";
            cin >> thrd;
            int num = pow(scnd, 2) - 4 * first * thrd;
            if (num > 1){
                cout << "Real Roots exist\n";
            }
            if (num < 1){
                cout << "Real Roots Dont Exist\n";
            }
            if (num == 0){
                cout << "Equal real roots exist\n";
            }
            // break;
        }
        else if (input==2){
            cout << "-------------NOTE: Enter the digits with suitable signs!-----------"<< "\n";
            cout << "Enter coefficient of x^2: "; // ax^2 +bx + thrd=0
            cin >> first;
            cout << "Enter coefficient of x: ";
            cin >> scnd;
            cout << "Enter c: ";
            cin >> thrd;
            int num = pow(scnd, 2) - 4 * (first) * (thrd); // num= bsq - 4ac
            float num1 = (-scnd + num) / (2 * (first));
            float num2 = (-scnd - num) / (2 * (first));
            cout << "1st Root is: " << num1 << "\n";
            cout << "2nd Root is: " << num2<<endl;
            // break;
        }
        else{
            cout<<"Wrong number you entered, try again:";           
        }
    string final = "";
    return final;
}