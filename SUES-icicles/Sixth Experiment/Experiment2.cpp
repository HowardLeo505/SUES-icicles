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
    Person()
    {
        name = "";
        sex = "";
        age = 0;
    }
    Person(string name0, string sex0, int age0)
    {
        name = name0;
        sex = sex0;
        age = age0;
    }
    virtual void display()
    {
        cout << "姓名：" << name << endl;
        cout << "性别：" << sex << endl;
        cout << "年龄：" << age << endl;
    }
};

class Student :public Person
{
private:
    string id;
    string major;
public:
    Student() :Person()
    {
        id = "";
        major = "";
    }
    Student(string name1, string sex1, int age1, string id1, string major1) :Person(name1, sex1, age1)
    {
        id = id1;
        major = major1;
    }
    void display()
    {
        cout << "学号：" << id << endl;
        cout << "专业：" << major << endl;
    }
};

class Teacher :public Person
{
private:
    string lesson;
public:
    Teacher() :Person()
    {
        lesson = "";
    }
    Teacher(string name2, string sex2, int age2, string lesson2) :Person(name2, sex2, age2)
    {
        lesson = lesson2;
    }
    void display()
    {
        cout << "课程：" << lesson ;
    }
};

int main()
{
    Person* p;
    Teacher* t;
    Person ps;
    Student student;
    Teacher teacher;
    string name, sex, id, major, lesson;
    int age;
    cout << "Person类" << endl;
    cout << "姓名：";
    cin >> name;
    cout << "性别：";
    cin >> sex;
    cout << "年龄：";
    cin >> age;
    ps = Person(name, sex, age);
    cout << "--信息输出--" << endl;
    p = &ps;
    p->display();
    cout << "Student类" << endl;
    cout << "学号：";
    cin >> id;
    cout << "专业：";
    cin >> major;
    student = Student(name, sex, age, id, major);
    cout << "--信息输出--" << endl;
    p = &student;
    p->display();
    cout << "Teacher类" << endl;
    cout << "课程：";
    cin >> lesson;
    teacher = Teacher(name, sex, age, lesson);
    cout << "--信息输出--" << endl;
    t = &teacher;
    t->display();
}