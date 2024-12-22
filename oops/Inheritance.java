package oops;

class Shape {
    String color;

    public void area() {
        System.out.println("displays area");
    }
}

class Triangle extends Shape {
    public void area(int length, int height) { // run-time polymorphism
        System.out.println((1 / 2) * length * height);
    }
}

class EquilateralTriangle extends Triangle {
    public void area(int side, int h) { // run-time polymorphism
        System.out.println((1 / 2) * side * h);
    }
}

class Circle extends Shape {
    public void shape(int r) { // run-time polymorphism
        System.out.println(3.14 * r * r);
    }
}

public class Inheritance {
    public static void main(String[] args) {
        Triangle t1 = new Triangle();
        t1.color = "red";
    }
}