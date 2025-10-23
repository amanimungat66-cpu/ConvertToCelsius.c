//Cprogram for converting fahrenheit to celsius
/*
 * Name:Amani Munga Tunje
 * Reg:CT100/G/26225/25
 * Dicription:convert to celsius
 * formula:C=(F-32)*5/9
 */
 
#include <stdio.h>
#include <math.h>

//main function
int main() 
{
    //variable diclaration and initialisarion
    float temperature_F;//in fahrenheit
    float temperature_C;
    
    //prompt user to enter temperature
    printf("Enter the temperature\t");
    scanf("%f",&temperature_F);
    
    //calculatio to convert to celsius
    temperature_C=(temperature_F - 32) * 5/9;
    
    //prompt output as temperature in celsius
    printf("Your temperature in celsius is %.2f",temperature_C);
    return 0;
}