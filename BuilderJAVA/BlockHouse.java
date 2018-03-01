package com.company;

/**
 * Created by rod301-1 on 16.02.2018.
 */
public class BlockHouse implements Builder {
    public void buildWalls(Size size) {
        System.out.println(size.toString()+"block house");
    }
    public void buildRoof(String type){
        System.out.println(type+"block plane roof");
    }
    public void buildVeranda(String type){
        System.out.println(type+"block veranda");
    }
    public void buildAttic(){
        System.out.println("block plane attic");
    }
    public void buildGarage(){
        System.out.println("block garage");
    }
    public void buildBathHouse(){
        System.out.println("bath room into the basement");
    }
    public void buildSwimmingPool(){
        System.out.println("swimming pool into the basement");
    }
}
