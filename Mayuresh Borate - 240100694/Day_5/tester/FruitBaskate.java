package com.cdac.tester;
//import com.cdac.fruits.Apple;
//import com.cdac.fruits.Mango;
//import com.cdac.fruits.Orange;
import com.cdac.fruits.*;

import java.util.Arrays;
import java.util.Scanner;
public class FruitBaskate {

	

	public static void main(String[] args) {
		/*Apple a=new Apple("Red",25,"Apple",true);
		System.out.println("Apple Taste ="+a.taste());
		System.out.println("Apple Details ="+a);
		
		Mango m=new Mango("Yellow",45,"Mango",false);
		System.out.println("Mango Taste ="+m.taste());
		System.out.println("Mango Taste ="+m);
		
		Orange o=new Orange("Orange",34,"Orange",true);
		System.out.println("Orange Taste ="+o.taste());
		System.out.println("Orange Taste ="+o);
	   */
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter Fruits Capacity ;");
         Fruits [] fruit = new Fruits[sc.nextInt()];
         int counter=0;
         boolean exits=false;
         while(!exits)
         {
        	 System.out.println("Enter Choice \n1:Add Apple\n 2:Add Mango\n 3:Add Orange\n 4:Display Details\n 0:Exit");
        	 switch(sc.nextInt())
        	 {
        	 case 1: // Add Apple
        		 System.out.println("Enter Apple Details : color weight name fresh ");
        		 Apple p=new Apple();
        		 if(counter<fruit.length)
        		 {
        			  
        			 fruit[counter]=new Apple(sc.next(),sc.nextDouble(),sc.next(),sc.nextBoolean());
        			 counter++;
        			 System.out.println("Add Apple in FruitBasket ....");
        			 
        		 }
        		 break;
        		 
        	 case 2: // Add Mango
        		 Mango m=new Mango();
        		 if(counter<fruit.length)
        		 {
        			 System.out.println("Enter Mango Details : color weight name fresh ");
        			 fruit[counter]=new Mango(sc.next(),sc.nextDouble(),sc.next(),sc.nextBoolean());
        			 counter++;
        			 System.out.println("Add Mango in FruitBasket ....");
        			
        		 }
        		 break;
        		 
        	 case 3: // Add orange
        		 Orange o=new Orange();
        		 if(counter<fruit.length)
        		 {
        			 System.out.println("Enter Orange Details : color weight name fresh ");
        			 fruit[counter]=new Orange(sc.next(),sc.nextDouble(),sc.next(),sc.nextBoolean());
        			 counter++;
        			 System.out.println("Add Orange in FruitBasket ....");
        			
        		 }
        		 break;
        		 
        	 case 4:// Display fruit details
        		 System.out.println("Fruits Details :");
        		 System.out.println(Arrays.toString(fruit));
        		 for(Fruits f:fruit)
        		 {
        			 if(f!=null)
        			 {
        				 System.out.println("Details of Fruits = "+f);
        			 }
        		 }
        		 break;
        	 case 0:
        		 exits=true;
        	 }
         }
	}

}
