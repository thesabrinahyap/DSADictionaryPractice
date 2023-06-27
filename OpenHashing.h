#ifndef OPENHASHING_H
#define OPENHASHING_H

#include<stdbool.h>

typedef char String[40];
typedef struct{
	String FName;
	String MName;
	String LName;
}NameType;

typedef struct{
	int day;
	int month;
	int year;
}Date;

typedef struct{
	String studID;
	String studName;
	char sex;
	Date birthDate;
	String program;
	int year;
}StudentType;

typedef struct node{
	StudentType student;
	struct node * link;
}SType, *List;

typedef struct{
	SType *students;
	int count;
	int max;
}Dictionary;

void initDictionary (Dictionary *D, int size);
char hash (String LastName, int size);
Date addDate(int day, int month, int year);
Student addStudent(); //place the data types sa sulod
bool addElement(Dictionary *D, Student S);
bool deleteElement(Dictionary *D, Student S);
bool searchElement(Dictionary *D, Student S);
void displayStudents (Dictionary D);
void visualizeStudents (Dictionary D);

#endif
