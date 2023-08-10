
abstract class Animal
{  
  abstract void eat();  
}  
class Dog extends Animal
{  
void eat()
{
System.out.println("they are eating food");
}  
public static void main(String args[])
{  
 Dog obj = new Dog();  
 obj.eat();  
}  

