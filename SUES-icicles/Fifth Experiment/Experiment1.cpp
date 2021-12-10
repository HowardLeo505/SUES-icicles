#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    string sex;
    int age;
public:
    Person() {
        name = "";
        sex = "";
        age = 0;
    }
    Person(string name1, string sex1, int age1) {
        name = name1;
        sex = sex1;
        age = age1;
    }
    void outputP() {
        cout << "姓名：" << name << endl;
        cout << "性别：" << sex << endl;
        cout << "年龄：" << age << endl;
    }
};

class Student :Person
{
private:
    string id;
    string major;
public:
    Student() :Person() {
        id = "";
        major = "";
    }
    Student(string name0, string sex0, int age0, string id0, string major0) :Person(name0, sex0, age0) {
        id = id0;
        major = major0;
    }
    void outputS()
    {
        outputP();
        cout << "学号：" << id << endl;
        cout << "专业：" << major << endl;
    }
};

class Teacher :Person
{
private:
    string lesson;
public:
    Teacher() :Person() {
        lesson = "";
    }
    Teacher(string name0, string sex0, int age0, string lesson0) :Person(name0, sex0, age0) {
        lesson = lesson0;
    }
    void outputT()
    {
        outputP();
        cout << "课程：" << lesson << endl;
    }
};

int main()
{
    Person ps;
    Student stu;
    Teacher tea;
    string name, sex,id,major, lesson;
    int age;
    cout << "无参构造函数输出" << endl;
    cout << "Person类" << endl;
    ps.outputP();
    cout << "Student类" << endl;
    stu.outputS();
    cout << "Teacher类" << endl;
    tea.outputT();
    cout << "有参构造函数输出" << endl;
    cout << "Person类" << endl;
    cin >> name;
    cin >> sex;
    cin >> age;
    ps = Person(name, sex, age);
    cout << "--信息输出--" << endl;
    ps.outputP();
    cout << "Student类" << endl;
    cin >> name;
    cin >> sex;
    cin >> age;
    cin >> id;
    cin >> major;
    stu = Student(name, sex, age, id, major);
    cout << "--信息输出--" << endl;
    stu.outputS();
    cout << "Teacher类" << endl;
    cin >> name;
    cin >> sex;
    cin >> age;
    cin >> lesson;
    tea = Teacher(name, sex, age, lesson);
    cout << "--信息输出--" << endl;
    tea.outputT();
    return 0;
}