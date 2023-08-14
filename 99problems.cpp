#include <iostream>

int main()
{
    using namespace std;

    string num;
    int low, high, number, number2;

    /*Get user input as a string in order to
    strip other decimal numbers from input.*/
    cin >> num;
    //Get the length of the string to find out how many decimals there are.
    int len = num.length();

    //Convert original number to an integer.
    number = stoi(num);

    /*Erase all decimals greater than 99 from string
    if the string contains more than 2 decimals, at the least.*/
    if(len>2)
    {
     num.erase(0,len-2);
    }
    //Convert 'cleaned' number to integer.
    number2 = stoi(num);

    //'High' calculates how far the decimal numbers are from the next 99 ending decimal.
    high = 99-number2;
    //'Low' calculates how far the number is to the previous 99 ending decimal.
    low = number2+1;

    /*If the lower number is further away than the high number, equal to the high number
    or results in a negative value, add the high value to the original number.*/
    if(low>=high || (number-low <0))
    {
        number = number+high;
    }
    /*If the higher number is further away than the lower number; subtract the higher number from
    the original number.*/
    else if(high>low)
    {
        number = number-low;
    }

    cout << number;
    return 0;
}
