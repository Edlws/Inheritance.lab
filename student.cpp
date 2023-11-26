#include "student.h"
#include <cstring>

int Student::counterID = 1;

Student::Student(string _name, int _course, int _group): studentID(counterID++), course(_course), RecordBookNumber(studentID) {
    name = _name;
    group = _group;
}

Student::Student(Student& other): studentID(counterID++), RecordBookNumber(studentID) {
    name = other.name;
    course = other.course;
    group = other.group;
}

void Student::setName(string _name){
    name = _name;
}

string Student::getName(){
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
            << "Name: " << student.name << endl
            << "Course: " << student.course << endl
            << "Group: " << student.group << endl;
    return ostream;
}



