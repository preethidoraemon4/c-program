#include<stdio.h>
struct student {
char firstname[20];
char lastname[20];
};

struct details{
char dapt[20];
int year;
struct student name;
};
int main(){
struct student stdname={"paratha","sarathi"};
struct details std1={"ECE",2023,stdname};

printf("My name is %s %s from the department %s,completed in the year of %d",std1.name.firstname,std1.lastname,std1.dept,std1.year);
return 0;
}