/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.
*/
#include<stdio.h>
int main()
{

     float cp,sp,profit,loss;
     printf("\nEnter the cost Price & Selling price\n: ");
     scanf("%f\n%f",&cp,&sp);


    if(cp<sp)
    {
        profit = ((sp-cp)/cp)*100;

        printf("\nProfit Percentage =%.2f",profit);
    }
    else{
        loss = ((cp-sp)/cp)*100;
        printf("\nLoss Percentage =%.2f",loss);


    }


return 0;
    

}   


