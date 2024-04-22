#include <stdio.h>
#include <math.h>

int main() {
    float age_in_days;
    printf("\nEnter your age (days): ");
    scanf("%f", &age_in_days);
    float age_in_years = age_in_days / 365.25, sleep_needed;
    if (age_in_years < 0.0 || age_in_years > 122.45) {
        printf("\nPlease enter a valid age.\n");
        return main();
    }

    if (age_in_years < 0.66667) sleep_needed = -4.0 * age_in_years + 16.167;
    else if (age_in_years < 2.0) sleep_needed = -0.75 * age_in_years + 14.0;
    else if (age_in_years < 4.5) sleep_needed = -0.4 * age_in_years + 13.333;
    else if (age_in_years < 10.0) sleep_needed = -0.27273 * age_in_years + 12.727;
    else if (age_in_years < 22.0) sleep_needed = -0.16667 * age_in_years + 11.667;
    else if (age_in_years < 45.5) sleep_needed = 8.0;
    else sleep_needed = -0.018797 * age_in_years + 8.8553;
    
    int sleep_needed_hours = sleep_needed, sleep_needed_minutes = (round((sleep_needed - sleep_needed_hours) * 12)) * 5;
    printf("\n\nYou need around %d hours %d minutes of sleep every day.\n", sleep_needed_hours, sleep_needed_minutes);
    printf("\n(Source: https://www.sleephealthjournal.org/article/S2352-7218(15)00015-7/fulltext?_gl=1*fffmct*_ga*NTc5OTY5NjI2LjE3MTEzMzA4Mzg.*_ga_4NJJ62HMGF*MTcxMTMzMDgzNy4xLjEuMTcxMTMzMDkyNi42MC4wLjA.)\n\n");
    return 0;
}