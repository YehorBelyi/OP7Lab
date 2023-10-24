#include <windows.h>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    float y, x, sum;
    cout << "We have a simple function. Input X below to solve it.\n" << "X = ";
    cin >> x;

    sum = 0;
    if (x != -2) {
        /*for (int i = 0; i < 11; i++) {
            sum += pow(i, 2);
        } */
        int i = 0;
        while (i < 11) {
            i++;
            sum += pow(i, 2);
        }
        y = (sum + sin(x)) / (x + 2);
        cout << "The result of solution = " << y;
    }
    else {
        cout << "X must not equals -2";
    }
}

