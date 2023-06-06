#include <stdio.h>

int main(void){

    draw_header();

    //--Declare variables
    float distance_a;
    float price_a;

    float distance_b;
    float price_b;

    int estimated_litres;

    float fuel_consumption;
    float fuel_consumption_updated;

    //--Prompt user for values

    //Car questions
    printf("How many litres your car uses to make a 100Kms\?\n");
    scanf("%f", &fuel_consumption);
    printf("How many litres of fuel do you expect to fuel up\?\n");
    scanf("%d", &estimated_litres);
    //Pump A
    printf("Distance from your location to the nearest fuel station to compare, in Kms:\n");
    printf("And the fuel price for that pump:\n");
    scanf("%f %f", &distance_a, &price_a);
    //Pump B
    printf("Distance from your location to the furthest fuel station to compare, in Kms:\n");
    printf("And the fuel price for that pump:\n");
    scanf("%f %f", &distance_b, &price_b);

    //--Functions for calculations
    

    return 0;
}

void draw_header(void){

    printf("Welcome to Fill-UpWise\n");
    printf("=======================\n\n");
    printf("Provide the details and find out whether it's worth travelling somewhere to fill up or not\n\n");
    printf("NOTE: You are asked to have previous knowledge of your car's fuel consumption and an estimate\nof how many litres you're going to fil up");
}