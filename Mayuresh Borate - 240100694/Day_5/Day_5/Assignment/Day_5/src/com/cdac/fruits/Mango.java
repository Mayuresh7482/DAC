package com.cdac.fruits;
import java.util.Scanner;
public class Mango extends Fruits 
{
    Scanner sc=new Scanner(System.in);
	public Mango(String colour,double weight,String name,boolean fresh)
	{
		super("Mango"+colour,weight,name,fresh);
		
	}
	public Mango()
	{
		
	}
	public String taste()
	{
		return "Sweet  !";
	}
	public void pulp()
	{
		Fruits f1=new Fruits();
		
		f1.setName(sc.next());
		f1.setWeight(sc.nextDouble());
		System.out.println("Name of Mango "+f1.getName());
		System.out.println("Weight of Mango "+f1.getWeight());
		System.out.println("creating pulp !");
	}
}
