// helpers.c
#include "helpers.h"

// Helper function to calculate the average of an array of floats
float calculate_average(float data[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return sum / size;
}

// Helper function to convert temperature from Celsius to Fahrenheit
float celsius_to_fahrenheit(float temperature_celsius) {
    return (temperature_celsius * 9.0 / 5.0) + 32.0;
}
