// A. Boy or Girl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Username Please = ";
    string Username;
    cin >> Username;

    int Letters_Counter = 0;
    for(int i = 0; i < Username.size(); i++)
    {
        if(Username[i] != ' ')
        {
            Letters_Counter++;
        }
    }

    cout << "Number of Letters of This Word = " << Letters_Counter << "\n";

    int Compare = 0, Accepted = 1;
    for(int i = 0; i < Letters_Counter; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(Username[i] == Username[j])
            {
                Compare++;
            }
        }
    if (Compare == 0)
    {
        Accepted++;
    }
        Compare = 0;
    }
    if (Accepted % 2 == 0)
    {
        cout << "Result is =\n" << "IGNORE HIM!\n";
    }
    else
    {
        cout << "Result is =\n" << "CHAT WITH HER!\n";
    }

}


