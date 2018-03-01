package com.company;

/**
 * Created by rod301-1 on 16.02.2018.
 */
public class BrickHouse implements Builder {
    public void buildWalls(Size size) {
        System.out.println(size.toString()+"brick house");
    }
    public void buildRoof(String type){
        System.out.println(type + "wood triangular roof");
    }
    public void buildVeranda(String type){
        System.out.println(type+"brick veranda");
    }
    public void buildAttic(){
        System.out.println("brick attic without window");
    }
    public void buildGarage(){
        System.out.println("brick garage");
    }
    public void buildBathHouse(){
        System.out.println("bath room attached to house");
    }
    public void buildSwimmingPool(){
        System.out.println("swimming pool near the house in the garden");
    }
}
