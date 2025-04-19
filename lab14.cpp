// //lab 14//problem 1
// #include <iostream>
// #include <fstream>
// #include <string>
//
// using namespace std;
//
// int main() {
//     string filename = "output.txt";
//     string textToWrite = "Hello, File!";
//     ofstream outputFile(filename);
//
//     if (outputFile.is_open()) {
//         outputFile << textToWrite << endl;
//         outputFile.close();
//         cout << "(File '" << filename << "' contains: " << textToWrite << ")" << endl;
//     } else {
//         cerr << "Unable to open file: " << filename << endl;
//         return 1;
//     }
//
//     return 0;
// }
//
// //problem 2
// #include <iostream>
// #include <fstream>
// #include <string>
//
// using namespace std;
//
// int main() {
//     string filename = "greeting.txt";
//     ifstream inputFile(filename);
//     if (inputFile.is_open()) {
//         string line;
//         while (getline(inputFile, line)) {
//             cout << line << endl;
//         }
//         inputFile.close();
//     } else {
//         cerr << "Unable to open file: " << filename << endl;
//         return 1;
//     }
// }
//
// //problem 3
// #include <iostream>
// #include <fstream>
// #include <string>
//
// using namespace std;
//
// int main() {
//     string filename = "user.txt";
//     string name;
//     int age;
//     cout << "Enter your name: ";
//     getline(cin, name);
//     cout << "Enter your age: ";
//     cin >> age;
//     cin.ignore();
//     ofstream outputFile(filename);
//     if (outputFile.is_open()) {
//         outputFile << name << " " << age << endl;
//
//         outputFile.close();
//
//         cout << "(File '" << filename << "' contains: " << name << " " << age << ")" << endl;
//     } else {
//         cerr << "Unable to open file: " << filename << endl;
//         return 1;
//     }
//
// }
//
// //problem 4
// #include <iostream>
// #include <fstream>
// #include <string>
//
// using namespace std;
//
// int main() {
//     string filename = "data.txt";
//
//     ifstream inputFile(filename);
//
//     if (inputFile.is_open()) {
//         string line;
//         while (getline(inputFile, line)) {
//             cout << line << endl;
//         }
//         inputFile.close();
//     } else {
//         cerr << "Unable to open file: " << filename << endl;
//         return 1; //
//     }
// }
//
// //problem 5
// #include <iostream>
// #include <fstream>
// #include <string>
//
// using namespace std;
//
// int main() {
//     string sourceFilename = "source.txt";
//     string targetFilename = "target.txt";
//
//     ifstream sourceFile(sourceFilename);
//     ofstream targetFile(targetFilename);
//
//     if (sourceFile.is_open()) {
//         if (targetFile.is_open()) {
//             string line;
//
//             while (getline(sourceFile, line)) {
//                 targetFile << line << endl;
//             }
//             sourceFile.close();
//             targetFile.close();
//
//             cout << "(File '" << targetFilename << "' now contains the same content as '" << sourceFilename << "')" << endl;
//         } else {
//             cerr << "Unable to open target file: " << targetFilename << endl;
//
//             sourceFile.close();
//             return 1;
//         }
//     } else {
//
//         cerr << "Unable to open source file: " << sourceFilename << endl;
//         return 1;
//     }
//
//     return 0;
// }
//
// //problem 6
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <sstream>
//
// using namespace std;
//
// int main() {
//     string filename = "essay.txt";
//     int wordCount = 0;
//     string word;
//
//     ifstream inputFile(filename);
//
//     if (inputFile.is_open()) {
//         while (inputFile >> word) {
//             wordCount++;
//         }
//
//         inputFile.close();
//
//         cout << "Total words: " << wordCount << endl;
//     } else {
//         cerr << "Unable to open file: " << filename << endl;
//         return 1;
//     }
//
//     return 0;
// }
//
// //problem 7
// #include <iostream>
// #include <fstream>
// #include <string>
//
// using namespace std;
//
// int main() {
//     string filename = "numbers.txt";
//     int sum = 0;
//     int number;
//     ifstream inputFile(filename);
//
//     if (inputFile.is_open()) {
//         while (inputFile >> number) {
//             sum += number;
//         }
//         inputFile.close();
//         cout << "Sum: " << sum << endl;
//     } else {
//         cerr << "Unable to open file: " << filename << endl;
//         return 1;
//     }
//
//     return 0;
// }
//
// //problem 8
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <limits>
//
// using namespace std;
//
// int main() {
//     string filename = "values.txt";
//     ifstream inputFile(filename);
//
//     if (inputFile.is_open()) {
//         int number;
//         int minVal = numeric_limits<int>::max();
//         int maxVal = numeric_limits<int>::min();
//         bool first = true;
//
//         while (inputFile >> number) {
//             if (first) {
//                 minVal = number;
//                 maxVal = number;
//                 first = false;
//             }
//             if (number < minVal) {
//                 minVal = number;
//             }
//             if (number > maxVal) {
//                 maxVal = number;
//             }
//         }
//         inputFile.close();
//         cout << "Max: " << maxVal << ", Min: " << minVal << endl;
//     } else {
//         cerr << "Unable to open file: " << filename << endl;
//         return 1;
//     }
//
//     return 0;
// }
//
// //problem 9
// #include <iostream>
// #include <fstream>
// #include <string>
//
// using namespace std;
//
// struct Student {
//     int id;
//     string name;
//     double gpa;
// };
//
// int main() {
//     Student student;
//     string filename = "student.txt";
//     ofstream outputFile(filename);
//
//     cout << "Enter student ID: ";
//     cin >> student.id;
//     cin.ignore(); // Consume the newline character
//
//     cout << "Enter student name: ";
//     getline(cin, student.name);
//
//     cout << "Enter student GPA: ";
//     cin >> student.gpa;
//
//     if (outputFile.is_open()) {
//         outputFile << student.id << " " << student.name << " " << student.gpa << endl;
//         outputFile.close();
//         cout << "(File contains Zara's record)" << endl;
//     } else {
//         cerr << "Unable to open file: " << filename << endl;
//         return 1;
//     }
//
//     return 0;
// }
//
// //problem 10
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main() {
//     ifstream file("student.txt");
//     if (file.is_open()) {
//         int id;
//         string name;
//         float gpa;
//         file >> id >> name >> gpa;
//         cout << "ID: " << id << ", Name: " << name << ", GPA: " << gpa << endl;
//         file.close();
//     } else {
//         cout << "Unable to open file" << endl;
//     }
//     return 0;
// }
//
// // Problem 11
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main() {
//     ofstream file("class.txt");
//     if (file.is_open()) {
//         for (int i = 0; i < 3; ++i) {
//             int id;
//             string name;
//             float gpa;
//             cout << "Enter student " << i + 1 << " data (ID Name GPA): ";
//             cin >> id >> name >> gpa;
//             file << id << " " << name << " " << gpa << endl;
//         }
//         file.close();
//     } else {
//         cout << "Unable to open file" << endl;
//     }
//     return 0;
// }
//
// // Problem 12
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
//
// int main() {
//     ifstream file("class.txt");
//     if (file.is_open()) {
//         int id;
//         string name;
//         float gpa;
//         while (file >> id >> name >> gpa) {
//             cout << "ID: " << id << ", Name: " << name << ", GPA: " << gpa << endl;
//         }
//         file.close();
//     } else {
//         cout << "Unable to open file" << endl;
//     }
//     return 0;
// }
//
// // Problem 13
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct Date {
//         int day;
//         int month;
//         int year;
//     };
//     Date today;
//     cout << "Enter day, month, and year: ";
//     cin >> today.day >> today.month >> today.year;
//     printf("%02d-%02d-%d\n", today.day, today.month, today.year);
//     return 0;
// }
//
// // Problem 14
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct StudentInfo {
//         int id;
//         int age;
//         char gender;
//         float cga;
//     };
//     StudentInfo student = {101, 19, 'M', 3.4};
//     cout << "Id: " << student.id << ", Age: " << student.age << ", Gender: " << student.gender << ", CGA: " << student.cga << endl;
//     return 0;
// }
//
//
//
// // Problem 15
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct StudentGrade {
//         int lab[5];
//         int homework[3];
//         int exam[2];
//     };
//     StudentGrade grade = {
//         {10, 20, 15, 25, 30},
//         {40, 50, 60},
//         {80, 90}
//     };
//     int total = 0;
//     for (int i = 0; i < 5; ++i) total += grade.lab[i];
//     for (int i = 0; i < 3; ++i) total += grade.homework[i];
//     for (int i = 0; i < 2; ++i) total += grade.exam[i];
//     float average = (float)total / 10;
//     cout << "Total: " << total << ", Average: " << average << endl;
//     return 0;
// }
//
// // Problem 16
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct StudentInfo {
//         int id;
//         int age;
//         char gender;
//         float cga;
//     };
//     StudentInfo students[3];
//     for (int i = 0; i < 3; ++i) {
//         cout << "Enter details for student " << i + 1 << ":\n";
//         cout << "ID: ";
//         cin >> students[i].id;
//         cout << "Age: ";
//         cin >> students[i].age;
//         cout << "Gender: ";
//         cin >> students[i].gender;
//         cout << "CGA: ";
//         cin >> students[i].cga;
//     }
//     for (int i = 0; i < 3; ++i) {
//         cout << "\nDetails for student " << i + 1 << ":\n";
//         cout << "ID: " << students[i].id << ", Age: " << students[i].age << ", Gender: " << students[i].gender << ", CGA: " << students[i].cga << endl;
//     }
//     return 0;
// }
// // Problem 17
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct StudentInfo {
//         int id;
//         int age;
//         char gender;
//         float cga;
//     };
//     StudentInfo student1 = {1, 20, 'M', 3.5};
//     StudentInfo student2;
//     student2 = student1;
//     cout << "Student1: Id=" << student1.id << ", Student2: Id=" << student2.id << " (copied)\n";
//     return 0;
// }
// // Problem 18
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct StudentInfo {
//         int id;
//         int age;
//         char gender;
//         float cga;
//     };
//     StudentInfo students[5] = {
//         {1, 20, 'M', 3.5},
//         {2, 21, 'F', 3.6},
//         {3, 19, 'M', 3.4},
//         {4, 22, 'F', 3.8},
//         {5, 20, 'M', 3.7}
//     };
//     students[4] = students[2];
//     cout << "Student3: Id=" << students[2].id << ", Student5: Id=" << students[4].id << endl;
//     return 0;
// }
// // Problem 19
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct Date {
//         int day;
//         int month;
//         int year;
//     };
//     struct BankAccount {
//         char name[15];
//         int accountNo;
//         double balance;
//         Date birthday;
//     };
//     BankAccount account;
//     cout << "Enter Name: ";
//     cin >> account.name;
//     cout << "Enter AccountNo: ";
//     cin >> account.accountNo;
//     cout << "Enter Balance: ";
//     cin >> account.balance;
//     cout << "Enter Birthday (day month year): ";
//     cin >> account.birthday.day >> account.birthday.month >> account.birthday.year;
//     cout << "Name: " << account.name << ", AccountNo: " << account.accountNo
//               << ", Balance: " << account.balance << ", Birthday: "
//               << account.birthday.day << "-" << account.birthday.month << "-" << account.birthday.year << endl;
//     return 0;
// }
// // Problem 20
//
// #include <iostream>
// #include <cmath>
// using namespace std;
//
// int main() {
//     struct Point {
//         double x;
//         double y;
//     };
//     struct Line {
//         Point p1;
//         Point p2;
//     };
//     Line line;
//     cout << "Enter p1 (x y): ";
//     cin >> line.p1.x >> line.p1.y;
//     cout << "Enter p2 (x y): ";
//     cin >> line.p2.x >> line.p2.y;
//     double distance = sqrt(pow(line.p2.x - line.p1.x, 2) + pow(line.p2.y - line.p1.y, 2));
//     cout << "Distance = " << distance << endl;
//     return 0;
// }
// // Problem 21
//
// #include <iostream>
// #include <cmath>
// #include <iomanip>
// using namespace std;
//
// int main() {
//     struct Point {
//         double x;
//         double y;
//     };
//     struct Triangle {
//         Point p1;
//         Point p2;
//         Point p3;
//     };
//     Triangle triangle;
//     cout << "Enter coordinates for the triangle:\n";
//     cout << "p1 (x y): ";
//     cin >> triangle.p1.x >> triangle.p1.y;
//     cout << "p2 (x y): ";
//     cin >> triangle.p2.x >> triangle.p2.y;
//     cout << "p3 (x y): ";
//     cin >> triangle.p3.x >> triangle.p3.y;
//     double side1 = sqrt(pow(triangle.p2.x - triangle.p1.x, 2) + pow(triangle.p2.y - triangle.p1.y, 2));
//     double side2 = sqrt(pow(triangle.p3.x - triangle.p2.x, 2) + pow(triangle.p3.y - triangle.p2.y, 2));
//     double side3 = sqrt(pow(triangle.p1.x - triangle.p3.x, 2) + pow(triangle.p1.y - triangle.p3.y, 2));
//     double perimeter = side1 + side2 + side3;
//     cout << "Perimeter = " << fixed << setprecision(1) << perimeter << endl;
//     return 0;
// }
// // Problem 22
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct Point {
//         int x;
//         int y;
//     };
//     struct Square {
//         Point vertex[4];
//     };
//     Square square;
//     cout << "Enter coordinates for the square:\n";
//     for (int i = 0; i < 4; ++i) {
//         cout << "Vertex " << i + 1 << " (x y): ";
//         cin >> square.vertex[i].x >> square.vertex[i].y;
//     }
//     int side = abs(square.vertex[0].x - square.vertex[1].x);
//     int area = side * side;
//     cout << "Area = " << area << endl;
//     return 0;
// }
// // Problem 23
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     struct StudentGrade {
//         int lab[5];
//         int homework[3];
//         int exam[2];
//         int total;
//     };
//     StudentGrade grades[3];
//     for (int i = 0; i < 3; ++i) {
//         cout << "Enter grades for student " << i + 1 << ":\n";
//         grades[i].total = 0;
//         cout << "Lab grades (5): ";
//         for (int j = 0; j < 5; ++j) {
//             cin >> grades[i].lab[j];
//             grades[i].total += grades[i].lab[j];
//         }
//         cout << "Homework grades (3): ";
//         for (int j = 0; j < 3; ++j) {
//             cin >> grades[i].homework[j];
//             grades[i].total += grades[i].homework[j];
//         }
//         cout << "Exam grades (2): ";
//         for (int j = 0; j < 2; ++j) {
//             cin >> grades[i].exam[j];
//             grades[i].total += grades[i].exam[j];
//         }
//     }
//     int maxTotal = grades[0].total;
//     int maxIndex = 0;
//     for (int i = 1; i < 3; ++i) {
//         if (grades[i].total > maxTotal) {
//             maxTotal = grades[i].total;
//             maxIndex = i;
//         }
//     }
//     cout << "Student " << maxIndex + 1 << " has the highest total: " << maxTotal << endl;
//     return 0;
// }
// // Problem 24
//
// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;
//
// int main() {
//     struct Contact {
//         char name[30];
//         char phone[15];
//         char email[30];
//     };
//     Contact contacts[10];
//     for (int i = 0; i < 10; ++i) {
//         cout << "Enter contact " << i + 1 << " details:\n";
//         cout << "Name: ";
//         cin.getline(contacts[i].name, 30);
//         cout << "Phone: ";
//         cin.getline(contacts[i].phone, 15);
//         cout << "Email: ";
//         cin.getline(contacts[i].email, 30);
//         cin.ignore();
//     }
//     string searchName;
//     cout << "Enter name to search: ";
//     getline(cin, searchName);
//     for (int i = 0; i < 10; ++i) {
//         if (strcmp(contacts[i].name, searchName.c_str()) == 0) {
//             cout << "Name: " << contacts[i].name << ", Phone: " << contacts[i].phone << ", Email: " << contacts[i].email << endl;
//             return 0;
//         }
//     }
//     cout << "Contact not found." << endl;
//     return 0;
// }
