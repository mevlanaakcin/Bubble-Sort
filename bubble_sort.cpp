#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

// Random number generator
int randNum()
{
    int min = 1, max = 100;
    return min + rand() % max;
}
int main()
{
    int leng;
    bool traning = true;
    int test = 0;
    srand(time(0));

    cout << "Enter Array Size:";
    cin >> leng;

    int arr[leng];

    // Create Array
    for (int i = 0; i < leng; i++)
    {
        arr[i] = randNum();
    }

    cout << "Array:[";
    for (int i = 0; i < leng; i++)
    {
        i == leng - 1 ? cout << arr[i] : cout << arr[i] << ",";
    }
    cout << "]" << endl;

    // Bubble Sort
    while (traning)
    {
        traning = false;
        for (int j = 0; j < leng; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int v = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = v;
                traning = true;
                test++;
            }
        }
    }
    cout << test << " steps" << endl;
    // New Array
    cout << "New Array:[";
    for (int i = 0; i < leng; i++)
    {
        i == leng - 1 ? cout << arr[i] : cout << arr[i] << ",";
    }
    cout << "]" << endl;

    getch();
}
