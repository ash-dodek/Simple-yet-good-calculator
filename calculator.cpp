// Simple calculator version 1.0.0
#include <bits/stdc++.h>
#include <conio.h>
#include "docs/otherfns.hpp"
using namespace std;
int main()
{
     int re;
     string rere;
     do{
          long double a, b, c, e, f, g, h, d, i, j, k, inp, l, m, n;
          string rc, r;
          char A, B, C;
          // inp1:
          cout << "=================================WELCOME TO THE CALCULATOR============================="
               << "\n";
          cout << "Select your choice from the numbers given below:"
               << "\n";
          cout << " ===================================================="
               << "\n";
          cout << "|    1.)MULTIPLICATION      -----------> Enter 1     |"
               << "\n";
          cout << "|    2.)DIVISION            -----------> Enter 2     |"
               << "\n";
          cout << "|    3.)ADDITION            -----------> Enter 3     |"
               << "\n";
          cout << "|    4.)SUBRACTION          -----------> Enter 4     |"
               << "\n";
          cout << "|    5.)SQUARING            -----------> Enter 5     |"
               << "\n";
          cout << "|    6.)SQAURE ROOT         -----------> Enter 6     |"
               << "\n";
          cout << "|    7.)QUADRATIC EQ THINGS -----------> Enter 7     |"
               << "\n";
          cout << "|    8.)ARITHMETIC SUMS     -----------> Enter 8     |"
               << "\n";
          cout << "|    9.)TEMPERATURE CONVERTER----------> Enter 9     |"
               << "\n";
          cout << " ===================================================="
               << "\n";
          cout << "Please Enter Your Choice:";
          do{
               cin >> inp;
               // Multlply
               if (inp == 1)
               {
                    cout << "------------------You have chosen Multiplication-------------------"
                         << "\n";
                    cout << "Enter your First Digit:";
                    cin >> a;
                    cout << "Enter your second digit:";
                    cin >> b;
                    c = a * b;
                    cout << "Their product is:" << c << "\n";
                    break;
               }
               else if (inp == 2)
               {
                    cout << "------------------You have chosen Divsion-------------------"
                         << "\n";
                    cout << "Enter your First Digit:";
                    cin >> a;
                    cout << "Enter your second digit:";
                    cin >> b;
                    double d = a / b; // float
                    cout << "Their Quotient is:" << d << "\n";
                    break;
               }
               else if (inp == 3)
               {
                    cout << "------------------You have chosen Addition-------------------"
                         << "\n";
                    cout << "Enter your First Digit:";
                    cin >> a;
                    cout << "Enter your Second digit:";
                    cin >> b;
                    e = a + b;
                    cout << "Their Sum is:" << e << "\n";
                    break;
               }
               else if (inp == 4)
               {
                    cout << "------------------You have chosen Subraction-------------------"
                         << "\n";
                    cout << "Enter your First Digit:";
                    cin >> a;
                    cout << "Enter your Second digit:";
                    cin >> b;
                    f = a - b;
                    cout << "Their Difference is:" << f << endl;
                    break;
               }
               else if (inp == 5)
               {
                    cout << "------------------You have chosen Squaring-------------------"
                         << "\n";
                    cout << "Enter digit which u want to be squared:";
                    cin >> a;
                    g = pow(a, 2);
                    cout << "The answer is:" << g << endl;
                    break;
               }

               else if (inp == 6)
               {
                    cout << "------------------You have chosen Square root-------------------"
                         << "\n";
                    cout << "Enter digit to be squared:";
                    cin >> a;
                    h = sqrt(a);
                    cout << "Square root of " << a << " is: " << h << "\n";
                    break;
               }

               else if (inp == 7)
               {
                    cout<<"====================================ENTER ANY OF THE BELOW CHOICE:====================================\t\t\t\t\n";
                    cout<<"Enter 1 => CHECK IF ROOTS EXIST\n";
                    cout<<"Enter 2 => TO FIND OUT ROOTS\n";
                    cout<<"choice:";
                    int input;
                    do{
                    cin>>input;
                         cout << QuadSums(input);
                    } while (input>2 || input<=0);
                    
                    break;
               }

               else if (inp == 8)
               {
                    cout << "======================================================="
                         << "\n";
                    cout << "For finding n-th term                     >>>> Enter 1"
                         << "\n";
                    cout << "For finding sum of n terms                >>>> Enter 2"
                         << "\n";
                    cout << "For finding sum of n terms(using a and l) >>>> Enter 3"
                         << "\n";
                    //   cout << "For finding sum of FIRST n terms          >>>> Enter 4"
                    //        << "\n";
                    cout << "======================================================="
                         << "\n";
                    cout << "Enter your choice:";
                    do
                    {
                         cin >> l;
                         ArithM(l);

                    } while (l > 3 || l <= 0);
               }
               else if (inp==9){
                    cout<<"Enter 1 || for converting farenheit to celcius\n";
                    cout<<"Enter 2 || for converting celcius to farenheit\n";
                    cout<<"Choice:";
                    int choice;
                    do{
                         cin>>choice;
                         if (choice==1){
                              double tIf;
                              cout<<"Enter the temperature in Farenheit:";
                              cin>>tIf;
                              farToCelcius(tIf);
                         }
                         else if (choice==2) {
                              double tIc;
                              cout<<"Enter the temperature in Celcius:";
                              cin>>tIc;
                              celToFar(tIc);
                         }else cout<<"Please enter a correct number:";
                    }while(choice>2 || choice<=0);            
               }
               else{
               cout<<"Please enter correct number:";
               }

          } while (inp>9 || inp<=0);
          // cout<<"Press any key to exit.....";
          // getch();
     // cin>>re;
     cout<<"Do you want to run this caluclator again?yes/y to run again, or type anything to exit\n";
     cin>>rere;
     if (rere=="yes"||rere=="y"){
          system("cls");
     }
     
     }while(rere=="yes" || rere == "y");
}
