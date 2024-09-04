#include <iostream>
#include <string>

using namespace std;

class Abstract {
public:
    virtual ~Abstract() = default; 
    virtual void promotion() const = 0; 
};

class Employee : public Abstract {
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(const string& name, const string& company, int age)
        : Name(name), Company(company), Age(age) {}

    void setName(const string& name) { Name = name; }
    string getName() const { return Name; }
    void setCompany(const string& company) { Company = company; }
    string getCompany() const { return Company; }
    void setAge(int age) { Age = age; }
    int getAge() const { return Age; }

    void intro() const {
        cout << getName() << " is the employee of " << getCompany() << endl;
        cout << getName() << " is " << getAge() << " years old" << endl;
    }

    void promotion() const override {
        if (Age >= 30) {
            cout << getName() << " will get promotion" << endl;
        } else {
            cout << getName() << " Sorry you will not be promoted" << endl;
        }
    }

    virtual void work() const {
        cout << getName() << " is working on a NASA project for upcoming years.." << endl;
    }
};

class Developer : public Employee {
private:
    string FavProgrammingLanguage;

public:
    Developer(const string& name, const string& company, int age, const string& favProgrammingLanguage)
        : Employee(name, company, age), FavProgrammingLanguage(favProgrammingLanguage) {}

    void fix() const {
        cout << getName() << " is using " << FavProgrammingLanguage << " to fix the bugs in the program" << endl;
    }

    void work() const override {
        cout << getName() << " is working on a NASA project using " << FavProgrammingLanguage << endl;
    }
};

class Skills : public Employee {
private:
    string SkillsSet;

public:
    Skills(const string& name, const string& company, int age, const string& skillsSet)
        : Employee(name, company, age), SkillsSet(skillsSet) {}

    void talent() const {
        cout << getName() << " has many skills in " << SkillsSet << endl;
    }

    void work() const override {
        cout << getName() << " is working on a NASA project because they are proficient in " << SkillsSet << endl;
    }
};

int main() {
    Employee emp1("Sankar Das", "Google", 19);
    Developer d1("Sankar Das", "Google", 19, "C++");
    Skills s1("Sankar Das", "Google", 19, "MERN, Node.js, JavaScript, React, C++, Java, Python and many more...");

    emp1.intro();
    emp1.promotion();
    d1.fix();
    s1.talent();
    emp1.work();
    d1.work();
    s1.work();

    return 0;
}
