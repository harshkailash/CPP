package oops;

class Student {
    String name;
    int age;

    public void printInfo() {
        System.out.println("name is " + this.name);
        System.out.println("age is " + this.age);
    }

    public void printInfo(String name) { // method overloading
        System.out.println("name is " + this.name);
    }

    public void printInfo(int age) { // method overloading
        System.out.println("age is " + this.age);
    }

    Student() {
        System.out.println("constructor called");
    }

    Student(String name, int age) { // constructor overloading
        this.name = name;
        this.age = age;
    }
}

public class constructor {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student("Arth", 21);
        s1.name = "Harsh";
        s1.age = 24;

        s1.printInfo();
        s2.printInfo();
        s1.printInfo(s1.name);
    }
}

/*
 * these are of 3 types - non-parameterized
 * 
 * Same name as the class
 * does not return anything and no return type
 * It can be call only once when the object of a class is created
 */

/*******************************************************************************/

/*
 * Polymorphism
 * 
 * compile time-->constructor overloading /method overloading/ function
 * overloading
 */