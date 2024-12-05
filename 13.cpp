#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int sum = 0;
    int num;

    for (int i = 0; i < 5; i++)
    {
        cout << i << ":";
        cin >> arr[i];
        num = arr[i];
        sum = sum + num;
    }

    cout << "The Sum of all the numbers in a array is: " << sum << endl;
}