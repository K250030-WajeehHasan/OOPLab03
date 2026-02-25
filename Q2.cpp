#include<iostream>
using namespace std;

class Student{
    string name;
    int *grades;
    int size;
public:
    Student(string n, int s) {
        name = n;
        size = s;
        grades = new int[size];
        for (int i = 0; i < size; i++) {
            grades[i] = 0;
        }
    }
    Student(const Student &s) {
        name = s.name;
        size = s.size;
        grades = new int[size]; 
        for (int i = 0; i < size; i++) {
            grades[i] = s.grades[i];
        }
    }
    void setGrade(int index, int value) {
        if (index < size)
            grades[index] = value;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < size; i++) {
            cout << grades[i] << " ";
        }
        cout << endl;
        cout << "------------------" << endl;
    }
    ~Student() {
        delete[] grades;
    }
};
int main() {
    Student s1("Ali", 3);
    s1.setGrade(0, 90);
    s1.setGrade(1, 85);
    s1.setGrade(2, 80);
    Student s2 = s1;
    s2.setGrade(0, 50); 
    s1.show();
    s2.show();
    return 0;
}
