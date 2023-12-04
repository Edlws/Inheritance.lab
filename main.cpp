#include "student.h"
#include "studentFirstSession.h"
#include "studentSecondSession.h"
#include <iostream>

int main() {

    // Создать массив указателей на объекты всех трех классов и определить средний балл для массива.

    int firstSessionGrades1[] = {8, 8, 9, 7};
    StudentFirstSession student1("Oleg", 2, 2, firstSessionGrades1);

    int firstSessionGrades2[] = {7, 7, 8, 6};
    StudentFirstSession student2("Fyodor", 3, 2, firstSessionGrades2);

    int firstSessionGrades3[] = {9, 9, 8, 7};
    StudentFirstSession student3("Albert", 1, 1, firstSessionGrades3);

    int secondSessionGrades1[] = {8, 8, 9, 7, 10};
    StudentSecondSession student4("Oleg", 2, 2, firstSessionGrades1, secondSessionGrades1);

    int secondSessionGrades2[] = {7, 8, 9, 8, 7};
    StudentSecondSession student5("Fyodor", 3, 2, firstSessionGrades2, secondSessionGrades2);

    int secondSessionGrades3[] = {6, 7, 7, 6, 7};
    StudentSecondSession student6("Albert", 1, 1, firstSessionGrades3, secondSessionGrades3);

    Student *students[6] = {&student1, &student2, &student3, &student4, &student5, &student6};

    double total = 0;

    for (int i = 0; i < 6; i++) {
        total += (students[i]->calculateAverage());
    }

    double firstTotalAverage = total / 6;

    cout << firstTotalAverage << endl;

    //Определить средний балл в указанной группе после первой сессии, после двух сессий.

    total = 0;
    int counter = 0;
    for (int i = 0; i < 3; i++) {
        if (students[i]->getGroup() == 2){
            counter += 1;
            total += (students[i]->calculateAverage());
        }
    }
    if (counter != 0) cout << "2nd group total average after first session: " << total / counter << endl;

    total = 0;
    counter = 0;
    for (int i = 3; i < 6; i++) {
        if (students[i]->getGroup() == 2){
            counter += 1;
            total += (students[i]->calculateAverage());
        }
    }
    if (counter != 0) cout << "2nd group total average after second session: " << total / counter << endl;
    cout << student6;
    return 0;
}