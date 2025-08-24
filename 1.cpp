#include <bits/stdc++.h>
using namespace std;

class Tdate
{
private:
    int day, month, year;

public:
    Tdate() {
    };
    Tdate(int d, int m, int y) : day(d), month(m), year(y) {};
    bool getDate(int &d, int &m, int &y) const
    {
        d = day, m = month, y = year;
        return d == day && month == m && year == y;
    };
    void print()
    {
        cout << year << "年" << month << "月" << day << "日\n";
    };
    Tdate(const Tdate &oldTdate)
    {
        bool ok = oldTdate.getDate(day, month, year);
    };
    ~Tdate() {
    };
    Tdate add(int ad);
};
class Person
{
private:
    char name[20];
    Tdate *birthday;

public:
    Person() : birthday(0)
    {
        name[0] = '\0';
    };
    Person(char n[], Tdate d)
    {
        int len = strlen(n);
        for (int i = 0; i < len; i++)
            name[i] = n[i];
        name[len] = '\0';
        birthday = new Tdate(d);
    }
    void print()
    {
        cout << name << '\n';
        birthday->print();
    };
    ~Person()
    {
        delete birthday;
    };
    Person(const Person &oldPerson)
    {
        strcpy(name, oldPerson.name);
        birthday = new Tdate(*oldPerson.birthday);
    };
    Person(const char *n, int d, int m, int y)
    {
        int len = strlen(n);
        birthday = new Tdate(d, m, y);
        for (int i = 0; i < len; i++)
            name[i] = n[i];
        name[len] = '\0';
    }
};
signed main()
{
    Tdate d1(10, 10, 1000);
    d1.print();
    Tdate d2(d1);
    d2.print();
    Person p1("aaa", d1);
    p1.print();
    Person p2(p1), p3("bbb", 9, 9, 999);
    p2.print(), p3.print();
    return 0;
}