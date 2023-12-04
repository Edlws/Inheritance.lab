#include "studentSecondSession.h"


StudentSecondSession::StudentSecondSession(char* _name, int _course, int _group, int _grades1[4], int _grades2[5]): StudentFirstSession(_name, _course, _group, _grades1){
    for (int i = 0; i < 5; i++) {
        grades2[i] = _grades2[i];
    }
}

double StudentSecondSession::calculateAverage(){
    double sum = 4 * StudentFirstSession::calculateAverage();
    for (int i = 0; i < 5; i++) {
        sum += grades2[i];
    }
    return sum / 9.0;
}

int StudentSecondSession::getGrade(int number){
    return grades2[number];
}

void StudentSecondSession::setGrade(int number, int value) {
    grades2[number] = value;
}

ostream& operator<<(ostream& ostream, StudentSecondSession& student) {
    ostream << "Student ID: " << student.studentID << endl
            << "Record Book number: " << student.studentID << endl
            << "Name: ";
            for (int i = 0; i < sizeof (student.name); i++){
                cout << student.name[i];
            }
    ostream << endl << "Course: " << student.course << endl
            << "Group: " << student.group << endl
            << "Grades after first session: ";
            for (int i = 0; i < 4; i++) {
                ostream << student.grades2[i] << " ";
            }
            ostream << endl << "Grades after second session: ";
            for (int i = 0; i < 5; i++) {
                ostream << student.grades2[i] << " ";
            }
    ostream << endl;
    return ostream;
}