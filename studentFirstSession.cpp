#include "studentFirstSession.h"

StudentFirstSession::StudentFirstSession(string _name, int _course, int _group, int _grades[4]): Student(_name, _course, _group) {
    for (int i = 0; i < 4; i++) {
        grades1[i] = _grades[i];
    }
}

double StudentFirstSession::calculateAverage(){
    double sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += grades1[i];
    }
    return sum / 4.0;
}

int StudentFirstSession::getGrade(int number){
    return grades1[number];
}

void StudentFirstSession::setGrade(int number, int value) {
    grades1[number] = value;
}

ostream& operator<<(ostream& ostream, StudentFirstSession& student) {
    ostream << "Student ID: " << student.studentID << endl
            << "Record Book number: " << student.studentID << endl
            << "Name: " << student.name << endl
            << "Course: " << student.course << endl
            << "Group: " << student.group << endl
            << "Grades after first session: ";
    for (int i = 0; i < 4; i++) {
        ostream << student.grades1[i] << " ";
    }
    ostream << endl;
    return ostream;
}