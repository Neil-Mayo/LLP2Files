#include <stdio.h>
#include <string.h> /* strlen */
#include <ctype.h>  /* isdigit */
#include <stdlib.h> /* atoi, rand, srand */
#include <time.h>   /* time */

#define TRUE 1
#define FALSE 0
#define BOOL int

void q1(){
    
    
    int no1; //creation of a normal int
    int no2;
  

    printf("Enter a number:");
    scanf("%d", &no1);
     printf("Enter another number:");
    scanf("%d", &no2);

    printf("hey,\nThe first number is %d" , no1);
    printf("\nand the second number is %d" , no2);
    printf("\nThe sum of the two numbers is %d", no1+no2);
     printf("\nThe average of the two numbers is %d", (no1+no2) / 2);
     printf("\nThe sum of squares: %d\n", (no1 * no1) + (no2 * no2));

}

 struct person{
        char firstName[20];
        char lastName[20];
        int age;
        char id[10];
    }; 

void q2(){
   

    struct person p;

    printf("Enter your details:");

    printf("\nYour first name: ");
    scanf("%s", &p.firstName);

    printf("\nYour last name: ");
    scanf("%s", &p.lastName);

     printf("\nYour age: ");
    scanf("%s", &p.age);

    printf("\nYour Id: ");
    scanf("%s", &p.id);

    printf("\nYour first name is: %s", p.firstName);
    printf("\nYour last name is: %s", p.lastName);
    printf("\nYour age is: %d", p.age);
    printf("\nYour ID is: %s", p.id);
}


int main(){
    //printf("Enter two numbers:");
    q2();
    printf("\n");
    //return 0;
}