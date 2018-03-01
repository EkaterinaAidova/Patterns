package com.company;

public class Main {

    public static void main(String[] args) {
        BlockHouse blockH = new BlockHouse();
        BrickHouse brickH = new BrickHouse();
        WoodHouse woodH = new WoodHouse();
        GlassHouse glassH = new GlassHouse();

	    Director director = new Director(blockH);
	    director.make("econom", Size.medium);

	    director.setBuilder(brickH);
        director.make("luxury", Size.medium);

        director.setBuilder(woodH);
        director.make("casual", Size.small);

        director.setBuilder(glassH);
        director.make("luxury", Size.large);
    }
}
