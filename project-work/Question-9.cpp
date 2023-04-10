// This program checks if an integer N is a prime number and either 
// calculates the average value of prime numbers between 1 and N or 
// outputs its prime factors.
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num;
    bool is_prime = true;

    cout << "Enter an integer: ";
    cin >> num;

    // Check if num is less than 3
    if (num < 3) 
    {
        // Check if num is 2
        if(num==2)
            cout << num << " is a prime number" << endl;
        // Check if num is 1
        else if(num==1)
            cout << num << " is neither prime nor composite number" << endl;
        // Check if num is negative
        else
            cout << "Invalid input." << endl;
    } 
    else 
    {
        // Loop through all the numbers from 2 to sqrt(num) to check if num is a prime number
        for (int i = 2; i <= sqrt(num); i++) 
        {
            // If num is divisible by i, then it's not a prime number
            if (num % i == 0) 
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime) // If num is a prime number
        {
            double sum = 0;
            int count = 0;
            // Loop through all the numbers from 2 to num-1 to calculate the average value of prime numbers
            for (int i = 2; i < num-1; i++) 
            {
                // Check if i is a prime number by looping through all the numbers from 2 to sqrt(i)
                for (int j = 2; j <= sqrt(i); j++) 
                {
                    // If i is divisible by j, then it's not a prime number
                    if (i % j == 0) 
                    {
                        i++; // Skip to the next number
                    }
                }
                sum += i; // Add i to the sum
                count++; // Increment the count
            }
            double average = sum / count; // Calculate the average value
            cout << num << " is a prime number with an average value of prime numbers between 1 and "; 
            cout << num << " = "  << average << endl;
        } 
        else // If num is not a prime number
        {
            cout << num << " is not a prime number" << endl;
            cout << "Prime factors of N are: ";

            // Loop through all the numbers from 2 to num to find its prime factors
            for (int i = 2; i <= num; i++) 
            {
                // If num is divisible by i, then i is a prime factor
                while (num % i == 0) 
                {
                    cout << i << " ";
                    num /= i; // Divide num by i to get the remaining factors
                }
            }
        }
    }

    return 0;
}
