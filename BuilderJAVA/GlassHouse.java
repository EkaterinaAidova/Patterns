package com.company;

/**
 * Created by rod301-1 on 16.02.2018.
 */
public class GlassHouse implements Builder {
    public void buildWalls(Size size) {
        System.out.println(size.toString()+"glass house");
    }
    public void buildRoof(String type){
        System.out.println(type + "glass square roof");
    }
    public void buildVeranda(String type){
        System.out.println(type+"glass veranda");
    }
    public void buildAttic(){
        System.out.println("glass attic");
    }
    public void buildGarage(){
        System.out.println("brick garage");
    }
    public void buildBathHouse(){
        System.out.println("wood bath room attached to house ");
    }
    public void buildSwimmingPool(){
        System.out.println("swimming pool in the garden");
    }
}
