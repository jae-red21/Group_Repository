#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int choice;
    double principal, min_rate, max_rate, deposit, rate, balance;
    int year;

   
    cout << "Choose an option:" << endl;
    cout << "1. Calculate savings without annual deposits" << endl;
    cout << "2. Calculate savings with annual deposits" << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            rate = 0.05;

            cout << "Enter the principal amount: $";
            cin >> principal;
            
            cout << "Enter the number of years: ";
            cin >> year;

            for(int i =1; i <= year; i++)
            {
                balance = principal * (1 + rate)* i;
                cout << "Year " << i << ": $" << balance << endl; 
            }
    
            break;

        case 2:
           
            cout << "Enter the principal amount: $";
            cin >> principal;
            cout << "Enter the minimum interest rate (%): ";
            cin >> min_rate;
            cout << "Enter the maximum interest rate (%): ";
            cin >> max_rate;
            cout << "Enter the number of years: ";
            cin >> year;
            cout << "Enter the annual deposit amount: $";
            cin >> deposit;

            for (int i = 1; i <= year; i++) 
            {
                rate = min_rate + (max_rate - min_rate) * (i - 1) / (year - 1);
                balance = principal * pow(1 + rate / 100, i) + deposit * ((pow(1 + rate / 100, i) - 1) / (rate / 100));
                cout << "Year " << i << ": $" << balance << endl;
            }
               
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
