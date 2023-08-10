
abstract class Animal{  
  abstract void eat();  
}  
class Dog extends Animal{  
void eat(){
System.out.println("they are eating food");
}  
public static void main(String args[]){  
 Animal obj = new Dog();  
 obj.eat();  
}  
}  