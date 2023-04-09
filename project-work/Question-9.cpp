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
    else 
    {
        for (int i = 2; i <= sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime) 
        {
            double sum = 0;
            int count = 0;
          
            for (int i = 2; i < num-1; i++) 
            {
                
                for (int j = 2; j <= sqrt(i); j++) 
                {
                 
                    if (i % j == 0) 
                    {
                        i++; 
                    }
                }
                sum += i; 
                count++; 
            }
            double average = sum / count; 
            cout << num << " is a prime number with an average value of prime numbers between 1 and "; 
            cout << num << " = "  << average << endl;
        }
    
    else 
        {
            cout << num << " is not a prime number" << endl;
            cout << "Prime factors of N are: ";

            for (int i = 2; i <= num; i++)
            {
                while (num % i == 0) 
                {
                    cout << i << " ";
                    num /= i; 
                }
            }
        }
    }
    
    return 0;
}
    
    
