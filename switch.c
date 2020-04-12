#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the food item number :");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Food item - Pizza \nPrice - Rs 239 ");
        break;
        case 2: printf("Food item - Burger \nPrice - Rs 129 ");
        break;
        case 3: printf("Food item - Pasta \nPrice - Rs 179 ");
        break;
        case 4: printf("Food item - French Fries \nPrice - Rs 99 ");
        break;
        case 5: printf("Food item - Sandwich \nPrice - Rs 149 ");
        break;
        default : printf("Food item is not present in our menu");
        break;
    }
    return 0;
}
