#include <stdio.h>
int main()

 {
    float s1,s2,s3,s4,s5,Avg1;
    printf("Enter the marks of s1,s2,s3,s4,s5:\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    Avg1=(s1+s2+s3+s4+s5)/5;
    printf("Average mark: %.2f\n", Avg1);
    char grade;
if(Avg1>80)
   {
        printf("grade A\n");
    }
     else if(Avg1>60)
    {
        printf("grade B\n");
    }
    else if(Avg1>40)
    {
        printf("grade C\n");
    }
    else
    {
        printf("grade D\n");
    }
}
