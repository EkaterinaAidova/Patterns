package com.company;

/**
 * Created by rod301-1 on 16.02.2018.
 */
public class Director {
    Builder builder;
    Director(Builder builder){
        this.builder = builder;
    }
    public void setBuilder(Builder builder){
        this.builder = builder;
    }
    public void make(String type,Size size){
        System.out.println("\n\n*******HOUSE "+ type+"*******");
        switch(type){
            case "econom":
                builder.buildWalls(size);
                builder.buildRoof("simple");
                builder.buildAttic();
                builder.buildVeranda("not covered");
                break;
            case "casual":
                builder.buildWalls(size);
                builder.buildRoof("additional window in");
                builder.buildAttic();
                builder.buildVeranda("covered");
                builder.buildGarage();
                break;
            case "luxury":
                builder.buildWalls(size);
                builder.buildRoof("multilevel");
                builder.buildAttic();
                builder.buildVeranda("covered");
                builder.buildGarage();
                builder.buildBathHouse();
                builder.buildSwimmingPool();
                break;
        }
    }
}
