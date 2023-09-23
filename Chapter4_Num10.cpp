#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //header
    cout << "C++ CIS142 ** Name: Edgar Brizuela **          C++ \n" << endl;
    cout << "C++ CIS142 ** Chapter 4:Making Decisions  **          C++ \n" << endl;
    cout << "C++ CIS142 ** #10 Days in a Month ** C++ \n" << endl;
    cout << "C++ CIS142 ** Date Submitted:  9/22/2023 **    C++ \n" << endl;

    //establish variables
    int month, year, days;
    bool leapyear;

    //Ask the user for month and year
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    if (month >= 1 && month <= 12){
        //checks for leap year
        if (((year % 100 == 0) && (year % 400 == 0)) || ((year % 100 != 0) && (year % 4 == 0))){
            leapyear = true;
        } else {
            leapyear = false;
        }

        //assigns appropriate days according to month inputted by user
        switch(month) {
            case 1 :
                days = 31;
                break;
            case 2:
                if(leapyear == true){
                    days = 29;
                } else {
                    days = 28;
                }
                break;
            case 3:
                days = 31;
                break;
            case 4:
                days = 30;
                break;
            case 5:
                days = 31;
                break;
            case 6:
                days = 30;
                break;
            case 7:
                days = 31;
                break;
            case 8:
                days = 31;
                break;
            case 9:
                days = 30;
                break;
            case 10:
                days = 31;
                break;
            case 11:
                days = 30;
                break;
            case 12:
                days = 31;
                break;
        }
    } else {
        //user invalid an incorrect number
        cout << "Inputted number outside of range, please run program again and input a number from 1-12";
    }

    //Final output
    cout << days << " days \n";

    return 0;
}