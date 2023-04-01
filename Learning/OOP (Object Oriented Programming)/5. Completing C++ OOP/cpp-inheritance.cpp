// Program to show inheritance

#include <iostream>
using namespace std;

class Person {
    private:
        int id;

    protected:
        int marks;

    public:
        string name;
        void set_id(int x) {
            id = x;
        }
        int get_id() {
            return id;
        }

};

class Student: public Person {
    
    public:
            void set_marks(int y) {
            marks = y;
        }
            int display_marks() {
                cout << marks << endl;
            }
            void display_id() {
                cout << name;
            }
};

int main() {

    Student student;
    Person person;

    // valid code because name is public  
    student.name = "Tom Araya";
    cout << student.name << endl;

    // error: marks is protected and cannot be accessed
    student.set_marks(97);
    student.display_marks();

    // error: id is private and cannot be accessed
    person.set_id(101);
    cout << person.get_id() << endl;

    return 0;
}

/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/