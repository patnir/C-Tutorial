#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person {
public:
    string name; 
    int age;
    
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

int students = 1;
int professors = 1;

class Student : public Person {
public:
    int *marks;
    
    Student() {
        marks = new int[6];
    }
    ~Student() {
        delete[] marks;
    }
    
    void getdata() {
        cin >> name; 
        cin >> age; 
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    void putdata() {
        cout << name << " "; 
        cout << age << " "; 
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << sum << " "; 
        cout << students << "\n";
        students++;
    }
};

class Professor : public Person {
public:
    int publications;

    void getdata() {
        cin >> this->name;
        cin >> this->age;
        cin >> this->publications;
    }
    void putdata() {
        cout << name << " " << age << " ";
        cout << publications << " " << professors << "\n";
        professors++;
    }
};



int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
