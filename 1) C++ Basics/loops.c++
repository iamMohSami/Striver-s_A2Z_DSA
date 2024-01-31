#include <iostream>
using namespace std;

int main()
{
    // IF - ELSE
    int age;
    cout << "Enter Age :" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Not Adult" << endl;
    }

    // IF-ELSE IF Ladder
    int marks;
    cout << "Enter Your Marks : " << endl;
    cin >> marks;
    if (marks < 50)
    {
        cout << "Fail" << endl;
    }
    else if (marks > 50 && marks <= 60)
    {
        cout << "D" << endl;
    }
    else if (marks > 60 && marks <= 70)
    {
        cout << "C" << endl;
    }
    else if (marks > 70 && marks <= 80)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "A" << endl;
    }

    //  NESTED IF-ELSE LOOPS

    int age2;
    cout << "Enter your Age :";
    cin >> age2;
    if (age2 < 18)
    {
        if (age2 >= 13 && age2 < 18)
        {
            cout << "Teenage" << endl;
        }
        else
        {
            cout << "Kid" << endl;
        }
    }
    else if (age2 >= 18 && age2 <= 50)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Senior Citizen" << endl;
    }

    // SWITCH STATEMENT

    int day;
    cout << "Enter Day number : ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid" << endl;
        break;
    }

    // FOR LOOP

    for (int j = 1; j <= 5; j++)
    {
        cout << "The Number is  : " << j << endl;
    }

    // WHILE LOOP
    int k = 4;
    while (k > 0)
    {
        cout << "While loop number :" << k << endl;
        k = k - 1;
    }

    int l = 3;
    do
    {
        cout << "Do while loop : " << l;
    } while (l > 4);

    return 0;
}