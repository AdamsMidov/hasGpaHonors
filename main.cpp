
#include <iostream>
#include <cmath>

using namespace std;

class Student {
    public:
        string name;
        string major;
        int gpa;
        Student(string name, string major, double gpa) {
            string sName = name;
            string sMajor = major;
            double sGpa = gpa;
        }
        bool hasHonors() {
            if(gpa >= 2.5) {
                return true;
            }
            return false;
        }

    };



int main() {

    Student student1("Adams", "Journalism", 4.1);
    Student student2("Jim", "Business", 2.3);

    // for checking
    cout << student1.hasHonors();


    return 0;
}
