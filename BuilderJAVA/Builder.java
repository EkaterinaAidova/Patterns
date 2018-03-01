package com.company;

/**
 * Created by rod301-1 on 16.02.2018.
 */
enum Size{
    small,
    medium,
    large
}

interface Builder {
    public void buildWalls(Size size);
    public void buildRoof(String type);
    public void buildVeranda(String type);
    public void buildAttic();
    public void buildGarage();
    public void buildBathHouse();
    public void buildSwimmingPool();
}
