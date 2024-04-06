package com.cdac.fruits;

public class Fruits {
	private String colour;
	private double weight;
	private String name;
	private boolean fresh;

	public Fruits(String colour, double weight, String name, boolean fresh) {
		this.colour = colour;
		this.weight = weight;
		this.name = name;
		this.fresh = fresh;
	}

	public Fruits() {

	}

	public String taste() {
		return "No sepcific Taste !";
	}

	public String toString() {
		return colour + " " + weight + " " + name + " ";
	}

	public String getColour() {
		return colour;
	}

	public void setColour(String colour) {
		this.colour = colour;
	}

	public double getWeight() {
		return weight;
	}

	public void setWeight(double weight) {
		this.weight = weight;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public boolean isFresh() {
		
		return fresh;
	}

	public void setFresh(boolean fresh) {
		this.fresh = fresh;
	}

}
