/*
    Author : Mohammed Rizk
    Email : Mo.Magdy.Rizk@Gmail.com
    Description : The below was a practice of resolving a simple problem of calculating the net value of a salary
                    after taxs
    Git hub acc: Mo.Magdy.Rizk@




*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int basicPayRate = 12.00;
    const float workingHrsPerWeek = 40.00;
    const float overTimeRate = 1.5;
    const float firstTaxLayer = 300.00
    const float firstFixedLayerTax = 300.00 * 0.15;
    const float seconedFixedLayerTax = 150.00 * 0.20;
    const float ThirdTax = 0.25;
    float workedOverTimer = 0;
    float actualWorkinghours = 0;
    float grossPayment = 0;
    float basicRatePayment = 0;
    float overTimePayment = 0;
    float netSalary = 0;

    printf("Please enter the actual working hours: ");
    scanf("%f", &actualWorkinghours);

    if(actualWorkinghours <= workingHrsPerWeek)
    {
        basicRatePayment = actualWorkinghours * basicPayRate;
    }
    else
    {
        workedOverTimer = actualWorkinghours - workingHrsPerWeek;
        printf("Your over time hrs is : %.2f\n", workedOverTimer);
        basicRatePayment = workingHrsPerWeek * basicPayRate;
        overTimePayment = workedOverTimer * overTimeRate;
        printf("Your over time payment is : $ %.2f\n", overTimePayment);


    }
    grossPayment = basicRatePayment + overTimePayment;
    printf("Your gross payment is : $ %.2f\n", grossPayment);

    if(grossPayment <= firstTaxLayer)
    {
        netSalary = grossPayment - firstFixedLayerTax;
    }
    else
    {
        netSalary = grossPayment;
        netSalary = netSalary - firstFixedLayerTax;
        if(netSalary > 0)
        {
            netSalary =  netSalary - seconedFixedLayerTax;
        }
        else
        {
            netSalary = 0;
        }
        if(netSalary > 0)
        {
            netSalary =  netSalary - (netSalary * ThirdTax);
        }
        else
        {
            netSalary = 0;
        }
        printf("Your net payment is : $ %.2f\n", netSalary);
    }

    return 0;
}
