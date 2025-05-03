#include <iostream>
#include <string>
using namespace std;

struct Day {
    string day;
    string activity;
};

void printDayInfo(const Day &d) {
    cout << "Day: " << d.day << ", Activity: " << d.activity << endl;
}

int main() {
    Day week[7];

    week[0] = {"Saturday", "Relax at home"};
    week[1] = {"Sunday", "Family outing"};
    week[2] = {"Monday", "Work on projects"};
    week[3] = {"Tuesday", "Gym workout"};
    week[4] = {"Wednesday", "Attend meetings"};
    week[5] = {"Thursday", "Grocery shopping"};
    week[6] = {"Friday", "Dinner with friends"};

    for (const Day &d : week) {
        printDayInfo(d);
    }

    return 0;
}

