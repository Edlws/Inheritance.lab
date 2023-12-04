#pragma once

#include <iostream>
#include <string>

using namespace std;
class Student {
protected:
    const int studentID;
    static int counterID;
    char* name;
    int course;
    int group;
    const int RecordBookNumber;

public:
    Student(char* _name, int _course, int _group);
    Student(Student& other);

    void setName(char* _name);
    char* getName();
    void setCourse(int _course);
    int getCourse();
    void setGroup(int _group);
    int getGroup();

    virtual double calculateAverage(){
        return 0;
    };

    friend ostream& operator<<(ostream& ostream, Student& student);
private:
    Student();
};

