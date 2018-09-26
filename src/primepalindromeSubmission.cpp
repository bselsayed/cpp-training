/*#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool isPrime(int);
bool isPalindrome(int);
int power(int);

int main()
{
    int keepGoing = 1;
    while(keepGoing)
    {
        int n = 0;
    	cout << "Enter integer greater than 1" << endl;
        cin >> n;
        int condition = 1;
        while (condition)
        {
            if(isPrime(n) && isPalindrome(n))
            {
                cout << n << endl;
                condition = 0;
            }
           	n += 1;
        }
        cout << "keep going? 1/0" << endl;
        cin >> keepGoing;
    }
    return 0;
}

bool isPrime(int number)
{
    int number2 = number;
    for (int i = 2; i <= number2; i++)
        {
            if (!(number2 % i))
            {
                return false;
            }
        }
    return true;
}

bool isPalindrome(int number)
{
    int newNumber = number;
    vector<int> newVector;
    int counter = 0;
    while(number/10)
    {
        newVector.push_back(number%10);
        number = number/10;
        counter++;
    }

//add loop to convert newVector into one integer...then use next
//if conditional to compare new integer to original number
    int ans = 0;

    for (int i = 0; i <= counter; i++)
    {
        ans += newVector[i] * power(i);
    }

    if(newNumber == ans)
    {
        return true;
    }
    return false;
}

int power(int x)
{
    int result = 1;
    if (x == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            result *= 10;
        }
        return result;
    }

}

*/
