#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<double> grade(n), credit(n);

    double totalPoints = 0, totalCredits = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Grade Point (0-4): ";
        cin >> grade[i];

        cout << "Enter Credit Hours: ";
        cin >> credit[i];

        totalPoints += grade[i] * credit[i];
        totalCredits += credit[i];
    }

    double cgpa = totalPoints / totalCredits;

    cout << "\n----- Result -----" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Course " << i + 1
             << " Grade Point: "
             << grade[i] << endl;
    }

    cout << fixed << setprecision(2);
    cout << "CGPA = " << cgpa << endl;

    return 0;
}