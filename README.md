# Assignment 6: Implementation of Different Types of Inheritance in C++

## 1. Practical Details

- **Course:** SY B.Tech. Artificial Intelligence and Machine Learning
- **Practical Number:** 6
- **Practical Title:** Implementation of Different Types of Inheritance in C++
- **Programming Language:** C++
- **IDE:** Dev-C++

## 2. Problem Statement

Write a C++ program to implement single, multilevel, multiple, hierarchical, and hybrid inheritance. Use a virtual base class in hybrid inheritance to avoid ambiguity caused by the diamond problem.

## 3. Aim

To implement and demonstrate different types of inheritance in C++.

## 4. Objectives

1. Understand inheritance and the relationship between base and derived classes.
2. Implement all five types of inheritance.
3. Understand public, protected, and private inheritance.
4. Understand the diamond problem and virtual inheritance.
5. Demonstrate code reusability.

## 5. Types of Inheritance Implemented

### Single Inheritance
The `Dog` class inherits from `Animal`.

### Multilevel Inheritance
The `Father` class inherits from `Grandfather`, and `Son` inherits from `Father`.

### Multiple Inheritance
The `Artist` class inherits from both `Writer` and `Singer`.

### Hierarchical Inheritance
The `Rectangle` and `Triangle` classes inherit from `Shape`. Both calculate their areas using shared dimensions.

### Hybrid Inheritance
The `Test` and `Sports` classes virtually inherit from `Student`. The `Result` class inherits from both `Test` and `Sports`.

Virtual inheritance avoids duplicate copies of the shared `Student` base class.

## 6. Algorithm

1. Create the classes required for single inheritance.
2. Create the classes required for multilevel inheritance.
3. Implement multiple inheritance using `Writer`, `Singer`, and `Artist`.
4. Implement hierarchical inheritance using `Shape`, `Rectangle`, and `Triangle`.
5. Implement hybrid inheritance using `Student`, `Test`, `Sports`, and `Result`.
6. Read the student's roll number, test marks, and sports score.
7. Display the student details and calculate the total.
8. Stop.

## 7. Technologies Used

- C++
- Dev-C++
- `iostream` library

## 8. Test Cases

| Test Case | Roll Number | Test Marks | Sports Score | Expected Total |
|---|---:|---:|---:|---:|
| 1 | 101 | 80 | 15 | 95 |
| 2 | 102 | 60 | 10 | 70 |

The rectangle area is 50 and the triangle area is 25 for dimensions 10 and 5.

## 9. How to Run

1. Download `inheritance.cpp`.
2. Open the file in Dev-C++.
3. Compile and run the program.
4. Enter the roll number, test marks, and sports score when prompted.
5. Verify the displayed result.

## 10. Result

The program demonstrates all five types of inheritance. The hierarchical inheritance example calculates the areas of a rectangle and a triangle, while the hybrid inheritance example calculates the total of test marks and sports score.

## 11. Conclusion

The practical demonstrates how inheritance promotes code reusability and establishes relationships between classes. It also demonstrates how virtual inheritance prevents ambiguity caused by the diamond problem.

## 12. Repository Contents

- `inheritance.cpp` — Complete C++ implementation.
- `README.md` — Practical details, theory, algorithm, test cases, and conclusion.
