package com.company;

import java.util.ArrayList;

public class Tour {
    private int days;
    private int count;
    private String hotel;
    private ArrayList<Program> tourProgram;

    public ArrayList<Program> getTourProgram() {
        return tourProgram;
    }

    public int getCount() {
        return count;
    }

    public void setCount(int count) {
        this.count = count;
    }

    public int getDays() {
        return days;
    }

    public String getHotel() {
        return hotel;
    }

    public void setDays(int days) {
        this.days = days;
    }

    public void setHotel(String hotel) {
        this.hotel = hotel;
    }
    public void addProgram(Program pr) {
        tourProgram.add(pr);
    }

    public Tour() {
        hotel = null;
        days = 1;
        count = 1;
    }
}
