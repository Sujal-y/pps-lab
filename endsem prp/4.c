// Create an employee record with emp-no, name, age, date-of-joining (year), and
// salary. If there is 20% hike on salary per annum, compute the retirement year
// of each employee and the salary at that time. [standard age of retirement is 55]
#include<stdio.h>
struct record
{
	char name[10];
    int id;
    int age;//35
    int year_of_join;//2000
    double salary;

    int retirement_year;//2035
    int total_service_years;//55-age =20
    double salary_at_retirement;//compunding stuff
};
int main(){
    struct record employee[100];
    
    printf("enter how many people data u want to enter");
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
    printf("enter name,id, age, date of joining and salary of employee %d \n", i+1);
    scanf ("%s", employee[i].name) ;
    scanf ("%d", &employee[i].id) ;
    scanf ("%d", &employee[i].age) ;
    scanf ("%d", &employee[i].year_of_join) ;
    scanf ("%lf", &employee[i].salary) ;
    }
    for(int i=0;i<n;i++){
        employee[i].total_service_years =  55-employee[i].age;
        employee[i].retirement_year = employee[i].year_of_join + employee[i].total_service_years;
    }
    int hike=0,empsalary;
    for(int i=0;i<n;i++){
        empsalary=employee[i].salary;
        for(int j=0;j<employee[i].total_service_years;j++){
            hike = 0.2*empsalary;
            empsalary+=hike;
        }
        employee[i].salary_at_retirement=empsalary;
    }
    for(int i =0; i<n;i++){
        printf("\nname = %s",employee[i].name);
        printf("\n retirement year= %d",employee[i].retirement_year);
        printf("\n retirement salary= %.2lf",employee[i].salary_at_retirement);
    }
    

printf("\n");
return 0;
}