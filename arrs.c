/*
 * Ethan Shenker
 * Assignment 7
 * Oct. 15, 2020
 */

#include <stdio.h>
#include <stdlib.h>

float average(int arr[], int length);
void copy(int arr0[], int arr1[], int length);
int str_length(char str[]);

int main()
{
    int arr[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        arr[i] = i;
    }

    float average_val = average(arr, 6);
    printf("average of 0-5 = %0.2f\n", average_val);

    int arr0[5];
    int arr1[5];

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        arr0[i] = i;
        printf("arr0[%d] = %d\n", i, arr0[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        arr1[i] = i + 5;
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    printf("\n");
    printf("\n");

    copy(arr0, arr1, 5);

    printf("After copying:\n");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("arr0[%d] = %d\n", i, arr0[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    printf("\n");
    char str[9] = "Something"; // 9 chars
    int len = str_length(str);
    printf("the length of the str is %d char(s)\n", len);
}

float average(int arr[], int length)
{
    float average = 0;
    int i;

    for (i = 0; i < length; i++)
    {
        average += *arr;
        arr++;
    }
    return average / length;
}

void copy(int arr0[], int arr1[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        *arr1 = *arr0;

        arr0++;
        arr1++;
    }
}

int str_length(char str[])
{
    int length = 0;
    while (*str != 0 && *str != '\0')
    {
        length++;
        str++;
    }
    return length;
}