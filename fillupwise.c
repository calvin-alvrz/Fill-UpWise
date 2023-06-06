#include <stdio.h>

int main(void){

    //--Function for header

    draw_header();

    //--Declare variables

    float distance_a;
    float price_a;

    float distance_b;
    float price_b;

    int estimated_litres;

    float fuel_consumption;

    float total_a;
    float total_b;

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

    float fuel_consumption_updated = 100 / fuel_consumption;

    total_a = calculate_total(fuel_consumption_updated, estimated_litres, distance_a, price_a);
    total_b = calculate_total(fuel_consumption_updated, estimated_litres, distance_b, price_b);

    //--Final Output

    final_output(total_a, total_b);

    return 0;
}

void draw_header(void){

    printf("Welcome to Fill-UpWise\n");
    printf("=======================\n\n");
    printf("Provide the details and find out whether it's worth travelling somewhere to fill up or not\n\n");
    printf("NOTE: You are asked to have previous knowledge of your car's fuel consumption and an estimate\n");
    printf("of how many litres you're going to fil up\n\n");
}

float calculate_total(float fue_c, int est_l, float dist, float pri){

    float total_fuel_price;
    float number_litres_trip;
    float total_trip;

    //Total Fuel Price is the multiplication between the estimated amount of litres and the respective price for each station
    total_fuel_price = est_l * pri;
    //Number Litres Trip is the number of litres it will be necessary for the car to travel to the station and back based on its fuel consumption
    number_litres_trip = (2 * dist) / fue_c;
    //Total Trip is the multiplication between the number of litres used and the price for each respective estation
    total_trip = number_litres_trip * pri;

    return total_fuel_price + total_trip;
}

void final_output(float final_a, float final_b){

    if (final_a < final_b)
    {
        printf("You will save $%.2f by going to the nearest gas station.\n", final_b - final_a);
    }
    else if (final_b < final_a)
    {
        printf("You will save $%.2f by going to the furthest gas station.\n", final_a - final_b);
    }
}