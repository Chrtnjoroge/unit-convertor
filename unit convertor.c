// This project is for unit conversion.

#include <stdio.h>

int main()
{
    char input, select, start;
    // Conversion table.
    // Length.
    float KmtoM = 1000;
    float MtoCm = 100;
    float Feettoinches = 12;
    float YardstoFeet = 3;
    // Mass.
    float KgtoG = 1000;
    float GtoMg = 1000;
    float PoundstoOunces = 16;
    // Temperature.
    float DegreeCelciustoFahrenheit = 1.8;
    float DegreeCelciustoKelvin = 273.15;
    float FahrenheittoKelvin = 255.372;
    float first, solution;

    printf("If you would like to start with the conversion press 's' then the enter button.\n");
    scanf("%c", &start);

    if (start == 's')
    {
        // This are the available units of measurment.
        printf("Choose an option from the listed units then press enter.\n");
        printf("1. Length.\n2. Mass.\n3. Temperature.\n\n");
        scanf("%s", &input);

        switch (input)
        {
        // length conversion.
        case '1':
            printf("You chose conversion of units in length.\n");
            printf("Choose an option then press enter.\n");
            printf("a. Km to M\nb. M to Cm\nc. Feet to Inches\nd. Yards to Feet\n\n");
            scanf(" %c", &select);

            if (select == 'a')
            {
                printf("Enter value in Km: \n");
                scanf("%f", &first);
                solution = first * KmtoM;
                printf("%f kilometers is %f meters.\n", first, solution);
            }
            else if (select == 'b')
            {
                printf("Enter value in M: \n");
                scanf("%f", &first);
                solution = first * MtoCm;
                printf("%f meters is %f centimeters.\n", first, solution);
            }
            else if (select == 'c')
            {
                printf("Enter value in Feet: \n");
                scanf("%f", &first);
                solution = first * Feettoinches;
                printf("%f feet is %f inches.\n", first, solution);
            }
            else if (select == 'd')
            {
                printf("Enter value in Yards: \n");
                scanf("%f", &first);
                solution = first * YardstoFeet;
                printf("%f yards is %f feet.\n", first, solution);
            }
            break;
            // mass conversion.
        case '2':
            printf("You chose conversion of units in Mass.\n");
            printf("Choose an option then press enter.\n");
            printf("a. Kg to G\nb. G to Mg\nc. Pounds to Ounces\n\n");
            scanf(" %c", &select); // add a space before %c to consume any newline character

            if (select == 'a')
            {
                printf("Enter value in Kg: \n");
                scanf("%f", &first);
                solution = first * KgtoG;
                printf("%f in kilograms is %f grams.\n", first, solution);
            }
            else if (select == 'b')
            {
                printf("Enter value in G: \n");
                scanf("%f", &first);
                solution = first * GtoMg;
                printf("%f in grams is %f milligrams.\n", first, solution);
            }
            else if (select == 'c')
            { // add condition to check against
                printf("Enter value in Pounds: \n");
                scanf("%f", &first);
                solution = first * PoundstoOunces;
                printf("%f in Pounds is %f ounces.\n", first, solution); // add semicolon here
            }
            break;
            // temperature conversion.
        case '3':
            printf("You chose conversion of units in Temperature.");
            printf("Choose an option then press enter.\n");
            printf("a. Degree Celcius to Fahrenheit \n b. Degree Celcius to Kelvin\n c. Fahrenheit to Kelvin \n\n");
            scanf(" %c", &select);

            if (select == 'a')
            {
                printf("Enter value in Degree celcius: \n");
                scanf("%f", &first);
                solution = first * DegreeCelciustoFahrenheit;
                printf("%f in degree celcius is %f fahrenheit.\n", first, solution);
            }
            else if (select == 'b')
            {
                printf("Enter value in Degree Celcius: \n");
                scanf("%f", &first);
                solution = first * DegreeCelciustoKelvin;
                printf("%f in kilometers is %f kelvin.\n", first, solution);
            }
            else if (select == 'c')
            {
                printf("Enter value in Fahrenheit: \n");
                scanf("%f", &first);
                solution = first * FahrenheittoKelvin;
                printf("%f in kilometers is %f kelvin.\n", first, solution);
            }
            break;

        default:
            break;
        }
    }
    else
    {
        printf("Quitting the program.\n");
    }

    return 0;
}