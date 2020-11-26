#include <stdio.h>
struct student
{
int id,credit;
float cgpa;
};
int main()
{
int i, n;
printf("Enter The Total Number Of Student : ");
scanf("%d",&n);
struct student s[n];
printf("\nEnter Information of students:\n");
for(i=0;i<n;i++)
{
printf("\nID. : ");
scanf("%d",&(s[i].id));
printf("CREDIT : ");
scanf("%d",&(s[i].credit));
printf("CGPA: ");
scanf("%f",&(s[i].cgpa));
}
printf("\nDisplaying All Information of Students :\n");
for(i=0;i<n;i++){
    if(s[i].cgpa>3.75)
    {
        printf("\n ID who have CGPA more then 3.75 . : %d",s[i].id);
    }
    printf("\n");
}
for(i=0;i<n;i++){
    if(s[i].credit>50)
    {
        printf("\n ID who complete more then 50 credit: : %d",s[i].id);
    }
}
return 0;
}
