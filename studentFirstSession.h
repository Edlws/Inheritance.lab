#pragma once
#include "student.h"

class StudentFirstSession : public Student {
protected:
    int grades1[4];

public:
    StudentFirstSession(string _name, int _course, int _group, int _grades[4]);
    double calculateAverage() override;
    int getGrade(int number);
    void setGrade(int number, int value);

    friend ostream& operator<<(ostream& ostream, StudentFirstSession& student);
};