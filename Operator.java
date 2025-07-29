package Basics;

public class Operator{
    public static void main(String[] args) {
        int a = 30;
        int b = 20;

        // Arithmetic Operators
        System.out.println("Arithmetic Operators:");
        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b));
        System.out.println("a % b = " + (a % b));
        System.out.println();

        // Increment and Decrement Operators
        System.out.println("Increment and Decrement Operators:");
        System.out.println("Pre-increment (++a) = " + (++a)); // a becomes 31
        System.out.println("Pre-decrement (--a) = " + (--a)); // a back to 30
        System.out.println("Post-increment (b++) = " + (b++)); // b printed then becomes 21
        System.out.println("Post-decrement (b--) = " + (b--)); // b printed then becomes 20 again
        System.out.println("Value of b after post operations = " + b); // 20
        System.out.println();

        // Relational Operators
        System.out.println("Relational Operators:");
        System.out.println("a < b  = " + (a < b));
        System.out.println("a <= b = " + (a <= b));
        System.out.println("a > b  = " + (a > b));
        System.out.println("a >= b = " + (a >= b));
        System.out.println("a == b = " + (a == b));
        System.out.println("a != b = " + (a != b));
        System.out.println();

        // Bitwise Operators
        System.out.println("Bitwise Operators:");
        System.out.println("a & b = " + (a & b)); // AND
        System.out.println("a | b = " + (a | b)); // OR
        System.out.println("a ^ b = " + (a ^ b)); // XOR
        System.out.println();

        // Bitwise Complement Operator
        System.out.println("Bitwise Complement Operator:");
        System.out.println("~a = " + (~a)); // Flips all bits of a
    }
}
