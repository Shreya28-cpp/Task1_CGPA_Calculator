#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int subjects;
    float credit[100], grade[100];
    float total_credits = 0, total_points = 0;

    cout << "Enter total number of subjects: ";
    cin >> subjects;

    for (int i = 0; i < subjects; i++) {
        cout << "Enter credit for subject " << i + 1 << ": ";
        cin >> credit[i];
        cout << "Enter grade point for subject " << i + 1 << " (Ex: 9, 8.5): ";
        cin >> grade[i];

        total_credits += credit[i];
        total_points += credit[i] * grade[i];
    }

    float cgpa = total_points / total_credits;

    cout << fixed << setprecision(2);
    cout << "\nYour CGPA is: " << cgpa << endl;

    return 0;
}