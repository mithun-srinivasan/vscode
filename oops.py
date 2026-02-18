from abc import ABC, abstractmethod

# -----------------------------
# ABSTRACT CLASS (Abstraction)
# -----------------------------

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass


# -----------------------------
# BASE CLASS (Encapsulation)
# -----------------------------

class Person:
    count = 0   # Class Variable (Static equivalent)

    # Constructor
    def __init__(self, name="Unknown", age=0):
        self.__name = name      # Private variable (Encapsulation)
        self.__age = age
        Person.count += 1

    # Getter methods (Abstraction)
    def get_name(self):
        return self.__name

    def get_age(self):
        return self.__age

    # Method Overloading style (Python doesn't support true overloading)
    def greet(self, msg=None):
        if msg:
            print(msg, self.__name)
        else:
            print("Hello!")

    # Method (can be overridden)
    def display(self):
        print("Name:", self.__name)
        print("Age:", self.__age)

    # Destructor
    def __del__(self):
        print("Person object destroyed")


# -----------------------------
# INHERITANCE
# -----------------------------

class Student(Person):
    def __init__(self, name, age, roll):
        super().__init__(name, age)
        self.roll = roll

    # Method Overriding (Runtime Polymorphism)
    def display(self):
        print("Student Details")
        print("Name:", self.get_name())
        print("Age:", self.get_age())
        print("Roll:", self.roll)


# -----------------------------
# MULTILEVEL INHERITANCE
# -----------------------------

class CollegeStudent(Student):
    def __init__(self, name, age, roll, college):
        super().__init__(name, age, roll)
        self.college = college

    def display(self):
        super().display()
        print("College:", self.college)


# -----------------------------
# OPERATOR OVERLOADING
# -----------------------------

class Number:
    def __init__(self, value):
        self.value = value

    def __add__(self, other):     # + operator overloading
        return Number(self.value + other.value)


# -----------------------------
# ABSTRACT CLASS IMPLEMENTATION
# -----------------------------

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        print("Area of Rectangle:", self.length * self.width)


# -----------------------------
# MAIN PROGRAM
# -----------------------------

# Object Creation
p1 = Person("Arun", 45)
p1.greet()
p1.greet("Welcome")
p1.display()

print("------------------")

s1 = Student("Mithun", 19, 101)
s1.display()

print("------------------")

# Runtime Polymorphism
person_ref = s1
person_ref.display()

print("------------------")

# Multilevel Inheritance
cs = CollegeStudent("Rahul", 20, 202, "ABC College")
cs.display()

print("------------------")

# Operator Overloading
n1 = Number(10)
n2 = Number(20)
n3 = n1 + n2
print("Sum using Operator Overloading:", n3.value)

print("------------------")

# Abstract Class
r = Rectangle(5, 4)
r.area()

print("------------------")

# Class Variable
print("Total Persons:", Person.count)

print("------------------")

# Dynamic Object Creation
p2 = Person("Dynamic", 30)
p2.display()
del p2
