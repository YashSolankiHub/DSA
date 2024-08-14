/*  task : Given an array prices[] of length N, representing the prices of the stocks on different days, 
the task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed.  */ 



// Day 1: Price = 700
// Day 2: Price = 100
// Day 3: Price = 500
// Day 4: Price = 300
// Day 5: Price = 600
// Day 6: Price = 400

/* In order to maximize the profit, we have to minimize the cost price and maximize the selling price.
So at every step, we will keep track of the minimum buy price of stock encountered so far.
If the current price of stock is lower than the previous buy price, then we will update the buy price,
else if the current price of stock is greater than the previous buy price then we can sell at this price to get some profit. 
After iterating over the entire array, return the maximum profit. */

#include <stdio.h>
    int
    maxProfit(int price[], int size)
{

    int buy = price[0];
    int maxProfit = 0;
    for (int i = 1; i < size; i++)
    {
        if (price[i] < buy)
        {
            buy = price[i];
        }
        else if (price[i] - buy > maxProfit)
        {
            maxProfit = price[i] - buy;
        }
    }
    return maxProfit;
}

void main()
{
    int price[] = {700, 100, 500, 300, 600, 400};
    int size = sizeof(price) / sizeof(int);
    int mp = maxProfit(price, size);
    printf("Maximum profit :%d", mp);
}