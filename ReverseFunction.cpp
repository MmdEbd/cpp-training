#include <iostream>
using namespace std;


int gcd(int x, int y) {
    if (y == 0) return x;
    else return gcd(y,x%y);
}

int main() {
    int number1,number2;
    cout << "Enter first number: "<< endl;
    cin >> number1;
    cout <<"Enter second number: "<<endl;
    cin >> number2;
    cout <<  gcd(number1,number2);
    return 0;
}
