#include <iostream>
#include <string>

using namespace std;

int main() {

    string str ="Hello World!";
    cout << "string size:" << str.length() << endl;

    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "the word 'World' was found in position: " << pos << endl;
    }


    string emptyStr;
    bool isEmpty = emptyStr.empty();
    if (isEmpty) {
        cout << "String is empty" << endl;
    } else {
        cout << "String is not empty" << endl;
    }


    string str1 = "Banana";
    string str2 = "Yellow";
    if (str1.compare(str2) < 0) {
        cout << str1 << " before " << str2 << " comes in line." << endl;
    }


    int number = 123;
    string numberStr = to_string(number);
    cout << "String to number: " << numberStr << endl;


    string numericStr = "456";
    int convertedNumber = stoi(numericStr);
    cout << "string to number: " << convertedNumber << endl;


    string floatStr = "123.45";
    float convertedFloat = stof(floatStr);
    cout << "decimal string to decimal number: " << convertedFloat << endl;

    return 0;
}
