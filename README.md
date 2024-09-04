# Employee Management System
<img src="https://github.com/user-attachments/assets/b111db22-2f1f-4cef-b3c8-615e8770ea79" alt="image" width="300"/>
using the 4 principle of the object oriented programming i have simply written a code its help you to grabs the the concept easily
Employee Management System

Overview

This project is a simple C++ program that demonstrates basic principles of object-oriented programming (OOP) using classes and inheritance. It models an employee management system with different types of employees and their associated behaviors.

Features

Abstract Class: Defines a base class with a pure virtual function.
Encapsulation: Uses private members and public getter/setter methods.
Inheritance: Implements derived classes to extend the functionality of the base class.
Polymorphism: Overrides methods in derived classes to provide specific implementations.
Classes

Abstract
An abstract base class with a pure virtual function promotion().
Virtual destructor to ensure proper cleanup.
Employee
Inherits from Abstract.
Encapsulates employee details: Name, Company, and Age.
Methods:
intro(): Displays basic information about the employee.
promotion(): Determines if the employee is eligible for promotion based on age.
work(): Displays a default work message.
Developer
Inherits from Employee.
Adds functionality specific to developers.
Additional attributes:
FavProgrammingLanguage: Favorite programming language.
Methods:
fix(): Displays the developer’s favorite programming language used for fixing bugs.
work(): Overrides the base work() method to include the programming language.
Skills
Inherits from Employee.
Adds functionality related to skills.
Additional attributes:
SkillsSet: List of skills.
Methods:
talent(): Displays the employee’s skill set.
work(): Overrides the base work() method to reflect the employee's proficiency in their skills.

