#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num;
    bool is_prime = true;

    cout << "Enter an integer: ";
    cin >> num;
     if (num < 3) 
    {
       if(num==2)
            cout << num << " is a prime number" << endl;
         else if(num==1)
            cout << num << " is neither prime nor composite number" << endl;
         else
            cout << "Invalid input." << endl;
    } 
