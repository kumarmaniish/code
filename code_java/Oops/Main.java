// Question: Create a Vehicle class with speed and fuel properties. Derive a Car class that adds a model property and a method to display details.

// class Vehicle{
//     public int speed;
//     public String fuel;
    
//     Vehicle(){}
    
//     Vehicle(int speed, String fuel){
//         this.speed=speed;
//         this.fuel=fuel;
//     }
    
//     public void show(){
//         System.out.println("Speed is "+speed+" and fuel is "+fuel);
//     }
// }

// class Car extends Vehicle{
//     public String property;
    
//     Car(){
//         super();
//     };
    
//     Car(int speed, String fuel, String property){
//         super(speed, fuel);
//         this.property=property;
//     }
    
//     void display(){
//         System.out.println("Speed is "+speed+", fuel is "+fuel+", and property is "+property);
//     }
// }

// class A{
//     A(){
//         super();
//         System.out.println("In A");
//     }
    
//     A(int n){
//         super();
//         System.out.println("Int A");
//     }
    
// }

// class B extends A{
//     B(){
//       super(5);
//       System.out.println("In B");
//     }
    
//     B(int n){
//         super();
//         System.out.println("Int B");
//     }
// }


// Polymorphism
// Question: Create a Shape class with a method area(). Derive Circle and Rectangle classes that override area() method.

// class Shape{
//     double area(){
//         System.out.println("Area method in shape class");
//         return 0;
//     }
// }

// class Circle extends Shape{
//     double radius;
    
//     Circle(double radius){
//         this.radius=radius;
//     }
    
//     @Override
//     double area(){
//         return 3.17*radius*radius;
//     }
// }

// class Rectangle extends Shape{
//     double length,breadth;
    
//     Rectangle(double length, double breadth){
//         this.length=length;
//         this.breadth=breadth;
//     }
    
//     @Override
//     double area(){
//         return 2 * length * breadth;
//     }
// }


// // Compile time polymorphism

// class Calculator{
    
//     int add(int a, int b){
//         return a+b;
//     }
    
//     int add(int a, int b, int c){
//         return a+b+c;
//     }
    
//     double add(double a, int b){
//         return a+ b;
//     }
    
// }

// // abstraction

// Imagine you are developing a banking system where customers can perform different types of transactions like withdrawals, deposits, and balance inquiries. However, customers should not be able to see the internal processing details (e.g., how the balance is updated in the database).

// Question:
// How would you implement abstraction in this banking system using Java? Design a class structure demonstrating abstraction and explain its importance in this context.

// abstract class BankAccount{
//     protected double balance;
    
//     BankAccount(double balance){
//         this.balance=balance;
//     }
    
//     abstract void deposit(double amount);
//     abstract void withdraw(double amount);
    
//     public void checkBalance(){
//         System.out.println("Current Balance : $"+balance);
//     }
// }

// class SavingAccount extends BankAccount{
//     SavingAccount(double balance){
//         super(balance);
//     }
    
//     @Override
//     void deposit(double amount){
//         if(amount<0){
//             System.out.println("You have not Sufficient money to deposit in a bank ");
//         }
//         balance += amount;
//         System.out.println("Now Saving Account after deposited balance : $"+balance);
//     }
    
//     @Override
//     void withdraw(double amount){
//         if(amount<0){
//             System.out.println("You have not Sufficient money to deposit in a bank ");
//         }
//         balance -= amount;
//         System.out.println("Now Saving Account after withdraw : $"+balance);
//     }
// }


// Interface
// Scenario:
// You are designing a payment gateway system that supports multiple payment methods, such as Credit Card, UPI, and PayPal. Each payment method must implement the functionality to process a payment and check the payment status.

// Since different payment methods may have unique ways of processing transactions, you decide to use an interface to enforce consistency while allowing flexibility in implementation.
interface PaymentMethod {
    void processPayment(double amount);
    void checkStatus();
}

class CreditCardPayment implements PaymentMethod {
    @Override
    public void processPayment(double amount) {
        System.out.println("Processing credit card payment of $ " + amount);
    }

    @Override
    public void checkStatus() {
        System.out.println("Credit Card Payment: Processed Successfully!");
    }
}

class UPITranscation implements PaymentMethod{
    @Override
    public void processPayment(double amount){
        System.out.println("Processing UPI transcation of $ "+amount);
    }
    
    @Override
    public void checkStatus(){
        System.out.println("UPI Transcation : Pending !");
    }
}


public class Main{
    public static void main(String[] args){
        PaymentMethod myPayment;
        myPayment = new CreditCardPayment(); // Polymorphism
        myPayment.processPayment(4000);
        myPayment.checkStatus();
        
        // BankAccount myAccount = new SavingAccount(1000);
        // myAccount.checkBalance();
        
        // myAccount.deposit(500);
        // myAccount.withdraw(800);
        
        // myAccount.checkBalance();
        
        
        // Calculator c = new Calculator();
        // System.out.println(c.add(4,5));
        // System.out.println(c.add(2,3,5));
        // System.out.println(c.add(2.0,7));
        
        
        // System.out.println("For Inheritence");
        
        // Shape shape;
        
        // shape=new Circle(5);
        // System.out.println(shape.area());
        // shape=new Rectangle(4,5);
        // System.out.println(shape.area());
        
        // Vehicle v1 = new Vehicle(53, "Diseal");
        // v1.show();
        
        // Car c1 = new Car();
        // c1.speed=80;
        // c1.fuel="Petrol";
        // c1.property="Automatic park. ";
        
        // c1.display();
        // c1.show();
    }
}
