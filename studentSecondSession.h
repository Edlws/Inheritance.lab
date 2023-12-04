#pragma once
#include "studentFirstSession.h"

class StudentSecondSession : public StudentFirstSession {
private:
    int grades2[5]{};

public:
    StudentSecondSession(char* _name, int _course, int _group, int _grades1[4], int _grades2[5]);
    double calculateAverage() override;
    int getGrade(int number);
    void setGrade(int number, int value);

    friend ostream& operator<<(ostream& ostream, StudentSecondSession& student);
};