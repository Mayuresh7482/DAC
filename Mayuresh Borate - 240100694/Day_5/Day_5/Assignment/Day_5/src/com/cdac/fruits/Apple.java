package com.cdac.fruits;
import java.util.Scanner;
public class Apple extends Fruits
{ 
	 Scanner sc=new Scanner(System.in);
	public Apple(String colour,double weight,String name,boolean fresh)
	{
		super("Apple"+" "+ colour , weight , name , fresh );
		
	}
	public Apple()
	{
		
	}
	public String taste()
	{
		return "Sweet and Sour !";
	}

	public void jam()
	{
		Fruits a1=new Fruits();
		
		a1.setName(sc.next());
		a1.setWeight(sc.nextDouble());
		System.out.println("Name of Apple "+a1.getName());
		System.out.println("Weight of Apple "+a1.getWeight());
		System.out.println("Making Jam !");
	}

}
