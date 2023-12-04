#include "student.h"
#include <cstring>

int Student::counterID = 1;

Student::Student(char* _name, int _course, int _group): studentID(counterID++), course(_course), RecordBookNumber(studentID) {
    name = _name;
    group = _group;
}

Student::Student(Student& other): studentID(counterID++), RecordBookNumber(studentID) {
    name = other.name;
    course = other.course;
    group = other.group;
}

void Student::setName(char* _name){
    name = _name;
}

char* Student::getName(){
    return name;
}

void Student::setCourse(int _course){
    course = _course;
}

int Student::getCourse(){
    return course;
}

void Student::setGroup(int _group){
    group = _group;
}

int Student::getGroup(){
    return group;
}

ostream& operator<<(ostream& ostream, Student& student) {
    ostream << "Student ID: " << student.studentID << endl
            << "Record Book number: " << student.studentID << endl
            << "Name: ";
            for (int i = 0; i < sizeof (student.name); i++){
                cout << student.name[i];
            }
    ostream << endl << "Course: " << student.course << endl
            << "Group: " << student.group << endl;
    return ostream;
}



