#include<bits/stdc++.h>
using namespace std;
//quadratic
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
//arithmetic
bool ArithM(int l){
    int a,b,c,m,n;
    if (l == 1)
        {
            cout << "Enter First Term of the A.P:"; // an =a+(n-1)d
            cin >> a;
            cout << "Enter value of n:";
            cin >> b;
            cout << "Enter Common Difference of the A.P:";
            cin >> n;
            m = a + (b - 1) * n;
            cout << "The n-th term is:" << m<<endl;
        }
        else if (l == 2)
        {
            cout << "Enter Value of \"a\"(first digit of A.P):";
            cin >> a;
            cout << "Enter \"n\"(no. of term u wanna find of the A.P):";
            cin >> b;
            cout << "Enter value of \"d\"(commmon difference):";
            cin >> c;
            float j = (2 * (a)) + ((b)-1) * (c);
            float k = b / 2;
            cout << "Sum of n terms:" << j * k<<endl;
        }
        else if (l == 3)
        {
            cout << "Enter Value of \"a\"(first digit of A.P):";
            cin >> a;
            cout << "Enter \"l\"(last term of the A.P):";
            cin >> b;
            cout << "Enter \"n\"(no. of terms the A.P):";
            cin >> c;
            float j = (a) + (b);
            float k = c / 2;
            cout << "Sum of n terms:" << j * k<<endl;
        }
        else
        {
            cout << "You have entered a wrong number, please enter the number again:";
        }
}

bool Celcius(int tIf){
    double ans = ((tIf-32)*5)/9 ;
    cout<<tIf<<" degree Fareheit in Celcius is "<<ans<<" degree celcius(approx)\n";
    return true;
}
