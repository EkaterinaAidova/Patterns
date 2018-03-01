package com.company;

/**
 * Created by rod301-1 on 16.02.2018.
 */
public class WoodHouse implements Builder {
    public void buildWalls(Size size) {
        System.out.println(size.toString()+"wood house");
    }
    public void buildRoof(String type){
        System.out.println(type+"wood triangular roof");
    }
    public void buildVeranda(String type){
        System.out.println(type+"wood veranda");
    }
    public void buildAttic(){
        System.out.println("wood attic with window");
    }
    public void buildGarage(){
        System.out.println("brick garage");
    }
    public void buildBathHouse(){
        System.out.println("bath room into the first floor");
    }
    public void buildSwimmingPool(){
        System.out.println("swimming pool into the first floor");
    }
}
