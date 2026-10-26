#include <iostream>
using namespace std;

// ========================================
// 1. SINGLE INHERITANCE
// Animal is the base class and Dog is derived
// ========================================

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};


// ========================================
// 2. MULTILEVEL INHERITANCE
// Grandfather -> Father -> Son
// ========================================

class Grandfather
{
public:
    void showGrandfather()
    {
        cout << "This is the Grandfather class." << endl;
    }
};

class Father : public Grandfather
{
public:
    void showFather()
    {
        cout << "This is the Father class." << endl;
    }
};

class Son : public Father
{
public:
    void showSon()
    {
        cout << "This is the Son class." << endl;
    }
};


// ========================================
// 3. MULTIPLE INHERITANCE
// Writer + Singer -> Artist
// ========================================

class Writer
{
public:
    void write()
    {
        cout << "Artist can write." << endl;
    }
};

class Singer
{
public:
    void sing()
    {
        cout << "Artist can sing." << endl;
    }
};

class Artist : public Writer, public Singer
{
public:
    void showArtist()
    {
        cout << "Artist inherits from Writer and Singer."
             << endl;
    }
};


// ========================================
// 4. HIERARCHICAL INHERITANCE
// Shape -> Rectangle and Triangle
// ========================================

class Shape
{
protected:
    float length;
    float breadth;

public:
    void setValues(float l, float b)
    {
        length = l;
        breadth = b;
    }
};

class Rectangle : public Shape
{
public:
    float area()
    {
        return length * breadth;
    }
};

class Triangle : public Shape
{
public:
    float area()
    {
        return 0.5f * length * breadth;
    }
};


// ========================================
// 5. HYBRID INHERITANCE
// Student -> Test and Sports -> Result
// Virtual inheritance solves the diamond problem
// ========================================

class Student
{
protected:
    int rollNo;

public:
    void setRollNo(int r)
    {
        rollNo = r;
    }

    void showRollNo()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Test : virtual public Student
{
protected:
    float testMarks;

public:
    void setTestMarks(float marks)
    {
        testMarks = marks;
    }
};

class Sports : virtual public Student
{
protected:
    float sportsScore;

public:
    void setSportsScore(float score)
    {
        sportsScore = score;
    }
};

class Result : public Test, public Sports
{
public:
    void input()
    {
        int r;
        float marks, score;

        cout << "Enter Roll Number: ";
        cin >> r;

        cout << "Enter Test Marks: ";
        cin >> marks;

        cout << "Enter Sports Score: ";
        cin >> score;

        setRollNo(r);
        setTestMarks(marks);
        setSportsScore(score);
    }

    void display()
    {
        cout << "\n----- STUDENT RESULT -----" << endl;

        showRollNo();

        cout << "Test Marks: " << testMarks << endl;

        cout << "Sports Score: " << sportsScore << endl;

        cout << "Total: " << testMarks + sportsScore << endl;
    }
};


// ========================================
// MAIN FUNCTION
// ========================================

int main()
{
    cout << "========================================" << endl;
    cout << " IMPLEMENTATION OF INHERITANCE IN C++" << endl;
    cout << "========================================" << endl;


    // 1. Single Inheritance
    cout << "\n1. SINGLE INHERITANCE" << endl;

    Dog d;
    d.eat();
    d.bark();


    // 2. Multilevel Inheritance
    cout << "\n2. MULTILEVEL INHERITANCE" << endl;

    Son s;
    s.showGrandfather();
    s.showFather();
    s.showSon();


    // 3. Multiple Inheritance
    cout << "\n3. MULTIPLE INHERITANCE" << endl;

    Artist a;
    a.write();
    a.sing();
    a.showArtist();


    // 4. Hierarchical Inheritance
    cout << "\n4. HIERARCHICAL INHERITANCE" << endl;

    Rectangle rect;
    Triangle tri;

    rect.setValues(10, 5);
    tri.setValues(10, 5);

    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Triangle Area: " << tri.area() << endl;


    // 5. Hybrid Inheritance
    cout << "\n5. HYBRID INHERITANCE" << endl;

    Result res;

    res.input();
    res.display();


    cout << "\nAll five types of inheritance demonstrated successfully."
         << endl;

    return 0;
}
