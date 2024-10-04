#include<stdio.h>
#include<conio.h>

struct student
{
   unsigned int stno;
    char name[15];
    
    int phy;
    int che;
    int mat;
    int tot;
    float per;
    int rank;

};
void avg(struct student *stu);
void main()
{
     int n,i;
     struct student stu[10];
     printf ("Enter the number of Students to enter the data\n");
      scanf("%d",&n);
     printf("Enter the following details for each student :\nStudent no\nStudent name\nThe marks scored in physics,chemistry and maths out of 100 respectively\nPlease enter in the same order as mentioned above\n");
     for(i=0;i<n;i++)
     {
        scanf("%u %s %d %d %d",&stu[i].stno,stu[i].name,&stu[i].phy,&stu[i].che,&stu[i].mat);
        if (stu[i].phy<35||stu[i].che<35||stu[i].mat<35) 
          printf("Result : Fail\n");
        else
         {
             printf("Result : Pass\n");
             avg (&stu[i]);
         }
    }
}
void avg(struct student *stu)
{
     stu->tot = stu->phy + stu->che + stu->mat;
     stu->per =((float)(stu->tot)/3)*100;
    printf("Total marks =%d\nPercentage=%.2f\n",stu->tot,stu->per);
}