#include <iostream>
using namespace std;

class Course {
public:
    string name;
    int duration;

    Course(string n, int d) {
        name = n;
        duration = d;
    }

    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Duration: " << duration << " months" << endl;
    }
};

class ICTCourse : public Course {
public:
    ICTCourse(string n, int d) : Course(n, d) {}

    void printICTInfo() {
        cout << "ICT Course Information" << endl;
        printInfo();
    }
};

class LawCourse : public Course {
public:
    LawCourse(string n, int d) : Course(n, d) {}

    void printLawInfo() {
        cout << "Law Course Information" << endl;
        printInfo();
    }
};

class BusinessCourse : public Course {
public:
    BusinessCourse(string n, int d) : Course(n, d) {}

    void printBusinessInfo() {
        cout << "Business Course Information" << endl;
        printInfo();
    }
};

class BSCITCourse : public ICTCourse {
public:
    string stage;

    BSCITCourse(string n, int d, string s) : ICTCourse(n, d) {
        stage = s;
    }

    void printBSCITInfo() {
        cout << "BSC-IT Course Information" << endl;
        cout << "Stage: " << stage << endl;
        printInfo();
    }
};

int main() {
    // create some courses
    ICTCourse ictCourse("Intro to Programming", 6);
    LawCourse lawCourse("Contracts and Torts", 12);
    BusinessCourse businessCourse("Marketing Principles", 9);
    BSCITCourse bscitCourse("Software Engineering", 24, "Stage 3");

    // print out course information
    ictCourse.printICTInfo();
    lawCourse.printLawInfo();
    businessCourse.printBusinessInfo();
    bscitCourse.printBSCITInfo();

    return 0;
}

