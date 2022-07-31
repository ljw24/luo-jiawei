#include <stdio.h>

typedef struct student
{
    int age;
    int sex;
    int *score;
}stu;

int main()
{
    int a = 10;
    stu stu1 = {1, 2, &a};
    printf("%d, %d", stu1.age, *stu1.score);
}