//Necessary header files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//Variable to store students' data
int i = 0;


//Structure to hold students' data
struct studentdata
{
char fname[25];
char sname[25];
long int rnumber;
int grade;
int aemarks;
int akmarks;
int ammarks;
int asmarks;
int assmarks;
int bemarks;
int bkmarks;
int bmmarks;
int bsmarks;
int bssmarks;
int cemarks;
int ckmarks;
int cmmarks;
int csmarks;
int cssmarks;
}
data[500];


//Function to add students' details
void addstudent()
{
int k;
for(k = 0; k < i; k++)
{
FILE *file;
file = fopen("Data1.txt", "w");
if (file == NULL)
{
printf("Error opening the file.\n");
return 1;
}
printf("Enter students's first name:");
fgets(data[i], sizeofdata), stdin);
fprintf(file, "%s", data[i].fname);
fclose(file);
}
i = i + 1;
}


//Function to update the students' details
void updatestudent()
{
int RNUMBER;
printf("\nEnter students registration number:");
scanf("%ld", &RNUMBER);

if(RNUMBER == data[i].rnumber)
{
printf("Enter students's new first name:");
scanf("%s", data[i].fname);
printf("Enter students's new second name:");
scanf("%s", data[i].sname);
printf("Enter students's new registration number:");
scanf("%ld", &data[i].rnumber);
printf("Enter students's new grade:");
scanf("%d", &data[i].grade);
printf("\nEnter students's new term 1 marks\n");
printf("English:");
scanf("%d", &data[i].aemarks);
printf("Kiswahili:");
scanf("%d", &data[i].akmarks);
printf("Mathematics:");
scanf("%d", &data[i].ammarks);
printf("Science:");
scanf("%d", &data[i].asmarks);
printf("Social Studies:");
scanf("%d", &data[i].assmarks);
printf("\nEnter students's new term 2 marks\n");
printf("English:");
scanf("%d", &data[i].bemarks);
printf("Kiswahili:");
scanf("%d", &data[i].bkmarks);
printf("Mathematics:");
scanf("%d", &data[i].bmmarks);
printf("Science:");
scanf("%d", &data[i].bsmarks);
printf("Social Studies:");
scanf("%d", &data[i].bssmarks);
printf("\nEnter students's new term 3 marks\n");
printf("English:");
scanf("%d", &data[i].cemarks);
printf("Kiswahili:");
scanf("%d", &data[i].ckmarks);
printf("Mathematics:");
scanf("%d", &data[i].cmmarks);
printf("Science:");
scanf("%d", &data[i].csmarks);
printf("Social Studies:");
scanf("%d", &data[i].cssmarks);
printf("Students details updated successfully");
}
}


//Function to delete the student by registration number
void deletestudent()
{
int RNUMBER;
printf("\nEnter students registration number:");
scanf("%ld", &RNUMBER);
int j;
for(j = 1; j <= i; j++)
{
if(RNUMBER == data[i].rnumber)
{
int k;
for(k = 1; k <= 50; k++)
data[k] = data[k + 1];
i--;
printf("Student deleted successfully");
}
}
}


//Function to find a student by registration number
void findstudent()
{
int RNUMBER;
printf("\nEnter students registration number:");
scanf("%ld", &RNUMBER);
int j;
for(j = 0; j < i; j++)
{
if(RNUMBER == data[i].rnumber)
{
printf("First name:%s\n", data[i].fname);
printf("Second name:%s\n", data[i].sname);
printf("Grade:%d\n", data[i].grade);
printf("\nStudents's term 1 marks\n");
printf("English:%d\n", data[i].aemarks);
printf("Kiswahili:%d\n", data[i].akmarks);
printf("Mathematics:%d\n", data[i].ammarks);
printf("Science:%d\n", data[i].asmarks);
printf("Social Studies:%d\n", data[i].assmarks);
printf("\nStudents's term 2 marks\n");
printf("English:%d\n", data[i].bemarks);
printf("Kiswahili:%d\n", data[i].bkmarks);
printf("Mathematics:%d\n", data[i].bmmarks);
printf("Science:%d\n", data[i].bsmarks);
printf("Social Studies:%d\n", data[i].bssmarks);
printf("\nStudents's term 3 marks\n");
printf("English:%d\n", data[i].cemarks);
printf("Kiswahili:%d\n", data[i].ckmarks);
printf("Mathematics:%d\n", data[i].cmmarks);
printf("Science:%d\n", data[i].csmarks);
printf("Social Studies:%d\n", data[i].cssmarks);
}
}
}


//Function to print the total number of students
void totalstudents()
{
printf("\nTotal number of students is:%d\n", i);
printf("You can have a maximum of 500 students");
}


//Driver code
void main()
{
int choice, count;
while(i = 1)
{
printf("\n1. Add students details\n");
printf("2. Update the student details\n");
printf("3. Delete a student by registration number\n");
printf("4. Find the student by registration number\n");
printf("5. Print the total number of students\n");
printf("6. Exit\n");
printf("Choose the task you want to perform:");
scanf("%d", &choice);
switch (choice)
{
case 1:
addstudent();
break;
case 2:
updatestudent();
break;
case 3:
deletestudent();
break;
case 4:
findstudent();
break;
case 5:
totalstudents();
break;
case 6:
exit(0);
break;
}
}
}



